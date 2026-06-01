from enum import Enum
#花色
class Suite(Enum):
    SPADE,HEART,CLUB,DIAMOND=range(4)
# for suite in Suite:
#     print(f'{suite}:{suite.value}')
class Card:
    def __init__(self,suite,face):
        self.suite=suite
        self.face=face
    def __repr__(self):
        suites='♠♥♣♦'
        faces= ['', 'A', '2', '3', '4', '5', '6','7', '8', '9', '10', 'J', 'Q', 'K']
        return f'{suites[self.suite.value]}{faces[self.face]}'
    def __lt__(self,other):
        if self.suite==other.suite:
            return self.face < other.face
        return self.suite.value<other.suite.value
    def get_point(self):
        if self.face>=11:
            return 10
        else:
            return self.face

# card1=Card(Suite.SPADE,5)
# card2=Card(Suite.HEART,13)
# print(card1)
# print(card2)
import random
class Poker:
    #牌库
    def __init__(self):
        self.cards = [Card(suite,face) for suite in Suite for face in range(1,14)]
        self.current=0
    #洗牌
    def shuffle(self):
        self.current=0
        random.shuffle(self.cards)
    #发牌
    def deal(self):
        card=self.cards[self.current]
        self.current+=1
        return card
    #还有没有牌可发
    def has_next(self):
        return self.current<len(self.cards)

# poker=Poker()
# print(poker.cards)
# poker.shuffle()
# print(poker.cards)
class Hand:
    def __init__(self):
        self.cards=[]
    def add_card(self,card):
        self.cards.append(card)
    def get_point(self):
        total=0
        a_count=0
        for card in self.cards:
            if card.face==1:
                a_count+=1
                total+=11
            else:
                total+=card.get_point()
        while total>21 and a_count>0:
            total-=10
            a_count-=1
        return total
    def __repr__(self):
        return ' '.join(str(card) for card in self.cards)

class Blackjack:
    def __init__(self):
        self.poker=Poker()
        #角色手牌
        self.player_hand=Hand()
        #庄家手牌
        self.dealer_hand=Hand()
    def start_game(self):
        print("=" * 40)
        print("          Blackjack 21点")
        print("=" * 40)
        #洗牌
        self.poker.shuffle()
        #发牌
        self.player_hand.add_card(self.poker.deal())
        self.dealer_hand.add_card(self.poker.deal())
        self.player_hand.add_card(self.poker.deal())
        self.dealer_hand.add_card(self.poker.deal())
        #玩家回合
        self.player_turn()
        # 如果玩家未爆牌，庄家回合
        if self.player_hand.get_point() <= 21:
            self.dealer_turn()
            self.show_result()
        else:
            print("\n你爆牌了!庄家获胜。")
        
    def player_turn(self):
        while True:
            print(f'\n你的牌:{self.player_hand} (点数:{self.player_hand.get_point()})')
            print(f"庄家明牌: {self.dealer_hand.cards[0]}  (另有一张暗牌)")

            if self.player_hand.get_point()==21:
                print('恭喜胜利')
                break

            choice=input('要牌(y)or停牌(n)').lower()
            if choice=='y':
                new_card=self.poker.deal()
                self.player_hand.add_card(new_card)
                print(f"你抽到了 {new_card}")
                if self.player_hand.get_point() > 21:
                    print(f"你的点数: {self.player_hand.get_point()}，爆牌了！")
                    break
            elif choice=='n':
                print(f"你停牌，当前点数: {self.player_hand.get_point()}")
                break
            else:
                print("输入无效，请输入 y 或 n")
        
    def dealer_turn(self):
        print("\n庄家回合...")
        print(f"庄家手牌: {self.dealer_hand}  (点数: {self.dealer_hand.get_point()})")
        while self.dealer_hand.get_point() < 17:
            new_card = self.poker.deal()
            self.dealer_hand.add_card(new_card)
            print(f"庄家抽到了 {new_card}，点数变为 {self.dealer_hand.get_point()}")
            if self.dealer_hand.get_point() > 21:
                print("庄家爆牌了！")
                break
        else:
            print(f"庄家停牌，最终点数: {self.dealer_hand.get_point()}")
    def show_result(self):
        player_points = self.player_hand.get_point()
        dealer_points = self.dealer_hand.get_point()
        print("\n" + "=" * 40)
        print(f"你的最终手牌: {self.player_hand}  (点数: {player_points})")
        print(f"庄家最终手牌: {self.dealer_hand}  (点数: {dealer_points})")
        print("=" * 40)

        if dealer_points > 21:
            print("庄家爆牌！你赢了！")
        elif player_points > dealer_points:
            print("你赢了！")
        elif player_points < dealer_points:
            print("庄家赢了！")
        else:
            print("平局！") 
    
def main():
    while True:
        game = Blackjack()
        game.start_game()
        again = input("\n是否再玩一局?(y/n): ").lower()
        if again != 'y':
            print("感谢游戏，再见！")
            break

if __name__ == "__main__":
    main()
        
        
# class Player:
#     def __init__(self,name):
#         self.name=name
#         self.cards=[]
#     #摸牌
#     def get_one(self,card):
#         self.cards.append(card)
#     #理牌
#     def arrange(self):
#         self.cards.sort()
# poker=Poker()
# poker.shuffle()
# players=[Player('小明'),Player('小白'),Player('小华'),Player('小李')]
# for _ in range(13):
#     for player in players:
#         player.get_one(poker.deal())
# for player in players:
#     player.arrange()
#     print(f'{player.name}:',end=' ')
#     print(player.cards)

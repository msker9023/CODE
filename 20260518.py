# for i in range(100,1000):
#     low = i%10
#     mid = i//10%10
#     hig = i//100
#     if i==low**3+mid**3+hig**3:
#         print(i)
    
# num = float(input("输入整数:"))
# print(num)
# tag=0
# while num>0:
#     tag=tag*10+num%10
#     num//=10
# print(tag)
#百钱百鸡
# for x in range(0,21):
#     for y in range(0,33):
#         z=100-x-y
#         if z%3==0 and x*5+y*3+z//3==100:
#             print(f"公鸡有{x}只,母鸡有{y}只,小鸡有{z}只")
 #CRAPS赌博游戏
#  玩家第一次摇骰子如果摇出了 7 点或 11 点，玩家胜；玩家第一次如果摇出 2 点、3 点或 12 点，庄家胜；玩家如果摇出其他点数则游戏继续，玩家重新摇骰子，
#  如果玩家摇出了 7 点，庄家胜；如果玩家摇出了第一次摇的点数，玩家胜；其他点数玩家继续摇骰子，直到分出胜负。
#  为了增加代码的趣味性，我们设定游戏开始时玩家有 1000 元的赌注，每局游戏开始之前，玩家先下注
#  ，如果玩家获胜就可以获得对应下注金额的奖励，如果庄家获胜，玩家就会输掉自己下注的金额。游戏结束的条件是玩家破产（输光所有的赌注）。

# import random
# money=1000
# while money>0:
#     print(f"你的赌注{money}")
#     while True:
#         debt = float(input("输入下注:"))
#         if 0<debt<=money:
#             break
#     first_point=random.randrange(1,7)+random.randrange(1,7)
#     print(f"你摇出了{first_point}点")
#     if first_point==7 or first_point==11:
#         money+=debt
#         print(f"你获胜,现有赌注{money}")
#         continue
#     elif first_point==2 or first_point==3 or first_point==12:
#         money-=debt
#         print(f"你输了,现有赌注{money}")
#         continue
#     else:
#         tempt=2
#         while True:
#             current_point=random.randrange(1,7)+random.randrange(1,7)
#             print(f"第{tempt}次掷骰子,点数为:{current_point}")
#             if current_point==7:
#                 money-=debt
#                 print(f"你输了,现有赌注{money}")
#                 break
#             elif current_point==first_point:
#                 money+=debt
#                 print(f"你获胜,现有赌注{money}")
#                 break
#             else:
#                 tempt+=1
#                 continue
#     if money==0:
#         print("你输了")
#         break
##列表
# items1 = [35, 12, 99, 68, 55, 35, 87]
# print(items1)
# for i in range(len(items1)):
#     print(items1[i])
# items4 = list(range(1, 10))
# items5 = list('hello')
# print(items4)
# print(items4[1:8:2])
# print(items4[-1:-9:-2])
# import random
# counters =[0]*6
# for i in range(6000):
#     face = random.randrange(1,7)
#     counters[face-1]+=1
# for face in range(1,7):
#     print(f"{face}的次数为{counters[face-1]}")
languages = ['Python', 'Java', 'C++']
languages.append('C')
languages.insert(1,'C#')
print(languages)
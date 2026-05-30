# def my_function():
#     for i in range(10):
#         yield i
# s=my_function()
# print(next(s))
# print(next(s))
# print(next(s))
# print(next(s))
# print(next(s))
# def odd():
#     print('next1')
    
#     print('next2')
#     yield 2
#     print('next3')
#     yield 3
# s=odd()
# print(next(s))
# print(next(s))
# def fibon(n):
#     a = b = 1
#     for _ in range(n):
#         yield a
#         a, b = b, a + b

# for x in fibon(10):
#     print(x, end=' ')
# list1 = [1, 2, 3, 4, 5]
# for i in reversed(list1):
#     print(i,end=' ')
# names = ['liangdianshui', 'twowater', '两点水','三点水']
# ages = [18, 19, 20]
# dict1 = dict(zip(names, ages))
# print(dict1)
# import math

# print(math.pi)          # 圆周率 3.141592653589793
# print(math.e)           # 自然常数 e
# print(math.sqrt(16))    # 平方根 → 4.0
# print(math.floor(3.7))  # 向下取整 → 3
# print(math.ceil(3.2))   # 向上取整 → 4
# import random

# random.seed(42)              # 固定随机种子，结果可复现
# print(random.randint(1, 10)) # 1-10 之间的随机整数（含两端）
# print(random.choice(['A', 'B', 'C']))  # 随机选一个
# help(random.choice)
# class Book:
#     def __init__(self, title):
#         self.title = title

#     def __str__(self):
#         return f'《{self.title}》'

#     def __repr__(self):
#         return f"Book(title={self.title!r})"
class Playlist:
    def __init__(self, songs):
        self.songs = songs

    def __len__(self):
        return len(self.songs)
    def __str__(self):
        return f'{self.songs}'

    def __getitem__(self, index):
        return self.songs[index]

p = Playlist(['歌1', '歌2', '歌3'])
print(p)
print(p[0])   # 歌1
print(p[-1])  # 歌3
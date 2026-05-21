# import random
# Red_balls=[i for i in range(1,34)]
# Blue_balls=[i for i in range(1,17)]
# def choose():
#     selected_balls=random.sample(Red_balls,6)
#     selected_balls.sort()
#     selected_balls.append(random.sample(Blue_balls,1)[0])
#     return selected_balls
# def display(balls):
#     for ball in balls[:-1]:
#         print(f'\033[031m{ball:0>2d}\033[0m', end=' ')
#     print(f'\033[034m{balls[-1]:0>2d}\033[0m')
# n = int(input('生成几注号码: '))
# for _ in range(n):
#     display(choose())
# def foo(*args, **kwargs):
#     print(args)
#     print(kwargs)


# foo(3, 2.1, True, name='骆昊', age=43, gpa=4.95)
# def calc(*args, **kwargs):
#     items = list(args) + list(kwargs.values())
#     result = 0
#     for item in items:
#         if type(item) in (int , float):
#             result += item
#     return result
# s=calc(5,12,0.39,a='abc',b=56)
# print(s)
# def add(x, y):
#     return x + y


# def mul(x, y):
#     return x * y
# import operator
# #外置函数运算
# #init_value:初始值
# #op_func:运算函数
# def calc(init_value, op_func, *args, **kwargs):
#     items = list(args) + list(kwargs.values())
#     result = init_value
#     for item in items:
#         if type(item) in (int, float):
#             result = op_func(result, item)
#     return result
# print(calc(0, add, 1, 2, 3, 4, 5))
# print(calc(0, operator.add, 1, 2, 3, 4, 5))  # 15
# print(calc(1, operator.mul, 1, 2, 3, 4, 5)) 
#sorted:对容器型数据类型（如：列表、字典等）元素的排序,返回一个新列表对象
# old_strings = ['in', 'apple', 'zoo', 'waxberry', 'pear']
# new_strings = sorted(old_strings)
# print(new_strings) 
# old_nums=[35,15,23,20,16,85]
# new_nums=[i**2 for i in old_nums if i%2==0]
# print(new_nums)
help(map)
# languages = ['Python', 'SQL', 'Java', 'C++', 'JavaScript']
# languages.append('C++')
# print(languages)
# languages.remove('C++')
# #删除第一个C++
# print(languages)
# tmp= languages.pop(4)
# print(tmp)
# print(languages)
# items = ['Python', 'Java', 'Java', 'C++', 'Kotlin', 'Python']
# i =items.index('Python')
# print(i)
# j=items.count('Python')
# print(j)
# items = ['Python', 'Java', 'C++', 'Kotlin', 'Swift']
# items.sort()
# print(items)  # ['C++', 'Java', 'Kotlin', 'Python', 'Swift']
# items.reverse()
# print(items)  # ['Swift', 'Python', 'Kotlin', 'Java', 'C++']
# nums1 = [35, 12, 97, 64, 55]
# nums2 = [num for num in nums1 if num > 50]
# print(nums2)
# scores = []
# for _ in range(5):
#     temp = []
#     for _ in range(3):
#         score = int(input('请输入: '))
#         temp.append(score)
#     scores.append(temp)
#     print(scores)
# print(scores)
#产生随机数的方式来生成5个学生3门课程的成绩并保存在列表中，我们可以使用列表生成式，代码如下所示。
#import random
# scores = []
# for i in range(5):
#     temp=[]
#     for _ in range(3):
#         score=random.randrange(0,101)
#         temp.append(score)
#     scores.append(temp)
#     print(scores[i])
#scores = [[random.randrange(60, 101) for _ in range(3)] for _ in range(5)]
#print(scores)
#双色球是由中国福利彩票发行管理中心发售的乐透型彩票，每注投注号码由`6`个红色球和`1`个蓝色球组成。红色球号码从`1`到`33`中选择，
#蓝色球号码从`1`到`16`中选择。每注需要选择`6`个红色球号码和`1`个蓝色球号码，
# import random
# from rich.console import Console
# from rich.table import Table
# console = Console()
# red_balls=list(range(1,34))
# selected_ball=[]
# for _ in range(1,7):
#     index =random.randrange(len(red_balls))
#     selected_ball.append(index)
# selected_ball.sort()
# print(selected_ball)
# blue_ball=list(range(1,17))
# selected_ball.append(random.randrange(len(blue_ball)))
# print(selected_ball)
# n = int(input('生成几注号码: '))
# red_balls = [i for i in range(1, 34)]
# blue_balls = [i for i in range(1, 17)]
# table = Table(show_header=True)
# for col_name in ('序号', '红球', '蓝球'):
#     table.add_column(col_name, justify='center')

# for i in range(n):
#     selected_balls = random.sample(red_balls, 6)
#     selected_balls.sort()
#     blue_ball = random.choice(blue_balls)
#     # 向表格中添加行（序号，红色球，蓝色球）
#     table.add_row(
#         str(i + 1),
#         f'[red]{" ".join([f"{ball:0>2d}" for ball in selected_balls])}[/red]',
#         f'[blue]{blue_ball:0>2d}[/blue]'
#     )

# # 通过控制台输出表格
# console.print(table)
# s1 = '\it \is \time \to \read \now'
# s2 = r'\it \is \time \to \read \now'
# print(s1)
# print(s2)
# s1 = 'hello' + ', ' + 'world'
# print(s1)    
# s2 = '!' * 3
# print(s2)    
# s1 += s2
# print(s1)    
# s1 *= 2
# print(s1)
# s1 = 'hello, world'
# s2 = 'goodbye, world'
# print('wo' in s1)      # True
# print('wo' not in s2)  # False
# print(s2 in s1) 
# s = 'hello'
# for i in range(len(s)):
#     print(s[i])
# s = 'hello'
# for elem in s:
#     print(elem)
# str=[1,2,3,4,5,6]
# for i in str:
#     print(i)
# set1 = {1, 2, 3, 3, 3, 2}
# print(set1)

# set2 = {'banana', 'pitaya', 'apple', 'apple', 'banana', 'grape'}
# print(set2)

# set3 = set('hello')
# print(set3)

# set4 = set([1, 2, 2, 3, 3, 3, 2, 1])
# print(set4)

# set5 = {num for num in range(1, 20) if num % 3 == 0 or num % 7 == 0}
# print(set5)
# print(type(set5))
# set1 = {'Python', 'C++', 'Java', 'Kotlin', 'Swift'}
# set1.add('C')
# for elem in set1:
#     print(elem)
# xinhua = {
#     '麓': '山脚下',
#     '路': '道，往来通行的地方；方面，地区：南～货，外～货；种类：他俩是一～人',
#     '蕗': '甘草的别名',
#     '潞': '潞水，水名，即今山西省的浊漳河；潞江，水名，即云南省的怒江'
# }
# print(xinhua)
# person = {
#     'name': '王大锤',
#     'age': 55,
#     'height': 168,
#     'weight': 60,
#     'addr': '成都市武侯区科华北路62号1栋101', 
#     'tel': '13122334455',
#     'emergence contact': '13800998877'
# }
# print(person)
"求阶乘"
# def jiecheng(num):
#     result =1
#     for _ in range(2,num+1):
#         result *= _
#     return result
# s=int(float(input()))
# print(jiecheng(s))
# from math import factorial as f

# m = int(input('m = '))
# n = int(input('n = '))
# print(f(m) // f(n) // f(m - n))
# 用星号表达式来表示args可以接收0个或任意多个参数
# 调用函数时传入的n个参数会组装成一个n元组赋给args
# 如果一个参数都没有传入，那么args会是一个空元组
def add(*args):
    total = 0
    # 对保存可变参数的元组进行循环遍历
    for val in args:
        # 对参数进行了类型检查（数值型的才能求和）
        if type(val) in (int, float):
            total += val
    return total


# 在调用add函数时可以传入0个或任意多个参数
print(add())         # 0
print(add(1))        # 1
print(add(1, 2, 3))  # 6
print(add(1, 2, 'hello', 3.45, 6))  # 12.45
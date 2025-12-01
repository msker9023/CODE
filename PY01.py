# print("hello world")
# a = 10
# b = 20
# a += b
# print(a)
# =表示赋值
# ==表示相等
# and 表示而且
# or 表示或者
# not 表示相反
# flag0 = 1 == 1
# flag1 = 2 > 1
# flag2 = not flag0
# print("flag0 =", flag0)
# print("flag1 =", flag1)
# print("flag2 =", flag2)
# r = float(input("请输入圆的半径："))
# c = 2 * 3.1415926535 * r
# s = 3.1415926535 * r ** 2
# .2f表示保留两位小数
# print(f"周长：{c:.2f}")
# print(f"面积：{s:.2f}")
# float 表示将字符串转换为小数
# str 表示将数字转换为字符串
# int 表示将字符串转换为整数
# height = float(input("身高(cm):"))
# weight = float(input("体重(kg):"))
# bmi = weight / (height /100) ** 2
# print(f"你的BMI指数是:{bmi:.2f}")
# if 18.5 <= bmi < 24:
#     print("very good")
#     print("你的体重正常")
# else:
#     print("not good")
#     print("你的体重不正常")
#前面的f表示这个字符串是需要格式化处理的，
# 其中的{f:.1f}和{c:.1f}可以先看成是{f}和{c}，
# 表示输出时会用变量f和变量c的值替换掉这两个占位符，
# 后面的:.1f表示这是一个浮点数，小数点后保留1位有效数字
# f = float(input("请输入华氏温度"))
# c = (f - 32) / 1.8
# print(f"{f:.1f}华氏度 = {c:.1f}摄氏度" )
# f = float(input('请输入华氏温度: '))
# c = (f - 32) / 1.8
# print(f'{f:.1f}华氏度 = {c:.1f}摄氏度')
#import math表示导入math模块，导入该模块以后,
# 才能用math.pi得到圆周率的值
import math
# r = float(input("请输入圆的半径"))
# L = 2 * math.pi * r
# S = math.pi * r ** 2
# print(f"圆的周长L = {L:.2f}")
# print(f"圆的面积S = {S:.2f}")
# print(f"{L = :.2f}")
# print(f"{S = :.2f}")
# year = int(input("请输入年份:"))
# is_leap = (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)
# if is_leap:
#     print("是闰年")
# else:
#     print("不是闰年")
#        计算BMI指数
# height = float(input("身高(cm):"))
# weight = float(input("体重(kg):"))
# bmi = weight / (height /100) ** 2
# print(f"你的BMI指数是:{bmi:.2f}")
#            "变量:"表示输出时会用变量的值替换掉这个占位符
#             ".2f"表示这是一个浮点数，小数点后保留2位有效数字
#             f""表示这是一个需要格式化处理的字符串
#             大括号{}里面可以放变量名或者表达式"
# if bmi < 18.5:
#     print("not good")
#     print("你的体重过轻")
# elif bmi < 24:
#     print("very good")
#     print("你的体重正常")
# elif bmi < 27:
#     print("not good")
#     print("你的体重过重")
# elif bmi < 30:
#     print("not good")
#     print("你已轻度肥胖")
# elif bmi < 35:
#     print("not good")
#     print("你已中度肥胖")
# else:
#     print("not good")
#     print("你已重度肥胖")
#                             
# 根据输入的x，计算y的值 
# x = float(input("x ="))
# if x > 1:
#     y = 3 * x - 5
# else:
#     if x >= -1:
#         y = x + 2
#     else:
#         y = 5 * x +3
# print(f"{y =}")
#         成绩转化为等级
# score = float(input("请输入成绩:"))
# if score >= 90:
#     grade = "A"
# elif score >= 80:
#     grade = "B"
# elif score >= 70:
#     grade = "C"
# elif score >= 60:
#     grade = "D"
# else:
#     grade = "E"
# print(f"成绩是:{grade}")
#           计算三角形的周长
# a = float(input("a = "))
# b = float(input("b = "))
# c = float(input("c = "))
# if a + b > c and a + c > b and b + c > a:
#     L = a + b + c
#     print(f"周长是:{L}")
# else:
#     print("不能构成三角形")
#            for _ in 循环
#range(1,101,2)输出1到100之间的整数,",2"表示步长
import time
# for _ in range(1,3601,1000):
#     print("hello world")
#     time.sleep(0.005)
#      从1到100的整数求和
# total = 0
# for _ in range(1,101):
#     total += _
# print(total)
#      从1到100之间的奇数求和
#total 的作用是保存累加的结果
# total = 0
# for _ in range(1,101):
#     if _ % 2 == 1:
#         total += _
# print(total)
#        从1到100之间的偶数求和
# total = 0
# for _ in range(2,101,2):
#     total += _
# print(total)
#        print(sum(range(2,101,2)))
# total = 0
# _ = 1
# for _ in range(1,201):
#     if _ <= 100:
#         total += _
#     else:
#         total -= _
# print(total)
#     continue可以跳过本次循环，进入下一次循环
# total = 0
# for i in range(1,101):
#     if i % 2 != 0:
#         continue
#     total += i
# print(total)
#           
# for i in range(1,10):
#     for j in range(1,i+1):
#         print(f"{i} * {j} = {i * j}",end="\t")
#     print()
#      求两个整数的最大公约数
# x = int(input("x ="))
# y = int(input("y ="))
# for i in range(x,0,-1):
#     if x % i == 0 and y % i == 0:
#         print(f"{x}和{y}的最大公约数是:{i}")
#         break 
#       欧几里得算法
# x = int(input("x ="))
# y = int(input("y ="))
# while y % x != 0:
#     x,y = y % x, x
# print(f"{x}和{y}的最大公约数是{x}")
#      猜数字游戏
import random
# answer = random.randrange(1,101)
# counter = 0
# while True:
#     counter += 1
#     number = int(input("请输入你猜的数字:"))
#     if number < answer:
#         print("猜小了")
#     elif number > answer:
#         print("猜大了")
#     else:
#         print(f"恭喜你猜对了,共猜了{counter}次")
#         break
#      斐波那契数列
# a = 1
# b = 1
# for i in range(1,101):
#     a, b = b, a + b 
#     print(a)
#      百钱百鸡问题
# x是公鸡,y是母鸡,z是小鸡
# for x in range(0,21):
#     for y in range(0,34):
#         for z in range(0,101):
#             if x + y + z == 100 and 5 * x + 3 * y + z / 3 == 100:
#                 print(f"公鸡{x}只,母鸡{y}只,小鸡{z}只") 
#改
# for x in range(0,21):
#     for y in range(0,34):
#         z = 100 - x - y
#         if 5 * x + 3 * y + z / 3 == 100:
#             print(f"公鸡{x}只,母鸡{y}只,小鸡{z}只") 
#       赌博游戏
# money = 1000
# while money > 0:
#     print(f"你的总资产是:{money}")
#     while True:
#         debt = int(input("请下注:"))
#         if 0 < debt <= money:
#             break
#     first_point = random.randrange(1,7) + random.randrange(1,7)
#     print(f"你掷出的点数是:{first_point}")
#     if first_point == 7 or first_point == 11:
#         print("你赢了!")
#         money += debt
#     elif first_point == 2 or first_point == 3 or first_point == 12:
#         money -= debt
#         print("庄家赢了!")
#     else:
#         print("重新掷骰子")
#         while True:
#             current_point = random.randrange(1,7) + random.randrange(1,7)
#             print(f"你掷出的点数是:{current_point}")
#             if current_point == first_point:
#                 print("你赢了")
#                 money += debt
#                 break
#             elif current_point == 7:
#                 print("庄家赢了")
#                 money -= debt
#                 break
#             else:
#                 print("重新掷骰子")
#                 continue
# print("你破产了,游戏结束")
#第一次掷骰子掷出7或11点,玩家胜,掷出2,3或12点,庄家胜,
# 掷出其他点数,游戏继续,玩家需要继续掷骰子,
# 直到掷出和第一次掷出的点数相同,玩家胜,
# 或掷出7点,庄家胜
import random
# money = 1000
# while money > 0:
#     print(f"你的总资产是:{money}")
#     while True:
#         debt = int(input("请下注:"))
#         if 0 < debt <= money:
#             break
#     first_point = random.randrange(1,7) + random.randrange(1,7)
#     if first_point == 7:
#         replay = random.randrange(1,10)
#         if replay == 1:
#             print("你掷出的点数是:7")
#             money += debt
#             print("玩家胜")
#         else:
#             print("你掷出骰子是2")
#             money -= debt
#             print("庄家胜")
#     elif first_point == 11:
#         print("你掷出的骰子是11")
#         money += debt
#         print("玩家胜")
#     elif first_point == 2 or first_point == 3 or first_point == 12:
#         print(f"你掷出的骰子是:{first_point}")
#         money -= debt
#         print("庄家胜")
#     else:
#         print(f"你掷出的点数是:{first_point}")
#         print("重新掷骰子")
#         while True:
#             current_point = random.randrange(1,7) + random.randrange(1,7)
#             if current_point == first_point:
#                 print(f"你掷出的点数是:{current_point}")
#                 money += debt
#                 print("你赢了")
#                 break
#             elif current_point == 7 :
#                 print("你掷出的点数是:7")
#                 money -= debt
#                 print("庄家胜")
#                 break
#             else:
#                 print(f"你掷出的点数是:{current_point}")
#                 print("重新掷骰子")
# print("你输光了")
# p1 = 0
# p2 = 0
# p3 = 0
# p4 = 0
# p5 = 0
# p6 = 0
# for _ in range(1,6001):
#     point = random.randrange(1,7)
#     if point == 1:
#         p1 += 1
#     elif point == 2:
#         p2 += 1
#     elif point == 3:
#         p3 += 1
#     elif point == 4:
#         p4 += 1
#     elif point == 5:
#         p5 += 1
#     elif point == 6:
#         p6 += 1
# print(f"一点出现了{p1}次")
# print(f"二点出现了{p2}次")
# print(f"三点出现了{p3}次")
# print(f"四点出现了{p4}次")
# print(f"五点出现了{p5}次")
# print(f"六点出现了{p6}次")
#在 Python 中，可以使用`[]`字面量语法来定义列表，列表中的多个元素用逗号进行分隔
# items1 = list(range(1,10))
# items2 = list('hello')
# print(items1)
# print(items2)
# print(items1 + items2)
# items3 = list('python')
# items3 += items2
# print(items3[2])
# print(type(items1))
# print(items2 * 3)
# items8 = ["apple","banana","orange","watermelon","peach","pear"]
# print(items8[1])
# print(items8[-2])
#如果希望一次性访问列表中的多个元素，我们可以使用切片运算。
# 切片运算是形如`[start:end:stride]`的运算符，
# 其中`start`代表访问列表元素的起始位置，`end`代表访问列表元素的终止位置
# （终止位置的元素无法访问），而`stride`则代表了跨度，简单的说就是位置的增量，
# 比如我们访问的第一个元素在`start`位置，
# 那么第二个元素就在`start + stride`位置，当然`start + stride`要小于`end`
#如果`start`值等于`0`，那么在使用切片运算符时可以将其省略;
# 如果`end`值等于`N`，`N`代表列表元素的个数，那么在使用切片运算符时可以将其省略；
# 如果`stride`值等于`1`，那么在使用切片运算符时也可以将其省略
# items8[1:4] = ["x","y","z"]
# print(items8)
# nums1 = [1,2,3,4,5]
# nums2 = list(range(1,5))
# nums3 = list(range(6,0,-1) )
# print(nums1)
# print(nums2)
# print(nums3)
# languages = ["python","c","java","c++"]
# for language in languages:
#     print(language)
# for _ in range(0,4):
#     print(languages[_])
#len()函数可以返回列表中元素的个数
# counters = [0] * 6
# for _ in range(6000):
#     point = random.randrange(1,7)
#     counters[point - 1] += 1
# for point in range(1,7):
#     print(f"{point}点出现了{counters[point - 1]}次")
# append()方法可以在列表的末尾添加一个元素
# insert()方法可以在列表的指定位置插入一个元素
# remove()方法可以删除列表中的指定元素
# fruits = ["apple","banana","orange","pear","peach","pear","pear"]
# fruits.append("watermelon")
# fruits.insert(0,"peach")
# if "peach" in fruits:
#     fruits.remove("peach")
# absence = fruits.pop()
# fruits.append(absence)
# print(fruits.index("pear"))
# print(fruits.index("pear",4))
# print(fruits.count("pear"))
# print(fruits)
# print(absence)
# fruits.sort()
# fruits.reverse()
# print(fruits)
#index()方法可以返回列表中某个元素的索引位置
# count()方法可以返回列表中某个元素出现的次数
# reverse()方法可以将列表中的元素反转
# items = []
# for _ in range(1,101):
#     if _ % 3 == 0 or _ % 5 == 0:
#         items.append(_)
# print(items)
# items1 = [_ for _ in range(1,101) if _ % 3 == 0 or _ % 5 == 0]
# print(items1)
nums1 = [2,4,6,8,10]
# nums2 = []
# for num in nums1:
#     nums2.append(num ** 2)
# print(nums2)
# nums3 = [num ** 2 for num in nums1]
# print(nums3)
# nums1 = [i for i in range(1,101)]
# nums2 = [i for i in nums1 if i >= 50]
# print(nums2)
# nums1 = []
# nums2 = []
# for i in range(1,101):
#     if i >= 50:
#         nums2.append(i)
# print(nums2)
# scores = []
# for i in range(5):
#     print(f"请输入{i+1}位同学的成绩")
#     temp = []
#     for _ in range(3):
#         score = int(input("请输入:"))
#         temp.append(score)
#     scores.append(temp)
#     print(f"第{i+1}位同学的成绩是{temp}")
# print(f"所以同学的成绩是{scores}")
# scores = [[random.randrange(60,101) for _ in range(3)] for _ in range(5)]
# print(scores)
# red_balls = [i for i in range(1,34)]
# blue_balls = [i for i in range(1,17)]
# selected_balls = random.sample(red_balls,6)
# selected_balls.sort()
# for ball in selected_balls:
#     print(f"{ball:0>2d}",end = " ")
# blue_ball = random.choice(blue_balls)
# print(f"{blue_ball:0>2d}")
# n = int(input("生成几注号码:"))
# for _ in range(n):
#     selected_balls = []
#     while len(selected_balls) <= 6:
#         selected_ball = random.randrange(1,34)
#         if selected_ball not in selected_balls:
#             selected_balls.append(selected_ball)
#     selected_balls.sort()
#     blue_ball = random.randrange(1,17)
#     selected_balls.append(blue_ball)
#     print(selected_balls)
# s1 = "hello" + "," + "world"
# s2 = "?" * 3
# s1 += s2
# s2 *= 2
# s3 ="""hello,
# wonderful
# world!"""
# print(s1)
# print(s2)
# print(s3)
# print(len(s3))
# for i in s3:
#     print(i)
# print(s1.upper())
# print(s1.startswith("he"))
# print("2024".center(10,"!"))
# a = 321
# b = 123
# print(f"{a} * {b} = {a*b}")
# s = "hello"
# for i in s:
#     print(i)
# s = "hello,world"
# print(s.center(20,"@"))
# print(s.rjust(20))
# print(s.ljust(20))
# print(s.zfill(10))
s1 = "   jacklove@163.com   "
print(s1.remove( ))
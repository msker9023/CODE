# import time
# from functools import lru_cache
# def fib1(n):
#     if n in (1, 2):
#         return 1
#     return fib1(n - 1) + fib1(n - 2)

# start=time.time()
# print(fib1(20))
# end =time.time()
# print(start-end)
# @lru_cache()
# def fib2(n):
#     a, b = 0, 1
#     for _ in range(n):
#         a, b = b, a + b
#     return a
# start=time.time()
# print(fib2(20))
# end =time.time()
# print(start-end)
# class Student:
#     def __init__(self,name,age):
#         #初始化
#         self.name=name
#         self.age=age
#     def study(self,course_name):
#         print(f"{self.name}正在学习{course_name}.")
#     def play(self):
#         print(f'{self.name}正在玩游戏.')
# stu1=Student('小明',18)
# stu2=Student('小白',16)
# #变量名表示地址
# # print(stu1)
# # print(stu2)
# #两种方法
# # 通过“类.方法”调用方法
# # 第一个参数是接收消息的对象
# # 第二个参数是学习的课程名称
# # Student.study(stu1,'Python')
# # 通过“对象.方法”调用方法
# # 点前面的对象就是接收消息的对象
# # 只需要传入第二个参数课程名称
# stu1.study('Python程序设计') 
# stu1.play()
# stu2.study('C++')
import time
class Clock:
    def __init__(self,hour=0,minute=0,second=0):
        self.hour=hour
        self.minute=minute
        self.second=second
    def run(self):
        self.second+=1
        if self.second == 60:
            self.second = 0
            self.minute += 1
            if self.minute == 60:
                self.minute = 0
                self.hour += 1
                if self.hour == 24:
                    self.hour = 0
    def show(self):
        return f'{self.hour:0>2d}:{self.minute:0>2d}:{self.second:0>2d}'
clock = Clock(23, 59, 58)
while True:
    # 给时钟对象发消息读取时间
    print(clock.show())
    # 休眠1秒钟
    time.sleep(1)
    # 给时钟对象发消息使其走字
    clock.run()
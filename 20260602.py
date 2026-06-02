# from abc import ABCMeta,abstractmethod
# class Employee(metaclass=ABCMeta):
#     def __init__(self,name):
#         self.name=name
#     @abstractmethod
#     def get_salary(self):
#         """结算月薪"""
#         pass

# class Manager(Employee):
#     def get_salary(self):
#         return 15000.0

# class Programmer(Employee):
#     def __init__(self,name,working_hour=0):
#         super().__init__(name)
#         self.working_hour=working_hour
#     def get_salary(self):
#         return 200*self.working_hour

# class Salesman(Employee):
#     def __init__(self,name,sales=0):
#         super().__init__(name)
#         self.sales=sales
#     def get_salary(self):
#         return 1800+self.sales*0.05

# emps = [Manager('刘备'), Programmer('诸葛亮'), Manager('曹操'), Programmer('荀彧'), Salesman('张辽')]
# for emp in emps:
#     if isinstance(emp, Programmer):
#         emp.working_hour = int(input(f'请输入{emp.name}本月工作时间: '))
#     elif isinstance(emp, Salesman):
#         emp.sales = int(input(f'请输入{emp.name}本月销售额: '))
#     print(f'{emp.name}本月工资为: ￥{emp.get_salary():.2f}元')


#创建文件并写入内容
# content = """我如果爱你——
# 绝不像攀援的凌霄花，
# 借你的高枝炫耀自己；

# 我如果爱你——
# 绝不学痴情的鸟儿，
# 为绿荫重复单调的歌曲；

# 也不止像泉源，
# 常年送来清凉的慰藉；
# 也不止像险峰，
# 增加你的高度，衬托你的威仪。

# 甚至日光，
# 甚至春雨。

# 不，这些都还不够！
# 我必须是你近旁的一株木棉，
# 作为树的形象和你站在一起。

# 根，紧握在地下；
# 叶，相触在云里。

# 每一阵风过，
# 我们都互相致意，
# 但没有人，
# 听懂我们的言语。

# 你有你的铜枝铁干，
# 像刀，像剑，也像戟；
# 我有我红硕的花朵，
# 像沉重的叹息，
# 又像英勇的火炬。

# 我们分担寒潮、风雷、霹雳；
# 我们共享雾霭、流岚、虹霓。
# 仿佛永远分离，
# 却又终身相依。

# 这才是伟大的爱情，
# 坚贞就在这里：
# 爱——
# 不仅爱你伟岸的身躯，
# 也爱你坚持的位置，足下的土地。"""

# with open('致橡树.txt', 'w', encoding='utf-8') as file:
#     file.write(content)

# print("文件创建成功！")
# file=open('致橡树.txt','r',encoding='utf-8')
# print(file.read())
# file.close()

# import os
# print(os.getcwd())   # 显示当前工作目录
# with open('致橡树.txt', 'w', encoding='utf-8') as file:
#     file.write('测试内容')
# def make_counter():
#     count = 0
#     def counter():
#         nonlocal count
#         count = count + 1
#         return count
#     return counter

# c = make_counter()
# print(c.__closure__)
# file =open('致橡树.txt','r',encoding='utf-8')
# for line in file:
#     print(line,end='')
# file.close
# file=open('致橡树.txt','w',encoding='utf-8')
# file.write('\n标题: <致橡树>')
# file.write('\n作者: 舒婷')
# file.write('\n时间: 1977年3月')
# file.close
# file =open('致橡树.txt','r',encoding='utf-8')
# for line in file:
#     print(line,end='')
# file.close
# file=None
# try:
#     with open('测试.txt','w',encoding='utf-8') as file:
#         file.write('测试内容')
# except Exception:
#     print('报错')
    
    
# file=open('测试.txt','r',encoding='utf-8')
# print(file.read())
# file.close()
class InputError(ValueError):
    """自定义异常类型"""
    pass


def fac(num):
    """求阶乘"""
    if num < 0:
        raise InputError('InputError')
    if num in (0, 1):
        return 1
    return num * fac(num - 1)
try:
    a=fac(int(input('输入')))
    print(a)
except InputError:
    print('InputError')
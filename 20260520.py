# import random
# import string

# ALL_CHARS = string.digits + string.ascii_letters
# # print(ALL_CHARS)
# # # 用星号表达式来表示args可以接收0个或任意多个参数
# # # 调用函数时传入的n个参数会组装成一个n元组赋给args
# # # 如果一个参数都没有传入，那么args会是一个空元组
# # def add(*args):
# #     total = 0
# #     # 对保存可变参数的元组进行循环遍历
# #     for val in args:
# #         # 对参数进行了类型检查（数值型的才能求和）
# #         if type(val) in (int, float):
# #             total += val
# #     return total
# # s=add(1,5,6,0.2,'float')
# # print(s)
# def generate_code(*, code_len=4):
#     """
#     生成指定长度的验证码
#     :param code_len: 验证码的长度(默认4个字符)
#     :return: 由大小写英文字母和数字构成的随机验证码字符串
#     """
#     #k是choices的关键字参数
#     return ''.join(random.choices(ALL_CHARS, k=code_len))
# print(generate_code(code_len=4))



#判断质数
#设计一个判断给定的大于1的正整数是不是质数的函数。质数是只能被1和自身整除的正整数（大于1），
# 如果一个大于 1 的正整数 $\small{N}$ 是质数，那就意味着在 2 到 $\small{N-1}$ 之间都没有它的因子
def judge(tag):
    # for _ in range(2,tag):
    for _ in range(2,int(tag**0.5+1)):
        if tag%_==0:
            print(f'{tag}不是质数')
            return False
    print(f"{tag}是质数")
    return True
for _ in range(2,1000):
    judge(_)
    

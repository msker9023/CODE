# import random
# import openpyxl
# wb=openpyxl.Workbook()
# sheet=wb.active
# sheet.title='期末成绩'
# titles=('姓名', '语文', '数学', '英语')
# for col_index,title in enumerate(titles):
#     sheet.cell(1,col_index+1,title)
# names = ('关羽', '张飞', '赵云', '马超', '黄忠')
# for row_index,name in enumerate(names):
#     sheet.cell(row_index+2,1,name)
#     for col_index in range(2,5):
#         sheet.cell(row_index+2,col_index,random.randrange(50,101))
# wb.save('考试成绩表.xlsx')
# from PIL import Image,ImageDraw,ImageFont
# import random
# def random_color():
#     red=random.randint(0,255)
#     green=random.randint(0,255)
#     blue=random.randint(0,255)
#     return red,green,blue

# width,height=800,600
# image=Image.new(mode='RGB',size=(width,height),color=(255,255,255))
# drawer=ImageDraw.Draw(image)
# font=ImageFont.truetype('msyh.ttc', 32)
# drawer.text((300,50),'Hello,world!',fill=(255,0,0),font=font)
# drawer.line((0,0,width,height),fill=(0,0,255),width=2)
# drawer.line((width,0,0,height),fill=(0,0,255),width=2)
# xy=(width//2-60,height//2-60,width//2+60,height//2+60)
# drawer.rectangle(xy,outline=(255,0,0),width=2)
# image.show()


# import re
# # username=input('输入用户名')
# # qq=input('请输入QQ号')
# # m1=re.match(r'^[0-9a-zA-Z]{6,20}$',username)
# # if not m1:
# #     print('请输入有效的用户名.')
# # m2=re.fullmatch(r'\d{4,11}',qq)
# # if not m2:
# #     print('请输入有效的QQ号.')
# # print(m1.group())
# # print(m2.group())
# sentence='''重要的事情说8130123456789遍,我的手机号是13512346789这个靓号,
# 不是15600998765,也不是110或119,王大锤的手机号才是15600998765。'''
# pattern=re.findall('([0-9]+)',sentence)
# print(pattern)
# prices = {
#       'AAPL': 191.88,
#       'GOOG': 1186.96,
#       'IBM': 149.24,
#       'ORCL': 48.44,
#       'ACN': 166.89,
#       'FB': 208.09,
#       'SYMC': 21.29
#   }
# prices2={key:value for key,value in prices.items() if value>100}
# print(prices2)
# import requests
# import re
# headers = {
#     'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36'
# }
# resp=requests.get('https://www.sohu.com/',headers=headers)
# pattern = re.compile(r'<a.*?href="(.*?)".*?title="(.*?)".*?>')
# if resp.status_code==200:
#     all_matches = pattern.findall(resp.text)
#     for href, title in all_matches:
#         print(href)
#         print(title)
# resp = requests.get('https://www.baidu.com/img/PCtm_d9c8750bed0b3c7d089fa7d55720d6cf.png')
# with open('baidu.png', 'wb') as file:
#     file.write(resp.content)
# import requests
# import re
# import random
# import time
# for page in range(1,11):
#     resp=requests.get( 
#         url=f'https://movie.douban.com/top250?start={(page - 1) * 25}',
#         headers={'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_14_6) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/92.0.4515.159 Safari/537.36'})
    
#     pattern1=re.compile(r'<span class="title">([^$]*?)</span>')
#     titles=pattern1.findall(resp.text)
#     pattern2=re.compile(r'<span class="rating_num".*?>(.*?)</span>')
#     ranks=pattern2.findall(resp.text)
    
#     for title,rank in zip(titles,ranks):
#         print(title,rank)
#     with open(f'记录{page}.txt','w',encoding='utf-8') as file:
#         for title,rank in zip(titles,ranks):
#             file.write(f'{title}\t{rank}\n')
#     time.sleep(random.random()*4+1)
from lxml import etree
import requests
for page in range(1,11):
    resp=requests.get(url=f'https://movie.douban.com/top250?start={(page - 1) * 25}',
        headers={'User-Agent': 'BaiduSpider'})
    tree=etree.HTML(resp.text)
    title_spans=tree.xpath('//*[@id="content"]/div/div[1]/ol/li/div/div[2]/div[1]/a/span[1]')
    rank_spans=tree.xpath('//*[@id="content"]/div/div[1]/ol/li[1]/div/div[2]/div[2]/div/span[2]')
    for title_span,rank_span in zip(title_spans,rank_spans):
        print(title_span.text,rank_span.text)
    
    
    
    
    
    
    
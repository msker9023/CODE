# from lxml import etree
# from pathlib import Path
# import requests


# url='https://movie.douban.com/top250?start=0'

# headers={'User-Agent': 'BaiduSpider'}
# resp=requests.get(url,headers=headers)
# tree=etree.HTML(resp.text)
# # # titles = tree.xpath('//div[@class="hd"]/a/span[@class="title"]/text()')
# # titles=tree.xpath('//div[@class="nav-items"]/ul/li/a/text()')
# # for title in titles:
# #     print(title)
# titles=tree.xpath('//div[@class="hd"]/a/span[@class="title"][1]/text()')
# directors=tree.xpath('//div[@class="bd"]/p[1]/text()')
# p=Path.cwd()
# with open(p/'获取1.txt','w') as file:
#     for title,director in zip(titles,directors):
#         print(title,end='\t')
#         print(director)
#         line=f'{title}\n {director}\n'
#         file.write(line)
from lxml import etree
from pathlib import Path
import requests
import time
url='https://movie.douban.com/top250?start=0'
headers={'User-Agent': 'BaiduSpider'}
resp=requests.get(url,headers=headers)
if resp.status_code==200:
    print('请求成功')
else:
    print('请求失败')
    print(resp.status_code)
tree=etree.HTML(resp.text)
url_imgs=tree.xpath('//div[@class="pic"]//img/@src')
for index,url_img in enumerate(url_imgs,1):
    print(f'{index}',end=' ')
    img_resp=requests.get(url_img,headers=headers)
    with open(f'图片{index}.webp','wb') as file:
        file.write(img_resp.content)
    time.sleep(0.5)
        
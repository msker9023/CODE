# # import json

# # my_dict = {
# #     'name': '骆昊',
# #     'age': 40,
# #     'friends': ['王大锤', '白元芳'],
# #     'cars': [
# #         {'brand': 'BMW', 'max_speed': 240},
# #         {'brand': 'Audi', 'max_speed': 280},
# #         {'brand': 'Benz', 'max_speed': 280}
# #     ]
# # }
# # with open('data.json','w',encoding='utf-8')as file:
# #     json.dump(my_dict,file)
# from pathlib import Path
# # print(Path.home())
# # print(Path.cwd())
# # from pathlib import Path
# # p=Path('/home/user')/'docs'/'report.pdf'
# # print(p)
# # print(str(p))
# # context=p.read_text(encoding='utf-8')
# # print(context)
# # print(p)
# # 当前目录的 .py 文件
# p=Path.cwd()
# Path(p/'note.txt').touch()
# for py in p.glob(('*txt')):
#     print(py)
# Path(p/'note.txt').unlink(missing_ok=True)

import requests
resp=requests.get('http://api.tianapi.com/guonei/?key=APIKey&num=10')
if resp.status_code==200:
    data_model=resp.json()
    for news in data_model['newlist']:
        print(news['title'])
        print(news['url'])
        print('-' * 60)
        
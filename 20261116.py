# # import requests
# # import time
# # from urllib.robotparser import RobotFileParser
# # # reponse=requests.get('https://learn-py.org/lab/bookstore/')
# # # print(reponse.status_code)
# # # print(reponse.text[0:15])

# # reponse=requests.get('https://learn-py.org/robots.txt')
# # for path in ['/books/', '/cart/', '/admin/users/', '/search?q=python']:
# #     print('https://example.com' + path)
# # import time


# # for n in range(4, 9):
# #     response = requests.get(f'https://learn-py.org/lab/bookstore/page/{n}/')
# #     if(response.status_code!=200):
# #         print(f'第 {n} 页出错了，状态码 {response.status_code}')
# #         break
# #     else:
# #         print(f'第 {n} 页 {response.status_code}')  
# # #print(reponse.text)
# # from urllib.robotparser import RobotFileParser

# # rules = """User-agent: *
# # Crawl-delay: 2
# # Disallow: /private/
# # """
# # parser=RobotFileParser()
# # parser.parse(rules.splitlines())
# # print(parser.crawl_delay('*'))
# # print(parser.can_fetch('*', 'https://example.com/books/'))
# import requests
# # response=requests.get('https://learn-py.org/lab/bookstore/books/1/')
# # print(response.url)
# # print(response.status_code)
# # print(response.headers['content-type'])
# # print(response.encoding)
# # html = requests.get('https://learn-py.org/lab/bookstore/books/12/').text
# # start=html.find('<h2 class="title">')
# # print(html[start:start+40])

# # html.find
# h1='https://learn-py.org/lab/bookstore/books/12/'
# print(h1.find('learn'))
# import requests
# from bs4 import BeautifulSoup
# html = requests.get('https://learn-py.org/lab/bookstore/').text
# soup=BeautifulSoup(html,'html.parser')
# prices=soup.find_all('p',class_='price')
# print(len(prices))
# for p in prices[:3]:
#     print(p)
#     print(p.get_text())
# html = requests.get('https://learn-py.org/lab/bookstore/').text
# soup = BeautifulSoup(html, 'html.parser')
# link = soup.select_one('h3.title a')
# print(link)
# print(link.parent)
import requests
from bs4 import BeautifulSoup
response=requests.get('https://learn-py.org/lab/bookstore/').text
soup=BeautifulSoup(response,'html.parser')
#print(soup)
# print(soup.find_all('h3',class_='title'))
# n1=soup.find_all('p',class_='author')
# for x in n1:
#     print(x.get_text())
# n1=soup.find_all('article',attrs={'data-id':True})
# for x in n1:
#     print(x.get_text())
# title=soup.find_all('h3',class_='title')
# author=soup.find_all('p',class_='author')
# price=soup.find_all('p',class_='price')
# for x,y,z in zip(title,author,price):
#     print(x.get_text(),y.get_text(),z.get_text())
# titles=soup.select('article.book-card p.stock.out')
# for x in titles:
#     y=x.find_parent('article')
#     print(y['data-id'],y.select_one('.title').get_text())
cards=soup.select('article.book-card')
# print(len(cards))
books=[]
for card in cards:
    books.append({
        'titles': card.select_one('.title').get_text(strip=True),
        'author':card.select_one('.author').get_text(strip=True),
        'price':card.select_one('.price').get_text(strip=True),
        'rating':card.select_one('.rating').get_text(strip=True)
    })
def parse_rating(text):
    if text=='暂无评分':
        return None
    return text.count('★')
print(len(books))
for book in books:
    print(book)
total=0
rated=[]
for book in books:
    if parse_rating(book['rating'])is not None:
        rated.append(parse_rating(book['rating']))
    total+=float(book['price'].replace('¥',''))
print(total)
print(total/len(books))
print(sum(rated)/len(books))













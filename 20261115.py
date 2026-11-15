# # # import json
# # # entries = [
# # #     {'item': '奶茶', 'category': '餐饮', 'cost': 12.5},
# # #     {'item': '地铁', 'category': '交通', 'cost': 4},
# # # ]
# # # with open('test-1.json','w',encoding='utf-8')as f:
# # #     json.dump(entries,f,ensure_ascii=False)

# # # with open('test-1.json',encoding='utf-8')as f:
# # #     print(f.read())

# # from datetime import date,timedelta
# # # help(date.today)
# # # print(date.today())
# # # help(date.isoformat)
# # d=date(2026,11,2)
# # # text=d.isoformat()
# # # print(text,type(text))
# # # back=date.fromisoformat(text)
# # # print(back,type(back))
# # # print(back==d)
# # # print(f'{d.year}-{d.month}-{d.day}')
# # # print(d-timedelta(days=10))
# # print(d.strftime('%m %d'))
# # print(d.strftime('%Y %m %d'))

# # print(type(date.weekday))
# import json
# from datetime import date,timedelta
# # print(json.dumps({'item': '奶茶', 'date': date(2026, 11, 2).isoformat()}, ensure_ascii=False))
# # d1=date(2026,11,10)
# # d2=date(2026,11,9)
# # print(d1>d2)
# weekday=('星期一','星期二','星期三','星期四','星期五','星期六','星期日')
# for d in [date.today(),date.today()+timedelta(days=1),date.today()-timedelta(days=2)]:
#     print(d.strftime('%m月%d日'),weekday[d.weekday()])
from pathlib import Path

# print(Path.home())
# print(Path.cwd())
# base=Path('/tmp')
# data_path=base/'demo'/'sub'/'foo.txt'
# print(data_path)
# print(data_path.suffix[1:])

# b=Path.cwd()/'test-1.json'
# print(b)
# content=b.read_text(encoding='utf-8')
# print(content)

# b=Path.cwd()/'demo.txt'
# b.write_text('content\ncontent\ncontent',encoding='utf-8')
# with b.open('r',encoding='utf-8')as f:
#     for line in f:
#         print(line.strip())
# p=Path.cwd()/'new_construct_folder'
# p.mkdir(exist_ok=True)
# print(p.exists(),p.is_dir())
# print(p.parents[0])
def count_py_lines(root:Path):
    total=0
    for py in root.rglob('*.py'):
        if not py.is_file():
            continue
        text=py.read_text(encoding='utf-8',errors='ignore')
        total+=text.count('\n')+(0 if text.endswith('\n')or not text else 1)
    return total
p=Path.cwd()
print(p.parents[0])
print(count_py_lines(p.parents[0]))






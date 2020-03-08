#!/usr/bin/python3

sites = ["Baidu", "Google", "Runoob", "Taobao"]
for site in sites:
    if site == "Runoob":
        print("菜鸟教程!")
        break
    print("循环数据 " + site)
else:
    print("没有循环数据!")
print("完成循环!")
print("--------")


for i in range(5):
    print(i)
print("--------")


for i in range(5,9) :
    print(i)
print("--------")

for i in range(0,20,3) :
    print(i)
print("--------")

for i in range(0,-20,-3) :
    print(i)
print("--------")
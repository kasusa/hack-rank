[python内置函数](https://www.runoob.com/python/python-built-in-functions.html)

# 简单语法基础
## Print 输出
[print函数的参数](https://www.runoob.com/python3/python-func-print.html)

> print 在 Python3.x 是一个函数，但在 Python2.x 版本不是一个函数，只是一个关键字。
print 默认输出是换行的，如果要实现不换行需要在变量末尾加上 end=""：
```py
    #!/usr/bin/python3
    x = "a"
    y = "b"
    # 换行输出
    print(x)
    print(y)
    print('---------')
    # 更换行尾（默认是回车）
    print(x, end="[]")
    # 更换间隔符号（默认是空格）
    print(x,y,sep='|')
    # 输出到文件中（默认是输出到stdout）
    f=open('out.txt','a')
    print(x,y,file=f)
```

## input输入
#!/usr/bin/python3

import sys


def fibonacci(n):  # 生成器函数 - 斐波那契
    a, b, counter = 0, 1, 0
    while True:
        if (counter > n):
            return
        yield a
        a, b = b, a + b
        counter += 1


f = fibonacci(100)  # f 是一个迭代器，由生成器返回生成

flag = 0
while True:
    try:
        # print(next(f),end=" ")
        print(flag,end=" ")
        flag += 1
        print(next(f))
    except StopIteration:
        sys.exit()
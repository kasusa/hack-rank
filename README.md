# 使用hack rank 学习和练习

`快速跳转位置` |
[cpp](#CPP) |
[Javascript](#Javascript) |
[Java](#Java) |
# `CPP`
## ` vector `
* [o's blog](https://mropengate.blogspot.com/2015/07/cc-vector-stl.html)
* [题目页面](https://www.hackerrank.com/challenges/variable-sized-arrays/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen)
* [c++中文网里的解释](https://zh.cppreference.com/w/cpp/container/vector)

需要使用vector创建变长的数组。

`vector < int > a [n];`建立一个a[n]大小的vector数组

`a[i].push_back(temp);`往后面塞进去一个数据

`cout << a[I[i]].at(J[i]);`输出一个数据

指针 | 存的内容（变长数组）
------- | -------
a[0] | vector < int > 
a[1] | vector < int >
a[2] | vector < int >
... | ... | 
a[n] | vector < int >
---
## `getline()`
C++ 函数 : getline 。

此函数可读取整行，包括前导和嵌入的空格，并将其存储在字符串对象中。而`cin`一到空格就结束的

使用：

`getline(cin, inputLine);`
cin 是正在读取的输入流，而 inputLine 是接收输入字符串的 string 变量的名称

`cin` 和 `getline()`最好不要混用，因为`cin`会留下一个\n，然后被`getline()`读取。

不过也有办法可以应对，只要加一行如下代码：
```
cin >> doubleNumber;
cin.ignore();  //ignores an end of line character <<<<
getline(cin, stringName);
```
---
## double 输出精度:
```
    double ans = 15.123;
    printf("%.0f",ans);  //output: 15
    printf("%.1f",ans);  //output: 15.1
    printf("%.2f",ans);  //output: 15.12
    ...
    printf("%f",ans);    //output: 15.123000

```
---
# `Javascript`
[hackrank day0 教学](https://www.hackerrank.com/challenges/js10-hello-world/topics/javascript-basics)
## 变量命名方式
```
// Some valid identifiers are:
x
variable_name
sum13
_variable
$variable
```
---
# `Java`

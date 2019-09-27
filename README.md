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

`getline(cin, strName);`
cin 是正在读取的输入流，而 strName 是接收输入字符串的 string 变量的名称
## `cin` 和 `getline` 的混用
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
## 命名方法
### `一个类的标准命名方式 ：`
以大写字母开头,并且使用
[驼峰式大小写](https://zh.wikipedia.org/wiki/%E9%A7%9D%E5%B3%B0%E5%BC%8F%E5%A4%A7%E5%B0%8F%E5%AF%AB).(例如: “ MyClass”)
> `注意：` 类名不能以数字开头或包含任何空格。

### `变量名字命名方式：`
以小写字母开头，并且使用[驼峰式大小写](https://zh.wikipedia.org/wiki/%E9%A7%9D%E5%B3%B0%E5%BC%8F%E5%A4%A7%E5%B0%8F%E5%AF%AB)。

> `注意: `有些人在声明变量时使用小写字母和下划线来模拟空格(例如: “ `my_variable`”)。 这是一种叫做“`小蛇格式`”的样式，Java 程序员在某些特殊变量名称(例如: 私有类变量或常量)的开头使用下划线来区分它们和整个程序中使用的其他变量。

## `从 System.in (标准输入流 stdin)读取输入`
 在 Java 中，Scanner 类广泛用于读取输入，但是每种语言都有自己处理 IO (输入和输出)的机制。使用 Scanner 类读取 stdin 的语法如下:
```
 Scanner scan = new Scanner(System.in);
```
下面是常用的scan方法，[这里](https://docs.oracle.com/javase/7/docs/api/java/util/Scanner.html#method_summary)查看更多方法。
```
 scan.next(); // returns the next token of input
 scan.hasNext(); // returns true if there is another token of input (false otherwise)
 scan.nextLine() // returns the next LINE of input
 scan.hasNextLine(); // returns true if there is another line  of input
```
当您完成对输入流的读取后，应该关闭它以避免资源泄漏。
```
scan.close();
```
下面是一个具体的栗子
```
Scanner scan = new Scanner(System.in); // open scanner
String s = scan.next(); // read the next token and save it to 's'
scan.close(); // close scanner
System.out.println(s); // print 's' to System.out, followed by a new line
```
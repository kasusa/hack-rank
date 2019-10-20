# 使用hack rank 学习和练习

`快速跳转位置` |
[cpp](#CPP) |
[Javascript](#Javascript) |
[Java](#Java) |
[算法](#算法)
# `CPP`
[vector](#vector-cpp) [getline](#getline) [输出精度](#输出精度) [MAP](#MAP) [String](#String) [类的继承/抽象类](#类的继承和抽象类：) [sort()](#sort()) [类型转换](#类型转换-cpp)
## ` vector-cpp `
* [o's blog](https://mropengate.blogspot.com/2015/07/cc-vector-stl.html)
* [题目页面](https://www.hackerrank.com/challenges/variable-sized-arrays/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen)
* [c++中文网里的解释](https://zh.cppreference.com/w/cpp/container/vector)

声明一个 `int` 型的vector：
```
 vector<int> vec;
```
向vec中插入值：
```
vec.push_back() - 新增元素至 vector 的尾端，必要時會進行記憶體配置。
vec.pop_back() - 刪除 vector 最尾端的元素。
vec.insert() - 插入一個或多個元素至 vector 內的任意位置。
vec.erase() - 刪除 vector 中一個或多個元素。
vec.clear() - 清空所有元素。
```
获取vec索引处的值：
```
vec[i] - 存取索引值為 i 的元素值。
vec.at(i) - 存取索引值為 i 的元素的值，
vec.front() - 回傳 vector 第一個元素的值。
vec.back() - 回傳 vector 最尾元素的值。
```
获得vec的大小：
```
vec.empty() - 如果 vector 內部為空，則傳回 true 值。
vec.size() - 取得 vector 目前持有的元素個數。
```

> 使用vector创建变长的数组(二维）。
```
vector < int > a [n];//建立一个a[n]大小的vector数组
a[i].push_back(temp);//往后面塞进去一个数据
cout << a[I[i]].at(J[i]);//输出一个数据
```
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
## `cin` 和 `getline()` 的混用
`cin` 和 `getline()`最好不要混用，因为`cin`会留下一个\n，然后被`getline()`读取。

不过也有办法可以应对，只要加一行如下代码：
```
cin >> doubleNumber;
cin.ignore();  //ignores an end of line character <<<<
getline(cin, stringName);
```
---
## 输出精度:
```
    double ans = 15.123;
    printf("%.0f",ans);  //output: 15
    printf("%.1f",ans);  //output: 15.1
    printf("%.2f",ans);  //output: 15.12
    ...
    printf("%f",ans);    //output: 15.123000

```
## `MAP`
创建一个map：（这里创建一个名为`phoneBook`的map）,<人名,电话>的类型都是string
```
map <string,string> phoneBook ;
```
给phoneBook插入一些内容：
```
string name , tel;
cin >> name;
cin >> tel;
phoneBook[name] = tel;
```
查询内容：
```
cout << Query << "=" << phoneBook[Query]<<endl;
```
## `String` 
[w3cschools介绍](https://www.w3schools.com/cpp/cpp_strings.asp)

把int型转换成string类型
```
int i=11;
string str= to_string(i);
```
获取string的长度
```
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();
```
> 注意这里`txt.length()`好像是`unsigned`类型要和`int`比较的话最好转换一下
> 
直接访问字符串的字符：
```
string myString = "Hello";
cout << myString[0]; // Outputs H
cout << myString[1]; // Outputs e
```
输入到string的函数：[getline](#`getline()`)

## 类的继承和抽象类
一个普通的父类：
```
class Book //创建类
{
protected: //保护变量
    string title;
    string author;

public: //公共变量、函数
    Book(string t, string a) //构造函数
    {
        title = t;
        author = a;
    }
};
```
一个普通的子类：
```
class MyBook : Book //创建继承类
{
protected:
    int price = 0;
public:
    //构造函数，以及类似super()的父类构造。
    MyBook(string t, string a, int p) : Book(t,a) 
    {
        price = p;
    }
};
```
## 一个抽象的父类：
`virtual` 关键字
```
class Book
{
protected:
    string title;
    string author;

public:
    Book(string t, string a)
    {
        title = t;
        author = a;
    }
    virtual void display() = 0; //是这一行让我变成了抽象的父类
};
```
## `sort()`
例如我们要给一个`elements`排序
```
vector<int> elements;
×× 这里输入elements的值…… ××

sort(elements.begin() , elements.end());

//把vec的头部和尾部的指针传递给sort函数
//不加第三个参数的话正常排序完是从小到大的顺序
```
[结构体sort（）](https://blog.csdn.net/menyangyang/article/details/40593597)

## 类型转换-cpp
`string` 转换 `int`
```
C++: stoi(token)
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



# 算法
base 10 -> base 2 的伪代码
> 参考  `tutorials-cpp`/`day10` 
```
while(n > 0):
    remainder = n%2;
    n = n/2;
    Insert remainder to front of a list or push onto a stack

Print list or stack
```
获取最大值（参考`day11 cpp`）：
获取一组数字中的的时候，我一般这么做：
```
int biggest = INT_MIN; 
for(_反正就是遍历循环)
{
    int temp = _获取值的函数(_各种参数);
    if(biggest < temp)biggest = temp;
}
```
> 注意：`biggest`设置为0的话，如果下面所有的值都是`负的`那么就会出问题！

[获取树的高度](https://www.hackerrank.com/challenges/30-binary-search-trees/editorial)
> 我真的无话可说，这是什么神仙脑回路写的这么简洁！
```
if t is empty,
    height(t) = -1
else
    height(t) = 1 + MAX( height( leftSubtree(t), rightSubtree(t) ) )
```
树的各种遍历方法：
[hackrank toturial](https://www.hackerrank.com/challenges/30-binary-trees/tutorial)
# 使用hack rank 学习和练习c++
<<<<<<< HEAD
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

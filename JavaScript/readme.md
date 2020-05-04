# 从头开始
[廖雪峰博客](https://www.liaoxuefeng.com/wiki/1022910821149312/1023020952022784)

[字符串](#字符串)
[数组](#数组)
# 字符串
* [多行字符串](#多行字符串)
* [模板字符串](#模板字符串)
* [更多普通例子](#更多普通例子)
* [substring indexof](#更多普通例子)
* [不要直接给索引赋值](#特别注意)

## 多行字符串

```js
var a =
`
这是一个
多行
字符串
还不用换行符
只要被反引号包起来就好了
`;
console.log(a);
```
## 模板字符串

```js
// 模板字符串 , 用这个就不需要写一堆引号加号了
var name = '小明';
var age = 20;
var message = `你好, ${name}, 你今年${age}岁了!`;
alert(message);
```

## 更多普通例子

```js
var s = 'Hello, world!';
console.log(s.length); // 13
s[0]; // 'H'
s[6]; // ' '
s[7]; // 'w'
s[12]; // '!'
s[13]; // undefined 超出范围的索引不会报错，但一律返回undefined
s.substring(0, 5); // 从索引0开始到5（不包括5），返回'hello'
s.substring(7); // 从索引7开始到结束，返回'world'
s.indexOf('world'); // 返回7
s.indexOf('World'); // 没有找到指定的子串，返回-1
```

## 特别注意
需要特别注意的是，字符串是不可变的，如果对字符串的某个索引赋值，不会有任何错误，但是，也没有任何效果：
```js
var s = 'Test';
s[0] = 'X';
alert(s); // s仍然为'Test'
```
JavaScript为字符串提供了一些常用方法，注意，调用这些方法本身不会改变原有字符串的内容，而是返回一个新字符串







# 数组

* [slice分片](#slice分片)
* [push pop shift unshift](#头部和尾部添加删除)
* [sort reverse](#数组的顺序)
* [concat](#concat)
* [join](#join)
---
* 创建
* 取得索引处值
* 根据内容获得索引(-1 代表 无)
```js
var arr = ['A', 'B', 'C'];
arr[1] = 99;
arr; // arr现在变为['A', 99, 'C']

var arr = ['A', 'B', 'C'];
arr[5] = 'x';
arr; // arr变为[1, 2, 3, undefined, undefined, 'x']

var arr = [10, 20, '30', 'xyz'];
arr.indexOf(10); // 元素10的索引为0
arr.indexOf(20); // 元素20的索引为1
arr.indexOf(30); // 元素30没有找到，返回-1
arr.indexOf('30'); // 元素'30'的索引为2
```

## slice分片
`slice()`就是对应String的`substring()`版本，它截取Array的部分元素，然后返回一个新的Array：
```js
var arr = ['A', 'B', 'C', 'D', 'E', 'F', 'G'];
arr.slice(0, 3); // 从索引0开始，到索引3结束，但不包括索引3: ['A', 'B', 'C']
arr.slice(3); // 从索引3开始到结束: ['D', 'E', 'F', 'G']
```

## 头部和尾部添加删除
* push和pop
  * push()向Array的末尾添加若干元素，pop()则把Array的最后一个元素删除掉：
* unshift和shift
  * 如果要往Array的头部添加若干元素，使用unshift()方法，shift()方法则把Array的第一个元素删掉：


```js
var arr = [1, 2];
arr.push('A', 'B'); // 返回Array新的长度: 4
arr; // [1, 2, 'A', 'B']
arr.pop(); // pop()返回'B'
arr; // [1, 2, 'A']
arr.pop(); arr.pop(); arr.pop(); // 连续pop 3次
arr; // []
arr.pop(); // 空数组继续pop不会报错，而是返回undefined
arr; // []

var arr = [1, 2];
arr.unshift('A', 'B'); // 返回Array新的长度: 4
arr; // ['A', 'B', 1, 2]
arr.shift(); // 'A'
arr; // ['B', 1, 2]
arr.shift(); arr.shift(); arr.shift(); // 连续shift 3次
arr; // []
arr.shift(); // 空数组继续shift不会报错，而是返回undefined
arr; // []
```

## 数组的顺序
* sort
  * sort()可以对当前Array进行排序，它会直接修改当前Array的元素位置，
  * 直接调用时，按照默认顺序排序：
* reverse
  * reverse()把整个Array的元素给掉个个，也就是反转：

```js

var arr = ['B', 'C', 'A'];
arr.sort();
arr; // ['A', 'B', 'C']
// 能否按照我们自己指定的顺序排序呢？完全可以，我们将在后面的函数中讲到。


var arr = ['one', 'two', 'three'];
arr.reverse(); 
arr; // ['three', 'two', 'one']
```

## concat
* concat()方法把当前的Array和另一个Array连接起来，并返回一个新的Array：
  * 请注意，concat()方法并没有修改当前Array，而是返回了一个新的Array。
  * 实际上，concat()方法可以接收任意个元素和Array，并且自动把Array拆开，然后全部添加到新的Array里：

```js
var arr = ['A', 'B', 'C'];
var added = arr.concat([1, 2, 3]);
added; // ['A', 'B', 'C', 1, 2, 3]
arr; // ['A', 'B', 'C']


var arr = ['A', 'B', 'C'];
arr.concat(1, 2, [3, 4]); // ['A', 'B', 'C', 1, 2, 3, 4]
```

## join
join()方法是一个非常实用的方法，它把当前Array的每个元素都用指定的字符串连接起来，然后返回连接后的字符串：

```js
var arr = ['A', 'B', 'C', 1, 2, 3];
arr.join('-'); // 'A-B-C-1-2-3'
```

# 对象json
[廖雪峰](https://www.liaoxuefeng.com/wiki/1022910821149312/1023020997017056)
* [添加和删除属性](#添加和删除属性)
* [检测是否拥有属性](#检测是否拥有属性)

## 基础
一个例子

```js
var xiaoming = {
    name: '小明',
    birth: 1990,
    school: 'No.1 Middle School',
    height: 1.70,
    weight: 65,
    score: null
};
```

访问它的属性

```js
xiaoming.name; // '小明'
xiaoming.birth; // 1990
```

> 有关特殊命名属性,看廖雪峰的链接

## 添加和删除属性
* 添加属性  直接给这个属性赋值 `xiaoming.age = 18;`
* 删除属性  使用关键字 delete `delete xiaoming.age;`
* 访问不存在的属性 会返回 `undefined`


```js
var xiaoming = {
    name: '小明'
};
xiaoming.age; // undefined
xiaoming.age = 18; // 新增一个age属性
delete xiaoming.age; // 删除age属性
xiaoming.age; // undefined
delete xiaoming['name']; // 删除name属性 
xiaoming.name; // undefined
delete xiaoming.school; // 删除一个不存在的school属性也不会报错
```

## 检测是否拥有属性
如果我们要检测xiaoming是否拥有某一属性，可以用in操作符：

```js
var xiaoming = {
    name: '小明',
    birth: 1990,
    school: 'No.1 Middle School',
    height: 1.70,
    weight: 65,
    score: null
};
'name' in xiaoming; // true
'grade' in xiaoming; // false
```

不过要小心，如果`in`判断一个属性存在，这个属性不一定是xiaoming的，它可能是xiaoming继承得到的,
要判断一个属性是否是xiaoming自身拥有的，而不是继承得到的，可以用`hasOwnProperty()`方法：

```js
var xiaoming = {
    name: '小明'
};
xiaoming.hasOwnProperty('name'); // true
xiaoming.hasOwnProperty('toString'); // false
```
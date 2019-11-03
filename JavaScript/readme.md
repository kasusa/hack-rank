# 强制格式转换
```
parseInt(variable);
```

# 输出

```
console.log()
```
# 变量
## 声明
`var` ：普通声明。
`let` ：块内声明。
`const` ：全局固定。
# Functions
一个简单的函数例子
```
function greetings(name) {
    console.log("Hello, " + name);
}
```
## return 
如果没有用 `return` 关键字就是返回一个 `undefined`

## function expression 
`function expression ` 可以看作一个匿名的 `function` 

`function expression ` 经常用来做触发(IIFEs)，因为他们会在声明完后直接触发

# map
```
let actress = new Map([
    ["firstName", "Julia"],
    ["lastName", "Roberts"],
    ["dateOfBirth", "October 28, 1967"],
    ["nationality", "American"],
    ["firstMovie", "Satisfaction"]
]);

// Print each Key-Value pair in the map
for (let info of actress) {
    console.log(info);
}

// Print each Key and Value as "Key: Value"
console.log();
for (let info of actress) {
    console.log(info[0] + ": " + info[1]);
}
```

# switch
多个switch的连用。
```
switch (n) {
        case 2:
        case 4:
        case 6:
            console.log("A");
            break;
        case 3:
        case 5:
        case 7:
            console.log("B");
            break;
        default:
            console.log("C");
    }
```

# Arrays 

<https://www.hackerrank.com/challenges/js10-arrays/topics>

创建一个指针 。 获取长度

```
var a = ['first', 'second'];

console.log('a\'s contents:', a);       // ['first', 'second']
console.log('a\'s length:', a.length);  // 2

```

遍历（不是很懂这个forEach）
```
var a = ['first', 'second'];

a.forEach(function(e, i, array) {
    // 'i' is the index
    // 'e' is the element
    console.log(i + ' ' + e);
});

```
向array尾部添加新项 【 push 】
```
var a = ['first', 'second'];

// Append 'third' to array 'a'
a.push('third');

console.log('a:', a);

```
删掉最后一项【 pop 】
```
var a = ['first', 'second', 'third'];
console.log('Original Array:', a);

// Remove the last element from the array
let removed = a.pop();

console.log('Modified Array:', a);
console.log('Removed Element:', removed);

```
删除头项【 shift 】
```
var a = ['first', 'second', 'third'];
console.log('Original Array:', a);

// Remove the first element from the array
let removed = a.shift();

console.log('Modified Array:', a);
console.log('Removed Element:', removed);

```
添加头项【 unshift 】
```
var a = ['first', 'second', 'third'];
console.log('Original Array:', a);

// Insert element at the beginning of the array
a.unshift('fourth');

console.log('Modified Array:', a);


```
寻找项目（根据内容找索引）【 indexOf('内容') 】
```
var a = ['first', 'second', 'third', 'fourth'];

let position = a.indexOf('second');

console.log('a:', a);
console.log('position:', position);

```
删除项目（索引处的项目）【 splice(position, elementsToRemove) 】
```
var a = ['first', 'second', 'third', 'fourth', 'fifth'];
console.log('Original Array:', a);

let position = 1;
let elementsToRemove = 2;
// Remove 'elementsToRemove' element(s) starting at 'position'
a.splice(position, elementsToRemove);

console.log('Modified Array:', a);


```
复制一个Array 【 slice 】
```
var a = ['first', 'second', 'third', 'fourth'];
console.log('a:', a);

// Shallow copy array 'a' into a new object
let b = a.slice();

console.log('b:', b);


```
## 指针排序：
hackerrank上面看到的数字排序：
```
 nums.sort((a, b) => a - b)

```

默认排序法 ps 默认排序有点问题666
```
var a = ['c', 'a', 'd', 'b', 'aa'];
var b = [9, 2, 13, 7, 1, 12, 123];

// Sort in ascending lexicographical order using a built-in
a.sort();
b.sort();

console.log('a:', a);  //a: [ 'a', 'aa', 'b', 'c', 'd' ]
console.log('b:', b);  //b: [ 1, 12, 123, 13, 2, 7, 9 ]

```
自定义函数
```
var a = ['c', 'a', 'd', 'b', 'aa'];
var b = [9, 2, 13, 7, 1, 12, 123];

// Sort in descending lexicographical order using a compare function
a.sort(function(x, y) { return x < y; } );
b.sort(function(x, y) { return x < y; } );

console.log('a:', a);
console.log('b:', b);

```
也是自定义函数 compare arrow function ？不太能懂
```
var a = ['c', 'a', 'd', 'b', 'aa'];

// Sort in descending lexicographical order using a compare arrow function
a.sort((x, y) => x < y);

console.log('a:', a);

```
遍历 Array 【用 for .. of】
```
var a = ['first', 'second', 'third', 'fourth'];

for (let e of a) {
    console.log('e:', e);
}

```





# 正则表达式
[hackerrank](https://www.hackerrank.com/challenges/js10-regexp-1/topics)
```
const re = /你的正则/ ；
const str1 = '要测试的句子';
# test 
console.log(re.test(str1)); //true or false
var res = re.exec(str);
---
# exec
console.log(res); //输出一大串
console.log();
console.log('string of characters matched = ' + res[0]);
console.log('first parenthesized substring match = ' + res[1]);
console.log('second parenthesized substring match = ' + res[2]);
console.log('index of the match = ' + res.index);
console.log('original string = ' + res.input);
---
# Search //返回索引位置
const re = /learn/;
const str1 = 'Today, we\'ll learn about regular expressions.';
console.log(str1); //Today, we'll learn about regular expressions.
console.log('A search for', re, 'returns', str1.search(re), '\n'); //A search for /learn/ returns 13 
---
# Split
const name = 'Julia Roberts';
const res = name.split(' ');

console.log('The split array:', res);
console.log('First Name:', res[0]);
console.log('Last Name:', res[1]);
//The split array: [ 'Julia', 'Roberts' ]
//First Name: Julia
//Last Name: Roberts
---
# Replace
const re = /RegExp/;
const myString = 'We\'re learning about RegExps.';
const replacementString = 'Regular Expression';

console.log(myString);
console.log(myString.replace(re, replacementString));
//We're learning about RegExps.
//We're learning about Regular Expressions.

```

首尾部相同

why can't i use this 

```
^[aeiou].*\1$
```
but this is ok?

```
^(a|e|i|o|u).*\1$
```


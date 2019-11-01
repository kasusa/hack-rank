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
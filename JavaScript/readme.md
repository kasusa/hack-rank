# 强制格式转换
```
parseInt(variable);
```

# 输出

```
console.log()
```

let 创建局域变量

# Functions
一个简单的函数例子
```
function greetings(name) {
    console.log("Hello, " + name);
}
```
## return 
如果没有用 `return` 关键字就是返回一个 `undefined`

# function expression 
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
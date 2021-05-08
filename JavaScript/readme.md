我在solo learn 学的

## 输出

```javascript
document.write("hello world")	 //html
console.log("hello")			//output

```

## 变量和它的名

* 大小写敏感
* 通过 ` var` 声明
* 起始符：_ $ a~z A~Z

## 比较符号

![contentImage](https://api.sololearn.com/DownloadFile?id=2748)

## 条件判断

```javascript
if(...) {...}
else if(...) {...}
else{...}
```

```javascript
switch{
    case 1 : 
        ...
        break;
    case 2 :
        ...
        break;
    default:
        ...
}
```

## js function 
* js 的function不会检查你的参数数量，如果你少写了一个参数，会传入`undefined`

## js 弹窗
```js
alert('sss\nsss')
var user = prompt('input your name plz') //输入弹窗
var result = confirm('yes or no?') //是 或者 否
```

## js object
```js
var person = {
    name: "John", age: 31, 
    favColor: "green", height: 183
};
var x = person.age;
var y = person['age'];
//json 使用 key : val 的形式，属性用逗号分开。
// 使用. 或者key的形式来调取数据
```

## js 构造函数
```js
function person(name, age, color) {
  this.name = name;
  this.age = age;
  this.favColor = color;
}
// 使用构造函数创造一个obj
var ham = new person('ham',18,'blue');
```

## Arrays


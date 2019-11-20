# `Java`
[读取输入](#读取输入) | [类型转换](#类型转换-java) | [Vector](#Vector-java) |[循环](#循环-java) |[泛型](#泛型-java)  | [正则表达式](#正则表达式) |[使用delimiter切分字符串](#使用delimiter切分字符串) | [java极值](#java极值) | str1.equals("abc")
## 命名方法
## `一个类的标准命名方式 ：`
以大写字母开头,并且使用
[驼峰式大小写](https://zh.wikipedia.org/wiki/%E9%A7%9D%E5%B3%B0%E5%BC%8F%E5%A4%A7%E5%B0%8F%E5%AF%AB).(例如: “ MyClass”)
> `注意：` 类名不能以数字开头或包含任何空格。

## `变量名字命名方式：`
以小写字母开头，并且使用[驼峰式大小写](https://zh.wikipedia.org/wiki/%E9%A7%9D%E5%B3%B0%E5%BC%8F%E5%A4%A7%E5%B0%8F%E5%AF%AB)。

> `注意: `有些人在声明变量时使用小写字母和下划线来模拟空格(例如: “ `my_variable`”)。 这是一种叫做“`小蛇格式`”的样式，Java 程序员在某些特殊变量名称(例如: 私有类变量或常量)的开头使用下划线来区分它们和整个程序中使用的其他变量。

## 读取输入
 在 Java 中，Scanner 类广泛用于读取输入，但是每种语言都有自己处理 IO (输入和输出)的机制。使用 Scanner 类读取 stdin 的语法如下:
```
 Scanner scan = new Scanner(System.in);
```
下面是常用的scan方法，[这里](https://docs.oracle.com/javase/7/docs/api/java/util/Scanner.html#method_summary)查看更多方法。
```
scan.nextInt();//获取一个int类型的值
scan.nextDouble();//获取一个double类型的值
```
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

## 类型转换-java
`string` 转换 `int`
```
Java: Integer.parseInt(token)
```
`int` 转换 `string`
```
Integer.toString(token)
```
## 异常处理
`try`语句用来捕捉` runtime Exception`
```
try{
    
    //尝试运行可能会出错的语句
}
catch(Exception e){
    
    //try{}里面东西如果出错了就会运行这里面的东东
}
finally{
    
    //反正都会运行
}
```
# Vector-java
[vectro in java](https://beginnersbook.com/2013/12/vector-in-java/)

声明一个 `int` 类型的 `Vector`
```
Vector<Integer> deviders = new Vector();
```
添加数据：
        
```
for(int i = 1 ; i<=n;i++){
    if(n%i == 0)
        deviders.add(i);  
}
//这里的例子是：把所有可以整除n的整数存入vector
```

##  Vector 排序
[教学](https://www.technicalkeeda.com/java-tutorials/java-example-to-sort-vector-elements-using-collections-sort-method)
```
Vector<String> names = new Vector();

//...数据放进去（一堆英文名字）

Collections.sort(names);     //这样的话应该是安装名字首字母排序啦！

int n = names.size();        //输出
for(int i = 0 ; i < n ; i++){
    String name = names.get(i);
    System.out.println(name);
}
```
# 循环-java

advance for loop
```
char[] vowels = {'a', 'e', 'i', 'o', 'u'};

for (char item: vowels) {
   System.out.println(item);
}
```
# 泛型-java

我简单的理解，泛型就是一个可以接受各种输入，但是不是多重函数的方法‘
用法如下，一定要写`<E>`
```
public  <E> void printArray(E [] Array) {
    for(E element : Array){
        System.out.println(element + " ");
    }
}
```
## java Queue 
[菜鸟教程](https://www.runoob.com/java/data-queue.html)
声明：
```
Queue<Node> queue = new LinkedList();
```
常用操作：
```
 queue.offer(value); //插入值
 queue.poll();       //返回首值
 queue.isEmpty();    //如果空，返回true
```

# 正则表达式
[正则表达式测试站](https://rubular.com/r/UAgzl9NxQv)

## 正则表达式标准使用
```
// 您的正则表达式string （RegEx）
String myRegExString = "[a-zA-Z\\s]+";

// 创建一个 pattern 实例 （编译RegEx）
Pattern p = Pattern.compile(myRegExString);

// 我们需要一个 Matcher 去把一个需要对比的string来和表达式比较
Matcher m = p.matcher(myString);

// 如果我们找到符合条件的string
if( m.find() ) {
    // Print the match
    System.out.println( m.group() );
}
```

## 使用delimiter切分字符串

```
String s1 = "Hello, Goodbye, Farewell";
String s2 = "Hola, Adios, Hasta Luego";

String myDelimiter = ", ";

String[] s1array = s1.split(myDelimiter);
String[] s2array = s2.split(myDelimiter);

System.out.println("s1array[0]: " + s1array[0]);
System.out.println("s1array[1]: " + s1array[1]);
System.out.println("s1array[2]: " + s1array[2]);
System.out.println("s2array[0]: " + s2array[0]);
System.out.println("s2array[1]: " + s2array[1]);
System.out.println("s2array[2]: " + s2array[2]);

```
上述代码应该会显示：
```
s1array[0]: Hello
s1array[1]: Goodbye
s1array[2]: Farewell
s2array[0]: Hola
s2array[1]: Adios
s2array[2]: Hasta Luego
```

## java极值

Int类型：
```
Integer.MIN_VALUE
Integer.MAX_VALUE
```

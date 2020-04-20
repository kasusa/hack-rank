# `Java`
* [读取输入](#读取输入) 
* [输出格式](#输出格式)
* [类型转换](#类型转换-java) 
---
* [应用级别知识 foreach ,clone](#应用级别知识) 
---
* [泛型](#泛型-java)  
* [String](#String)
* [Math](#Math)
---
* [身份证验证](#身份证验证)
* [时间日期](#时间日期)

## 命名方法
## `一个类的标准命名方式 ：`
以大写字母开头,并且使用
[驼峰式大小写](https://zh.wikipedia.org/wiki/%E9%A7%9D%E5%B3%B0%E5%BC%8F%E5%A4%A7%E5%B0%8F%E5%AF%AB).(例如: “ MyClass”)
> `注意：` 类名不能以数字开头或包含任何空格。

## `变量名字命名方式：`
以小写字母开头，并且使用[驼峰式大小写](https://zh.wikipedia.org/wiki/%E9%A7%9D%E5%B3%B0%E5%BC%8F%E5%A4%A7%E5%B0%8F%E5%AF%AB)。

> `注意: `有些人在声明变量时使用小写字母和下划线来模拟空格(例如: “ `my_variable`”)。 这是一种叫做“`小蛇格式`”的样式，Java 程序员在某些特殊变量名称(例如: 私有类变量或常量)的开头使用下划线来区分它们和整个程序中使用的其他变量。

## 命令行执行
使用cmd执行：
比如你有一个 xxx.class 的编译好的java文件，并且想要把txt作为输入。
```
java xxx < input.txt
```

## 读取输入
 在 Java 中，Scanner 类广泛用于读取输入，但是每种语言都有自己处理 IO (输入和输出)的机制。使用 Scanner 类读取 stdin 的语法如下:
```
 Scanner scan = new Scanner(System.in);
```

下面是常用的scan方法，[这里](https://docs.oracle.com/javase/7/docs/api/java/util/Scanner.html#method_summary)查看更多方法。
```
scan.nextInt();     //获取一个int类型的值
scan.nextDouble();  //获取一个double类型的值
scan.next();        //获取下一个string，一般来说
scan.nextLine();    //获取下一行内容，不会跳过空格，会同时收下这一行的回车
```

```
 scan.hasNext(); //返回下一个 token 是否存在
 scan.hasNextLine(); // 返回是否存在下一行
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

## 输出格式
```
String.format("%d", 93);        // prints: 93
String.format("|%20d|", 93);    // prints: |                  93|
String.format("|%-20d|", 93);   // prints: |93                  |
String.format("|%020d|", 93);   // prints: |00000000000000000093|
String.format("|%+20d|', 93);   // prints: |                 +93|
String.format("|% d|", 93);     // prints: | 93|
String.format("|% d|", -36);    // prints: |-36|
String.format("|%,d|", 10000000); // prints: |10,000,000|
String.format("|%(d|", -36);    // prints: |(36)|
```
8进制 /16进制
```
String.format("|%o|"), 93);     // prints: 135
String.format("|%x|", 93);      // prints: 5d
String.format("|%#o|", 93);     // prints: 0135 (补零)
String.format("|%#x|", 93);     // prints: 0x5d
String.format("|%#X|", 93);     // prints: 0X5D
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
# 应用级别知识

## foreach

advance for loop
```
char[] vowels = {'a', 'e', 'i', 'o', 'u'};

for (char item: vowels) {
   System.out.println(item);
}
```
## clone
有的时候想要复制一个数组。用一个佛如循环复制内容未免太过繁杂
可以使用 `clone()`
> clone方法是从Object类继承过来的，基本数据类型（int ，boolean，char，byte，short，float ，double，long）都可以直接使用
```
int[] a1 = {1, 3};
int[] a2 = a1.clone();
```



# 泛型-java
* [Queue](#javaQueue)
* [Vector-java](#Vector-java)

我简单的理解，泛型就是一个可以接受各种输入，但是不是多重函数的方法‘
用法如下，一定要写`<E>`
```
public  <E> void printArray(E [] Array) {
    for(E element : Array){
        System.out.println(element + " ");
    }
}
```

## javaQueue 
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

## Vector-java
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


# String
* [substring函数](#substring函数)
* [正则表达式](#正则表达式) 
* [sort](#sortString)

比较使用 
```
str1.equals("abc")
```

## substring函数
总之这个函数就是给两个值，按照索引切掉你的字符串
```java
  Scanner in = new Scanner(System.in);
  String S = in.next();
  int start = in.nextInt();
  int end = in.nextInt();

  S = S.substring(start,end);
  System.out.println(S);
```
//测试：
```
< manyouhu
< 0 3
> man
```

## sortString
比如我有个string的数组，可以如此调用java的排序算法：
```java
  String[] myStrings = {"bbbb", "aaa" , "bbbb" , "ccc"};
  Arrays.sort(myStrings);
  //foreach
  for (String a: myStrings) {
      System.out.println(a);
  }
```

输出
```
aaa
bbbb
bbbb
ccc
```

## 正则表达式
[正则表达式测试站](https://rubular.com/r/UAgzl9NxQv)

## email 正则

```java
public static boolean isEmailRight(String emailStr) {
    Pattern VALID_EMAIL_ADDRESS_REGEX =
            Pattern.compile("^[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,6}$", Pattern.CASE_INSENSITIVE);
    Matcher matcher = VALID_EMAIL_ADDRESS_REGEX .matcher(emailStr);
    return matcher.find();
}
```

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


# Math
* [次方](#次方)
* [java极值](#java极值)


## 次方
```java

Math.pow(x,y); //x^y
```

## java极值

Int类型：
```java
Integer.MIN_VALUE
Integer.MAX_VALUE
```

## 身份证验证

[csdn](https://blog.csdn.net/tyyking/article/details/88778485)

```java
public class citizenID {

    public static boolean isIDNumber(String IDNumber) {
        if (IDNumber == null || "".equals(IDNumber)) {
            return false;
        }
        // 定义判别用户身份证号的正则表达式（15位或者18位，最后一位可以为字母）
        String regularExpression = "(^[1-9]\\d{5}(18|19|20)\\d{2}((0[1-9])|(10|11|12))(([0-2][1-9])|10|20|30|31)\\d{3}[0-9Xx]$)|" +
                "(^[1-9]\\d{5}\\d{2}((0[1-9])|(10|11|12))(([0-2][1-9])|10|20|30|31)\\d{3}$)";
        //假设18位身份证号码:41000119910101123X  410001 19910101 123X
        //^开头
        //[1-9] 第一位1-9中的一个      4
        //\\d{5} 五位数字           10001（前六位省市县地区）
        //(18|19|20)                19（现阶段可能取值范围18xx-20xx年）
        //\\d{2}                    91（年份）
        //((0[1-9])|(10|11|12))     01（月份）
        //(([0-2][1-9])|10|20|30|31)01（日期）
        //\\d{3} 三位数字            123（第十七位奇数代表男，偶数代表女）
        //[0-9Xx] 0123456789Xx其中的一个 X（第十八位为校验值）
        //$结尾

        //假设15位身份证号码:410001910101123  410001 910101 123
        //^开头
        //[1-9] 第一位1-9中的一个      4
        //\\d{5} 五位数字           10001（前六位省市县地区）
        //\\d{2}                    91（年份）
        //((0[1-9])|(10|11|12))     01（月份）
        //(([0-2][1-9])|10|20|30|31)01（日期）
        //\\d{3} 三位数字            123（第十五位奇数代表男，偶数代表女），15位身份证不含X
        //$结尾


        boolean matches = IDNumber.matches(regularExpression);

        //判断第18位校验值
        if (matches) {

            if (IDNumber.length() == 18) {
                try {
                    char[] charArray = IDNumber.toCharArray();
                    //前十七位加权因子
                    int[] idCardWi = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
                    //这是除以11后，可能产生的11位余数对应的验证码
                    String[] idCardY = {"1", "0", "X", "9", "8", "7", "6", "5", "4", "3", "2"};
                    int sum = 0;
                    for (int i = 0; i < idCardWi.length; i++) {
                        int current = Integer.parseInt(String.valueOf(charArray[i]));
                        int count = current * idCardWi[i];
                        sum += count;
                    }
                    char idCardLast = charArray[17];
                    int idCardMod = sum % 11;
                    if (idCardY[idCardMod].toUpperCase().equals(String.valueOf(idCardLast).toUpperCase())) {
                        return true;
                    } else {
                        return false;
                    }

                } catch (Exception e) {
                    e.printStackTrace();
                    return false;
                }
            }

        }
        return matches;
    }
}

```

## 时间日期
 date and time
```java
  Date dNow = new Date( );
  SimpleDateFormat timeHHMMSS = new SimpleDateFormat ("hh:mm:ss");
  SimpleDateFormat timeHHMM = new SimpleDateFormat ("hh:mm");
  SimpleDateFormat timeYYMMDD = new SimpleDateFormat ("yyyy-MM-dd");

  System.out.println("当前时间为: " + timeHHMMSS.format(dNow));
```
# 第三章 #
***
### 一、示例程序 ###
	

	#include <stdio.h>

	int main(void){
		
		float weight;
		float value;
		
		printf("Are you worth your weight in platinum?\n");
		printf("Let's check it out.\n");
		printf("Please enter your weight in pounds: ");
		scanf("%f", &weight);
		value = 1700.0 * weight * 14.5833;
		printf("Your weight in platinum is worth $%.2f.\n", value);
		printf("You are easily worth that! If platinum prices drop,\n");
		printf("eat more to maintain your value.\n");
		return 0;
	}

### 二、变量与常量数据 ###


> &emsp; 数据：即承载信息的数字和字符  。
&emsp; 常量：在程序使用之前已经 **预先设定** 好了，在整个程序的运行过程中没有变化。
&emsp; 变量：在程序运行期间可能会 **改变或被赋值** 。


### 三、数据：数据类型关键字 ###

|最初K&R给出的关键字|C90标准添加的关键字|C99标准添加的关键字|
|:----:|:-----:|:-----:|
|int|signed|_Bool|
|long|void|_Complex|
|short|-|_Imaginary|
|unsigned|-|-|
|char|-|-|
|float|-|-|
|double|-|-|

&emsp; 计算机的存储方式可分为两大基本类型： *整数类型* 和 *浮点数类型*

### 四、C语言基本数据类型 ###
####  &emsp; 1.int类型  ####
&emsp; &emsp; 在计算机中存储一个int类型的数据需要占用一个机器字长，如在16位的计算机中，就需要16位来存储一个int值。  

#### &emsp; 2.其他整数类型 ####
> 
- short int 类型
- long int 或 long
- long long int 或 long long**（C99标准引入）**
- unsigned int 或 unsigned（只用于非负值的场合）
- C90标准中添加了 unsigned long int 或 unsigned long 和 unsigned short int 或 unsigned short类型。在C99标准中又添加了unsigned long long int 或 unsigned long long。
- 在任何有符号的类型前面加上 signed 关键字，强调使用有符号类型的意图。例如：short、short int、signed short、signed short int都表示同一种类型。

#### &emsp; 3.使用字符：char类型 ####

&emsp;&emsp; 从技术层面上来看，char类型实际上存储的是整数而不是字符，计算机使用数字编码来处理字符，即用特定的整数来表示特定的字符。
&emsp;&emsp; 值得注意的是**C语言中把一字节定义为char类型所占用的位数**。
&emsp;&emsp; 计算机中通常使用特殊的符号序列表示一些特殊的字符。如通常使用的换行符“\n”等，下表便是C语言中定义的转义序列。  

|转义序列|含义|
|:----|:-----|
|\a|警报（ANSI C）|
|\b|退格|
|\f|换页|
|\n|换行|
|\r|回车|
|\t|水平制表符|
|\v|垂直制表符|
|\\|反斜杠（\）|
|\'|单引号|
|\"|双引号|
|\?|问号|
|\0oo|八进制值|
|\xhh|十六进制值|

#### &emsp; 4._Bool类型 ####
&emsp;&emsp; 用于表示布尔值，即逻辑值true和false，由于C语言中用值1表示true，0表示false，所以_Bool类型实际上也是整数类型，但原则上他只占用一位存储空间。  

#### &emsp; 5.可移植类型： stdint.h 和 inttypes.h ####

#### &emsp; 6.float、double 和 long double ####

计数法：
> 科学计数法：如（1.23X10<sup>9</sup>)
> 指数计数法：如（1.23e5）

&emsp;&emsp; C标准规定float至少能表示**6位**有效数字，而double至少能表示**13位**有效数字。

#### &emsp; 7.复数和虚数类型 ####

#### &emsp; 8.其他类型 ####

&emsp;&emsp; C语言还有一些从基本类型衍生的其他类型，包括数组、指针、结构和联合。  

#### &emsp; 9.类型大小 ####

&emsp;&emsp; 使用C语言的内置运算符sizeof，可以以字节为单位给出指定类型的大小，如（sizeof(int)），在使用sizeof运算符时应该注意如果对象是类型如（int、float），则应该使用sizeof()，如果对象是一个变量则可以直接使用sizeof，如（int dogs;sizeof dogs）。

### 五、使用数据类型 ###
&emsp;&emsp; 1.在使用变量之前必须先声明，并选择有意义的变量名。初始化变量应使用与变量类型匹配的常数类型。  
&emsp;&emsp; 2.把一个类型的数值初始化给不同类型的变量时，编译器会把值转换成与变量匹配的类型，这将导致部分数据丢失。

### 六、参数和陷阱 ###

&emsp; printf()和scanf()函数用第一个参数表明后续有多少个参数，即第一个字符串中的转换说明与后面的参数一一对应。




[目录](../README.md)

[第三章总结](../chapter4/sum4.md)

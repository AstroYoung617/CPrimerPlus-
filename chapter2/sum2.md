#第二章
***
### 一、简单的C程序示例 ###
	

	#include <stdio.h>

	int main(void){
		
		int num;
		num=1;
		
		printf("I am a simple ");
		printf("computer.\n");
		printf("My favorite number is %d because it is first.\n",num);

		return 0;
	}

### 二、示例解释 ###
&emsp; 声明：由关键字和标识符组成，如 *int num;*


### 三、简单程序的结构 ###

&emsp; 程序由一个或多个函数组成，必须有 *main()* 函数。**函数**由函数头和函数体组成。 **函数头**包括函数名、传入该函数的信息类型和函数的返回类型。 **函数体**由一系列语句、声明组成。

### 四、提高程序可读性的技巧 ###


### 五、进一步使用C ###


### 六、多个函数 ###

&emsp; 函数原型、函数调用、函数定义的关系与区别

### 七、调试程序 ###

&emsp; **1.语法错误**  
&emsp;&emsp; C语言中的语法错误指的是，把有效的C符号放在错误的地方。

&emsp; **2.语义错误**  
&emsp;&emsp; 语义错误是指意思上的错误。编译器无法检测语义错误，因为这类错误并未违反C语言的规则。但是会影响输出结果，这样的错误只能由程序员自己发现。

&emsp; **3.程序状态**  
&emsp;&emsp; 是在程序的执行过程中，某给定点上所有变量值的集合。它是当前计算机状态的一个快照。
&emsp;&emsp; 调试器相当于一步步为你展示程序在运行到关键点时的状态。


### 八、关键字和保留标识符 ###

|||||
| ----- | ---- | ---- | ---- |  
|auto|extern|short|while|
|break|float|**signed**|***_Alignas***|
|case|for|sizeof|***_Alignof***|
|char|goto|static|***_Atomic***|
|**const**|if|struct|***_Bool***|
|continue|*inline*|switch|***_Complex***|
|default|int|typedef|***_Generic***|
|do|long|union|***_Imaginary***|
|double|register|unsigned|***_Noreturn***|
|else|restrict|**void**|***_Static_assert***|
|**enum**|return|**volatile**|***_Thread_local***|

> **粗体**表示的是C90新增的关键字
> *斜体*表示的是C99新增的关键字
> ***粗斜体***表示的是C11新增的关键字


### 九、关键概念 ###
&emsp; 理解什么是C程序，在符合C标准的编译器框架中，表达你希望程序应该如何完成任务的想法。







[目录](../README.md)

[第三章总结](../chapter3/sum3.md)

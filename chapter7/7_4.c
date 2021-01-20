// 7.4 使用if else 语句编写程序读取输入，读到#停止，用感叹号代替句号，
//用两个感叹号代替文中的感叹号 ，并输出进行了多少次替换。

#include <stdio.h> 

int main(void){
	char ch;
	int count;
	
	count = 0;
	while((ch = getchar())!='#'){
		if(ch == '.'){
			ch = '!';
			count++;
		}
		else if(ch == '!'){
			putchar('!');
			count++;
		}
		putchar(ch);
	}
	printf("\n%d substitutions were made.\n", count);
	return 0;
}

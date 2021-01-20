//7.6 编写程序读取输入，读到#停止，报告ei出现的次数

#include <stdio.h>

int main(void){
	char ch_1,ch_2;
	int count,num;
	int flag;
	
	count = num = 0;
	while((ch_1 = getchar()) != '#'){
		if(ch_1 == 'e'){
			ch_2 = ch_1;
			flag = num;
			}
		if(ch_1 == 'i'){
			num == flag+1;
			count++;
		}
		num++;
	}
	printf("ei出现的次数为：%d", count);
	return 0;
} 

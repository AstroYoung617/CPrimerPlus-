//7.3 分析用户输入的偶数个数及其平均值，奇数个数及其平均值，读取到0结束

#include <stdio.h>

int main(void){
	int even,odd;
	float avg_e,avg_o;
	char ch;
	
	even = odd = avg_e = avg_o = 0;
	while((ch = getchar()) != '0'&&ch >= '1'&&ch <= '9'){
		if(ch % 2 == 0){
			even++;
			avg_e += (ch-48); 
		}
		else{
			odd++;
			avg_o += (ch-48);
		}
	}
	printf("偶数个数：%d，平均值：%.2f \n奇数个数：%d，平均值：%.2f ", even, avg_e/even,
			odd, avg_o/odd);
	return 0;
} 

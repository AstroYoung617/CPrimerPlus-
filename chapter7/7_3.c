//7.3 �����û������ż����������ƽ��ֵ��������������ƽ��ֵ����ȡ��0����

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
	printf("ż��������%d��ƽ��ֵ��%.2f \n����������%d��ƽ��ֵ��%.2f ", even, avg_e/even,
			odd, avg_o/odd);
	return 0;
} 

//4_5 ���������ٶ�Mbit/s ���ļ���СMB, ���������������������ʱ��

#include <stdio.h>

int main(void){
	float speed, volume, second;
	int min,hour;
	printf("�����������ٶȣ�"); 
	scanf("%f", &speed);
	printf("�������ļ���С��");
	scanf("%f", &volume);
	second = volume*8/speed;
	min = second/60;
	hour = min/60;
	printf("��ǰ�����ٶ�Ϊ%.2fMbit/s, �ļ���СΪ%.2fMB, Ԥ�����������Ҫ%dhour%dmin%.2fs",
			speed, volume, hour, min, second);
	return 0;
} 

//5.1 �ѷ���ת������Сʱ�ͷ��ӱ�ʾ������С����ֹͣ���� 

#include <stdio.h> 
#define M_PER_H 60 //1 hour = 60 minutes 

int main(void){
	int min;
	int hour;
	
	printf("�������������������<=0������ֹͣ����");
	scanf("%d", &min);
	while(min>0){
		hour = min / M_PER_H;
		min = min % M_PER_H; 
		printf("ת��Ϊ����Сʱ��ʾΪ��%dСʱ %d����\n��������루������<=0������ֹͣ����",
		 hour, min);
		scanf("%d", &min);
	}
	return 0;
}

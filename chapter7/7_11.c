//7.11 �������

#include <stdio.h>
#define YANG 2.05 //�󼻼۸� 
#define TIAN 1.15 //��˼۸� 
#define HU 1.09 //���ܲ��۸� 
#define DISCOUNT_LIMIT 100 //�ۿ����� 
#define DISCOUNT_RATE 0.05 //�ۿ����� 
#define BREAK1 5 //�˷ѷֽ� 
#define BREAK2 20
#define FEE1 6.5  
#define FEE2 14
#define FEE3_RATE 0.5

int main(void){
	double weight = 0;
	double weight_yang = 0;
	double weight_tian = 0;
	double weight_hu = 0;
	double total_weight;
	double veg_cost;
	double order_cost;
	double total_cost;
	double carriage;
	double discount;
	int count = 0;
	char option;
	
	printf("��ѡ����Ҫ��Ĳˣ�\n");
	printf("**********************\n");
	printf("a) ��: $%.2lf/lb\nb) ���: $%.2lf/lb\n"
		   "c) ���ܲ�: $%.2lf/lb\nd) �˳�\n",YANG ,TIAN, HU);
	printf("**********************\n");
	
	while((option = getchar())!='d'){
		switch(option){
			case 'a':
				printf("��������������");
				scanf("%lf", &weight); 
				weight_yang+=weight;
				count++;
				printf("��ѡ��Ҫ��Ĳ�(a,b,c or d�˳�)��");
				break;
			case 'b':
				printf("���������������");
				scanf("%lf", &weight); 
				weight_tian+=weight;
				count++;
				printf("��ѡ��Ҫ��Ĳ�(a,b,c or d�˳�)��");
				break;
			case 'c':
				printf("��������ܲ�������");
				scanf("%lf", &weight); 
				weight_hu+=weight;
				count++;
				printf("��ѡ��Ҫ��Ĳ�(a,b,c or d�˳�)��");
				break;
			default:
				printf("��������ȷ��ѡ�");
		}
		while(getchar()!='\n'){
			continue;
		} 
	}
		if(!count){
			printf("�ټ���\n");
			return 0;
		}
		total_weight = weight_yang + weight_tian + weight_hu;
		veg_cost = weight_yang*YANG + weight_tian*TIAN + weight_hu*HU;
		discount = 0;
		if(veg_cost >= DISCOUNT_LIMIT){
			discount = veg_cost * DISCOUNT_RATE;
			order_cost = veg_cost - discount;
		}
		else 
			order_cost = veg_cost;
		if(total_weight <= BREAK1)
			carriage = FEE1;
		else if(total_weight <= BREAK2){
			carriage = FEE2;
		}
		else 
			carriage = FEE2 + (total_weight - BREAK2) * FEE3_RATE;
		total_cost = order_cost + carriage;
		printf("��ѡ��Ĳ��У�\n\n");
		if(weight_yang){
			printf("��:\n�۸�$%.2lf/lb  ������%.2lf/lb  ���ѣ�$%.2lf\n",
					YANG, weight_yang, weight_yang*YANG);
		}
		if(weight_tian){
			printf("���:\n�۸�$%.2lf/lb  ������%.2lf/lb  ���ѣ�$%.2lf\n",
					TIAN, weight_tian, weight_tian*TIAN);
		}
		if(weight_hu){
			printf("���ܲ�:\n�۸�$%.2lf/lb  ������%.2lf/lb  ���ѣ�$%.2lf\n",
					HU, weight_hu, weight_hu*HU);
		}
		printf("�߲˻���Ϊ��$%.2lf\n", veg_cost); 
		if(discount){
			printf("������%%%.f ���ۿۣ�������ʡ��$%.2lf\n",
			 DISCOUNT_RATE*100, discount);
		}
		printf("�˷�Ϊ��$%.2lf\n", carriage);
		printf("�ܷ���Ϊ��$%.2lf\n", total_cost); 
	return 0;
} 

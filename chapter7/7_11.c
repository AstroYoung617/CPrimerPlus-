//7.11 购物计算

#include <stdio.h>
#define YANG 2.05 //洋蓟价格 
#define TIAN 1.15 //甜菜价格 
#define HU 1.09 //胡萝卜价格 
#define DISCOUNT_LIMIT 100 //折扣限制 
#define DISCOUNT_RATE 0.05 //折扣力度 
#define BREAK1 5 //运费分界 
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
	
	printf("请选择您要买的菜：\n");
	printf("**********************\n");
	printf("a) 洋蓟: $%.2lf/lb\nb) 甜菜: $%.2lf/lb\n"
		   "c) 胡萝卜: $%.2lf/lb\nd) 退出\n",YANG ,TIAN, HU);
	printf("**********************\n");
	
	while((option = getchar())!='d'){
		switch(option){
			case 'a':
				printf("请输入洋蓟重量：");
				scanf("%lf", &weight); 
				weight_yang+=weight;
				count++;
				printf("再选择要买的菜(a,b,c or d退出)：");
				break;
			case 'b':
				printf("请输入甜菜重量：");
				scanf("%lf", &weight); 
				weight_tian+=weight;
				count++;
				printf("再选择要买的菜(a,b,c or d退出)：");
				break;
			case 'c':
				printf("请输入胡萝卜重量：");
				scanf("%lf", &weight); 
				weight_hu+=weight;
				count++;
				printf("再选择要买的菜(a,b,c or d退出)：");
				break;
			default:
				printf("请输入正确的选项！");
		}
		while(getchar()!='\n'){
			continue;
		} 
	}
		if(!count){
			printf("再见！\n");
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
		printf("您选择的菜有：\n\n");
		if(weight_yang){
			printf("洋蓟:\n价格：$%.2lf/lb  重量：%.2lf/lb  花费：$%.2lf\n",
					YANG, weight_yang, weight_yang*YANG);
		}
		if(weight_tian){
			printf("甜菜:\n价格：$%.2lf/lb  重量：%.2lf/lb  花费：$%.2lf\n",
					TIAN, weight_tian, weight_tian*TIAN);
		}
		if(weight_hu){
			printf("胡萝卜:\n价格：$%.2lf/lb  重量：%.2lf/lb  花费：$%.2lf\n",
					HU, weight_hu, weight_hu*HU);
		}
		printf("蔬菜花费为：$%.2lf\n", veg_cost); 
		if(discount){
			printf("您享有%%%.f 的折扣，给您节省了$%.2lf\n",
			 DISCOUNT_RATE*100, discount);
		}
		printf("运费为：$%.2lf\n", carriage);
		printf("总费用为：$%.2lf\n", total_cost); 
	return 0;
} 

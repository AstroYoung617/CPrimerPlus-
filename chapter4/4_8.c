//4_8 输入旅行里程和消耗的汽油量，计算消耗每加仑汽油行驶的英里数

#include <stdio.h>
#define GALLON_TO_LITER 3.785
#define MILE_TO_KM 1.609

int main(void){
	float mile,petrol;
	printf("请输入英里数：");
	scanf("%f", &mile);
	printf("请输入加仑数：");
	scanf("%f", &petrol);
	printf("在美国你的耗油量为：%.1f M/G\n", mile/petrol);
	printf("在欧洲你的耗油量为：%.1f L/100KM", (petrol*GALLON_TO_LITER)/(mile*MILE_TO_KM));
	return 0;
} 

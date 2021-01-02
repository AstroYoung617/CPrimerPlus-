//4_5 输入下载速度Mbit/s 和文件大小MB, 输出以上两个变量及下载时间

#include <stdio.h>

int main(void){
	float speed, volume, second;
	int min,hour;
	printf("请输入下载速度："); 
	scanf("%f", &speed);
	printf("请输入文件大小：");
	scanf("%f", &volume);
	second = volume*8/speed;
	min = second/60;
	hour = min/60;
	printf("当前下载速度为%.2fMbit/s, 文件大小为%.2fMB, 预计下载完成需要%dhour%dmin%.2fs",
			speed, volume, hour, min, second);
	return 0;
} 

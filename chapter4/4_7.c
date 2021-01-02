//4_7

#include <stdio.h>
#include <float.h>

int main(void){
	double db = 1.0/3.0;
	float fl = 1.0/3.0;
	
	printf("%.6f\n", fl);
	printf("%.12f\n", fl);
	printf("%.16f\n", fl);
	printf("%.6lf\n", db);
	printf("%.12lf\n", db);
	printf("%.16lf\n", db);
	printf("%d\n", FLT_DIG);
	printf("%d\n", DBL_DIG);
	return 0;
}

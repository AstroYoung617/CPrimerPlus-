//7.2 将字符转换成对应的ASCII码，每行显示8个

#include <stdio.h> 

int main(void){
	int count;
	char ch;
	
	while((ch = getchar()) != '#'){
		printf("%d ", ch);
		count++;
		if(count % 8 == 0)
			printf("\n");
	}
	return 0;
}

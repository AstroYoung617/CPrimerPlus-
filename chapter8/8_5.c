//8.5 �޸ĳ����嵥8.4�����ֳ���ʹ�ö��ֲ��ң�

#include <stdio.h>
#define FIRST_GUESS 50
#define UP 100
#define DOWN 1
int main(void){
	int guess,up,down;
	char ch;
	
	up = UP;
	down = DOWN;
	guess = (DOWN + UP)/2;
	printf("Pick an integer from %d to %d. I will try to guess ", DOWN, UP);
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\n a s if it is too small or a b if it is too big.\n");
	printf("Uh...is your number %d?\n", guess);
	while((ch = getchar()) != 'y'){
		while(getchar() != '\n')
			;
		if(ch == 'b'){
			up = guess;
		}
		else if(ch == 's'){
			down = guess;
		}
		else {
			printf("Sorry, I understand only y, b or s.\n");
			continue;
		}
		guess = (down + up)/2;
		printf("Well, then, is it %d?\n", guess);

	} 
	printf("I knew I could do it!\n");
	return 0;
} 

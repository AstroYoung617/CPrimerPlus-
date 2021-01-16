//6.18 please count the Dr.Rahnud's friends counts of every weeks, till the number beyond 
// the Dunbar's number

#include <stdio.h>
#define DUNBAR 150
#define BEGIN 5

int main(void){
	int weeks,friends;
	
	friends = BEGIN;
	printf("weeks  friends\n");
	for(weeks = 1;friends<DUNBAR;weeks++){
		printf("%-5d %5d\n",weeks-1 ,friends);
		friends = 2 * (friends-weeks);
	}
	return 0;
}

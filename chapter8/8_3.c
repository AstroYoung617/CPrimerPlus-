//8.3 统计输入中的大写和小写字母个数

#include <stdio.h>
#include <ctype.h>

int main(void){
	char ch;
	int countl,countu;
	
	countl = countu = 0;
	while((ch = getchar()) != EOF){
		if(isalpha(ch)){
			if(islower(ch))
				countl++;
			else if(isupper(ch))
				countu++;
		}
	}
	printf("共有字母：%d 个，其中小写字母：%d 个，大写字母：%d 个", countl + countu ,
			countl, countu);
	
	return 0;
} 

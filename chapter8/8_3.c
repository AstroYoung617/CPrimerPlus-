//8.3 ͳ�������еĴ�д��Сд��ĸ����

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
	printf("������ĸ��%d ��������Сд��ĸ��%d ������д��ĸ��%d ��", countl + countu ,
			countl, countu);
	
	return 0;
} 

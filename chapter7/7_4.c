// 7.4 ʹ��if else ����д�����ȡ���룬����#ֹͣ���ø�̾�Ŵ����ţ�
//��������̾�Ŵ������еĸ�̾�� ������������˶��ٴ��滻��

#include <stdio.h> 

int main(void){
	char ch;
	int count;
	
	count = 0;
	while((ch = getchar())!='#'){
		if(ch == '.'){
			ch = '!';
			count++;
		}
		else if(ch == '!'){
			putchar('!');
			count++;
		}
		putchar(ch);
	}
	printf("\n%d substitutions were made.\n", count);
	return 0;
}

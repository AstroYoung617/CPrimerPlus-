//7.1 ��ȡ���룬ֱ��#ֹͣ��ͳ�ƶ�ȡ�Ŀո������������������ַ���

#include <stdio.h> 

int main(void){
	int s_ch,n_ch,o_ch;//s_ch��ʾ�ո���,n_ch��ʾ������,o_ch��ʾ�����ַ��� 
	char ch;
	
	s_ch = n_ch = o_ch = 0;
	while((ch = getchar()) != '#'){
		if(ch==' ')
			s_ch++;
		else if(ch=='\n')
			n_ch++;
		else
			o_ch++;
	}
	printf("�ո�����%d ����������%d �������ַ�����%d ��", s_ch, n_ch, o_ch);
	return 0;
}

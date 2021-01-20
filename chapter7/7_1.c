//7.1 读取输入，直到#停止，统计读取的空格数，换行数，其它字符数

#include <stdio.h> 

int main(void){
	int s_ch,n_ch,o_ch;//s_ch表示空格数,n_ch表示换行数,o_ch表示其它字符数 
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
	printf("空格数：%d ，换行数：%d ，其他字符数：%d ，", s_ch, n_ch, o_ch);
	return 0;
}

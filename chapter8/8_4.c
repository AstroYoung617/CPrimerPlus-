//8.4 统计平均每个单词的字母数。

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void){
	char ch;
	int count_alpha = 0;
	int count_word = 0;
	bool flag = false;    //用于标记是否在单词中 
	
	printf("**该程序用于计算文本中单词的平均字母数**\n\n");
	printf("请输入文本(换行后按下Ctrl+Z结束)：\n"); 
	while((ch = getchar()) != EOF){
		if(isalpha(ch)){
			count_alpha++;
		}
		if(isalpha(ch)&&!flag){  
			flag = true;
			count_word++;
		}
		if(ispunct(ch) || isspace(ch)){
			flag = false;
		}
	}
	printf("共有字母：%d，共有单词：%d，平均每个单词有 %.2f 个字母。", count_alpha,count_word, 
			 (float)count_alpha/(float)count_word);
	return 0;
} 

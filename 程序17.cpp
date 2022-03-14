#include "stdio.h"
main()
{char c;
int letters=0,space=0,digit=0,others=0;
printf("please input some characters\n");
while((c=getchar())!='\n')
{
if(c>='a'&&c<='z'||c>='A'&&c<='Z')
letters++;
else if(c==' ')
space++;
else if(c>='0'&&c<='9')
digit++;
else
others++;
}
printf("all in all:char=%d space=%d digit=%d others=%d\n",letters,
space,digit,others);
}

/*
#include <stdio.h>
int main(){
	char c;
	int letters = 0,spaces = 0,digits = 0,others = 0;
	printf("请输入要统计的元素：\n");
	while((c = getchar() )!= '\n'){
		if(c >= 'a'&&c <= 'z'|| c >= 'A'&&c <= 'Z')
		letters++;
		else if(c == ' ')
		spaces++;
		else if(c >= '0'&&c <= '9')
		digits++;
		else
		others++;
			}
		printf("一共字母：%d个，数字：%d个，空格：%d个，其他字符：%d个\n",letters,digits,spaces,others);
} 
*/

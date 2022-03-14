/* 方法一 
#include <stdio.h>
void reverse(char* s){
	int len = 0;   // 获取字符串长度 
	char* p = s;
	while(*p != 0){
		len++;
		p++;
	}
	int i = 0;   //交换 
	char c;
	while(i <= len/2 - 1){
		c = *(s + i);
		*(s + i) = *(s + len -1 -i);
		*(s + len - 1 - i) = c;
		i++;
	}
}
int main(){
	char s[] = "www.runoob.com";
	printf("'%s' => ",s);
	reverse(s);
	printf("'%s'\n",s);
	return 0;
	
}
*/
#include <stdio.h>
#include<string.h>

int main()
{
    char c[1000];
    fgets(c, (sizeof c / sizeof c[0]), stdin);
    int d=strlen(c);
    //printf("%d\n",d);
    char a[1000];
    int j=0;
    for(int i=d-1;i>=0;i--)
    {
        a[i]=c[j];
        j++;
    }
    puts(a);
} 

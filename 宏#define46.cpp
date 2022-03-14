#include <stdio.h>
#define TRUE 1
#define FALSE 0 
#define SQ(x) (x)*(x)
int main(){
	int num;
	int again = 1;
	printf("如果值小于50程序将终止。\n");
	while(again){
		printf("\n请输入数字：");
		scanf("%d",&num);
		printf("该树的平方和为%d \n",SQ(num));
		if(num >= 50)
		 again = TRUE;
	    else
	    again = FALSE;
	}
	return 0;
} 

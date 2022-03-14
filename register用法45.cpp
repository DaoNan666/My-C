#include <stdio.h>
int main(){
	register int i;
	int tmp = 0;
	for(i = 1;i <= 100;i++)
	 tmp += i;  // 累加1-100 
	printf("总和为%d\n",tmp);
	return 0;
} 

#include <stdio.h>
int main(){
	int i,num;
	num = 2;
	for(i = 0;i < 3;i++){
		printf("num变量为：%d \n",num);
		num++;
		{
			auto int num = 1;
			printf("内置模块num变量为%d \n",num);
			num++;
		}
	}
	return 0;
} 

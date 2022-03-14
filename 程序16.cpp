#include <stdio.h>
int main(){
	int a,b,num1,num2,temp;
	printf("请输入2个正整数：\n");
	scanf("%d%d",&num1,&num2);
	if(num1 < num2){
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	a = num1;
	b = num2;
	while(b != 0){  //利用辗除法，直到b为0 
		temp = a%b;
		a = b;
		b = temp;
	}
	printf("最大公约数：%d\n",a);
	printf("最小公倍数：%d\n",num1*num2/a);
}

#include <stdio.h>
int main(){
	int a,b,num1,num2,temp;
	printf("������2����������\n");
	scanf("%d%d",&num1,&num2);
	if(num1 < num2){
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	a = num1;
	b = num2;
	while(b != 0){  //����շ������ֱ��bΪ0 
		temp = a%b;
		a = b;
		b = temp;
	}
	printf("���Լ����%d\n",a);
	printf("��С��������%d\n",num1*num2/a);
}

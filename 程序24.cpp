#include <stdio.h>
int main(){
	int n,t,number = 20;
	float a = 2,b = 1,s = 0;  // aΪ���ӣ�bΪ��ĸ 
	for(n = 1;n <= number;n++){
		s = s + a/b;
		t = a;
		a = a + b; // t���ú���Ҫ��Ҫע�� 
		b = t;
	}
	printf("��Ϊ:%9.6f\n",s);
} 

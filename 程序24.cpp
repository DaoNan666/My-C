#include <stdio.h>
int main(){
	int n,t,number = 20;
	float a = 2,b = 1,s = 0;  // a为分子，b为分母 
	for(n = 1;n <= number;n++){
		s = s + a/b;
		t = a;
		a = a + b; // t作用很重要，要注意 
		b = t;
	}
	printf("和为:%9.6f\n",s);
} 

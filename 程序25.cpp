#include <stdio.h>
int main(){
	float n,s = 0,t = 1;
	for(n = 1;n <= 20;n++){
		t *= n;
		s += t;
	}
	printf("1+2!+3!...+20!=%d\n",s);// %e输出为指数类型 
}

#include <stdio.h>
int main(){
	
	long f1,f2;
	int i;
	for(i = 1;i <= 20;i++){
		printf("%ld %ld ",f1,f2);
		if(i%2==0)
		printf("\n");  // ���У����� 
		
		f1 = f1 + f2;
		
		f2 = f1 + f2;
		
	} 
} 

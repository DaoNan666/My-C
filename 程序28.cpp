/* ·½·¨Ò» 
#include <stdio.h>
int age(int n){
	int c;
	if(n == 1){
		c = 10;
	}else{
		c = age(n - 1)+ 2;
	}
	return c;
}
int main(){
	printf("%d\n",age(5));
} 
*/
#include <stdio.h>
int main(){
	int x1 = 10,x2,i;
	for(i = 0;i < 4;i++){
		x2 = x1 +2;
		x1 = x2;
	}
	printf("%d\n",x2);
	return 0;
} 


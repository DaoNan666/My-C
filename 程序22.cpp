#include <stdio.h>
int main(){
	
	char i,j,k;  // iΪa�Ķ��֣�jΪb�Ķ��֣�kΪc�Ķ��� 
	for(i = 'x';i <='z';i++)
	  for(j = 'x';j <= 'z';j++){
	  	if(i != j)
	  	  for(k = 'x';k <= 'z';k++){
	  	  	if(i != k&& j != k){
	  	  		if(i != 'x'&& k != 'x'&& k != 'z')
	  	  		printf("����Ϊa--%c\tb--%c\tc--%c\n",i,j,k);
				}
			}
	  }
} 

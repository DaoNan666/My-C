#include <stdio.h>
int main(){
	long a,b,c,d,e,x;
	printf("请输入5位数字：");
	scanf("%ld",&x);
	a = x/10000;  //分解出 万位 
	b = x%10000/1000; // 分解出 千位 
	c = x%1000/100;  // 分解出  百位 
	d = x%100/10;   //  分解出  十位 
	e = x%10;       //  分解出  个位 
	if(a != 0){
		printf("为5位数，逆序为：%ld%ld%ld%ld%ld\n",e,d,c,b,a);
	}else if(b != 0){
			printf("为4位数，逆序为：%ld%ld%ld%ld\n",e,d,c,b);
	}else if(c != 0){
			printf("为3位数，逆序为：%ld%ld%ld%ld%ld\n",e,d,c);
	}else if(d != 0){
			printf("为2位数，逆序为：%ld%ld%ld%ld%ld\n",e,d);
	}else if(e != 0){
			printf("为1位数，逆序为：%ld%ld%ld%ld%ld\n",e);
	}
}


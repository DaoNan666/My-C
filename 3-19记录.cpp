#define _CRT_SECURE_NO_WARNINGS

//  输出 hello world
//#include <stdio.h>
//
//int main() {
//	printf("hello  world!\n");
//	return 0;
//}

//  输出整数
//
//#include <stdio.h>
//
//int main() {
//	int a;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	printf("输入的整数是：%d", a);
//	return 0;
//}

//  输出单个字符

//#include <stdio.h>
//
//int main() {
//	char ch;
//	printf("请输入一个字符：");
//	scanf("%c", &ch);
//	printf("%c", ch);
//	return 0;
//}

//输出浮点数和双精度数
//#include <stdio.h>
//
//int main() {
//	float a = 3.1;
//	double b = 3.14;
//	printf("%f\n", a);
//	printf("%lf\n", b);
//
//	return 0;
//}

// 两个整数相加

//#include <stdio.h>
//
//int main() {
//	int a, b,c;
//	printf("请输入两个整数：\n");
//	scanf("%d%d", &a, &b);
//	c = a + b;
//	printf("%d", c);
//	return 0;
//}

//  两个浮点数相乘

//#include <stdio.h>
//
//int main() {
//	float a, b, c;
//	printf("请输入两个浮点数：\n");
//	scanf("%f%f", &a, &b);
//	c = a * b;
//	printf("%f\n", c);
//	printf("%.2lf\n", c);   //  保留两位小数
//	return 0;
//}

//  字符转ASCII码

//#include <stdio.h>
//
//int main() {
//	char c;
//	printf("请输入一个字符：\n");
//	scanf("%c", &c);
//	printf("%c的ASCII码为：%d\n", c, c);
//	return 0;
//}

// 两数相除，若有余数，则输出余数

//#include <stdio.h>
//
//int main() {
//	int a, b, c,d;
//	printf("请分别输入被除数和除数：\n");
//	scanf("%d%d", &a, &b);
//	c = a / b; //  计算商
//	d = a % b;  //  计算余数
//	printf("商为：%d\n", c);
//	printf("余数为：%d\n", d);
//	return 0;
//}

//  两个数比较

//#include <stdio.h>
//
//int main() {
//	int a, b;
//	printf("请输入要比较的两个数：\n");
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		printf("%d大于%d\n",a,b);
//	else if (a < b)
//		printf("%d小于%d\n",a,b);
//	else
//		printf("%d等于%d\n",a,b);
//	return 0;
//}

//  三个数比较

//#include <stdio.h>
//
//int main() {
//	int a, b, c,temp;
//	printf("请输入要比较的三个数：\n");
//	scanf("%d%d%d", & a, &b, &c);
//	if (a > b) {
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a > c) {
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b > c) {
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("最大值是：%d,次大值是：%d,最小值是：%d", c, b, a);
//	return 0;
//}

// 计算int，float，double，char字节大小

//#include <stdio.h>
//
//int main() {
//	int a;
//	long e;
//	long long f;
//	float b;
//	double c;
//	char d;
//	printf("int字节大小是：%d\n", sizeof(a)); // 4
//	printf("long字节大小是：%d\n", sizeof(e)); //  4
//	printf("long long字节大小是：%d\n", sizeof(f));  // 8
//	printf("float字节大小是：%d\n", sizeof(b)); // 4
//	printf("double字节大小是：%d\n", sizeof(c));  // 8
//	printf("char字节大小是：%d\n", sizeof(d));  //  1
//
//	return 0;
//}

// 交换两个数的值
//  方法一：使用临时变量
//#include <stdio.h>
//
//int main() {
//	int a, b, temp;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	printf("交换前a = %d,b = %d\n", a, b);
//	temp = a;
//	a = b;
//	b = temp;
//	printf("交换后a = %d,b = %d\n", a, b);
//	return 0;
//}

// 方法二：
//#include <stdio.h>
//
//int main() {
//	int a, b;
//	printf("请输入两个数：\n");
//	scanf("%d%d", &a, &b);
//	printf("交换前a = %d,b = %d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后a = %d,b = %d\n", a, b);
//	return 0;
//}

//  判断奇偶数

//#include <stdio.h>
//
//int main() {
//	int i;
//	for (i = 0; i <= 100; i++) {
//		if (i % 2 == 0) {
//			printf("%d是偶数\n", i);
//		}
//		else
//			printf("%d是奇数\n", i);
//	}
//	return 0;
//}

//  判断是元音还是辅音

//#include <stdio.h>
//
//int main() {
//	char c;
//	printf("请输入一个字母：\n");
//	scanf("%c", &c);
//	if (c <= 'Z' && c >= 'A' || c <= 'z' && c >= 'a')
//		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
//			printf("%c是元音\n", c);
//		else
//			printf("%c是辅音\n", c);
//	else
//		printf("输入有误");
//	return 0;
//}

//  三个数中最大值

//#include <stdio.h>
//
//int main() {
//	int a, b, c;
//	printf("请输入三个数：");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b && a > c)
//		printf("最大值为%d\n",a);
//	if (b > a && b > c)
//		printf("最大值是%d\n", b);
//	if (c > a && c > b)
//		printf("最大值是%d\n", c);
//	return 0;
//}

//  一元二次方程 :ax2+bx+c=0

//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	double a, b, c,x1,x2,d,e;
//	printf("请输入方程的三个系数：\n");
//	scanf("%lf%lf%lf", &a, &b, &c);
//	if (a != 0) {
//		e = b * b - 4 * a * c;
//		if (e >= 0) {
//			d = sqrt(e);
//			x1 = (-b + d) / (2 * a);
//			x2 = (-b - d) / (2 * a);
//			if (x1 > x2)
//				printf("%.2lf %.2lf", x1, x2);
//			else
//				printf("%.2lf %.2lf", x2, x1);
//		}
//		else
//			printf("该方程无实数根");
//		
//	}
//	return 0;
//}

//  判断闰年
//  1.能被4整除且不能被100整除是闰年
//  2.能被400整除是闰年
//
//#include <stdio.h>
//
//int main() {
//	int a;
//	printf("请输入一个年份：\n");
//	scanf("%d", &a);
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		printf("该年是闰年\n");
//	else
//		printf("该年不是闰年\n");
//	return 0;
//}

//  判断正负数
//
//#include <stdio.h>
//
//int main() {
//	int a;
//	printf("请输入一个数：");
//	scanf("%d", &a);
//	if (a > 0)
//		printf("该数是正数\n");
//	else if (a < 0)
//		printf("该数是负数\n");
//	else
//		printf("该数是0\n");
//	return 0;
//}

//  判断字母

//#include <stdio.h>
//
//int main() {
//	char c;
//	printf("请输入一个字符：");
//	scanf("%c", &c);
//	if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
//		printf("该字符是字母:%c\n", c);
//	else
//		printf("该字符不是字母\n");
//
//	return 0;
//}

//  计算自然数的和
// 
//方法一：for循环
// 
//#include <stdio.h>
//
//int main() {
//	int a, sum=0;
//	for (a = 0; a <= 100; a++) {
//		sum = sum + a;
//	}
//	printf("%d", sum);
//	return 0;
//}

//  方法二：while循环

//#include <stdio.h>
//#define N 100
//
//int main() {
//	int i=0,sum=0;
//	while (i <= N) {
//		sum = sum + i;
//		i++;
//	}
//	printf("%d", sum);
//	return 0;
//}

//  方法三：函数递归

//#include <stdio.h>
//int Add(int n) {
//	int a = 0;
//	int ret = 0;
//	while (a <= n) {
//		ret = ret + a;
//		a++;
//	}
//	return ret;
//}
//
//int main() {
//	int n, sum = 0;
//	printf("输入一个整数：");
//	scanf("%d",&n);
//	sum = Add(n);
//	printf("%d\n",sum);
//	return 0;
//}

 //   输出99乘法表

//#include <stdio.h>
//
//int main() {
//	int i, j;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i; j++) {
//			int ret = i * j;
//			printf("%d * %d = %-5d", i, j, ret);
//		}
//		printf("\n");  //  注意换行符位置
//	}
//	
//	return 0;
//}


//  菲波那切数列

//#include <stdio.h>
//
//int main() {
//	int i,n,a=0,b=1,c;
//	printf("输出几项？");
//	scanf("%d", &n);
//
//	printf("菲波那切数列为：");
//	for (i = 1; i <= n; i++) {
//		printf("%d ", a);
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int a = 0, b = 1, n;
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	printf("%d %d", a, b);
//	int c = a + b;
//	while(c<=n) {
//		printf("%d ", c);
//		a = b;
//		b = c;
//		c = a + b;
//	}
//	return 0;
//}

//  最大公约数
//  辗转相除法
//#include <stdio.h>
//
//int main() {
//	int m, n;
//	printf("请输入两个整数：");
//	scanf("%d%d", &m, &n);
//	int a = m * n;
//	while (m % n != 0) {
//		int r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("最大公约数是：%d\n", n);
//	int s = a / n;
//	printf("最小公倍数是：%d\n", s);
//	return 0;
//}
// 最小公倍数 = 两数乘积 / 最大公约数


//  阶乘

//#include <stdio.h>
//
//int main() {
//	int n;
//	int s = 1;
//	printf("输入一个整数：");
//	scanf("%d", &n);
//	if (n < 0)
//		printf("输入错误\n");
//	else if (n == 0)
//		printf("0！= 1\n");
//	else {
//		for (int i = 1; i <= n; i++) {
//			
//			s = s * i;
//		}
//		printf(" %d != %d", n, s);
//	}
//	return 0;
//}

//  循环输出字母表

//#include <stdio.h>
//
//int main() {
//	char c;
//	for (c ='A';c<='Z';c++)
//		printf("%c ", c);
//	return 0;
//}
//  还可以用ASCII码，代码还可优化为大小写字母输出

//  判断数字几位数

//#include <stdio.h>
//
//int main() {
//	int n, count = 0;
//	
//	printf("请输入一个数：");
//	scanf("%d", &n);
//	int d = n;
//	while (d != 0) {
//		d = d / 10;
//		++count;
//	}
//	printf("%d 是 %d 位数\n",n, count);
//	return 0;
//}

//  计算一个数的n次方

//#include <stdio.h>
//
//int main() {
//	int a, b;
//	int s = 1;
//	printf("请输入基数和指数：");
//	scanf("%d%d", &a, &b);
//	while (b != 0) {
//		
//		s = s * a;
//		b--;
//	}
//	printf("%d", s);
//	return 0;
//}

//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	int a, b, s;
//	printf("请输入基数和指数：");
//	scanf("%d%d", &a, &b);
//	s = pow(a, b);
//	printf("%d", s);
//	return 0;
//}

//  判断回文数

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str1[20], str2[20];
//	int i,j=0;
//	printf("请输入一个数：");
//	scanf("%s", str1);
//	int len = strlen(str1);
//	for (int i = len-1; i >= 0; i--) {
//		str2[j++] = str1[i];
//	}
//	str2[j] = '\0';
////	printf("%s %s\n", str1, str2);
//	if (strcmp(str1, str2) == 0)
//		printf("该数是回文数\n");
//	else
//		printf("该数不是回文数\n");
//
//	return 0;
//}


//  判断素数

//#include <stdio.h>
//#include <math.h>
//int main() {
//	int n, count = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) {
//			count = 1;
//			break; //只要符合就退出，不然往后符合的也会打印
//		}
//	}
//	if (count == 1)
//		printf("该数不是素数\n");
//	else
//		printf("该数是素数\n");
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int i, j,a;
//	printf("请输入两个整数：");
//	scanf("%d%d", &i, &j);
//	printf("%d 和 %d之间的素数为：\n", i, j);
//	while (i < j) {
//		int count = 0;
//		for (a = 2; a < i / 2; a++) {
//        //   找出非素数
//			if (i % a == 0) {
//				count = 1;
//				break;
//			}
//		}
//		if (count == 0)
//			printf("%d ", i);
//		i++;  //  这一步很重要，切记
//	}
//	return 0;
//}

//  判断Armstrong数 ，即153 = 1^3 +5^3 +3^3

//#include <stdio.h>
//
//int main() {
//	int a,i,j,k;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	i = a % 10;
//	j = a / 10 % 10;
//	k = a / 100;
//	if (a == (i * i * i) + (j * j * j) + (k * k * k))
//		printf("%d是Armstrong数\n", a);
//	else
//		printf("%d不是Armstrong数\n", a);
//	return 0;
//}

//#include <stdio.h>
//#define N 1000
//
//int main() {
//	int i,a,b,c;
//	for (i = 100; i < N; i++) {
//		a = i % 10;
//		b = i / 10 % 10;
//		c = i / 100;
//		if (i == (a * a * a) + (b * b * b) + (c * c * c))
//			printf("%d ", i);
//	}
//	return 0;
//}

//  求一个整数的的所有因数

//#include <stdio.h>
//
//int main() {
//	int a, i;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	for (i = 1; i <= a ; i++) {
//		if (a % i == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//  创建各类三角形

//#include <stdio.h>
//
//int main() {
//	int i, j, r;
//	printf("请输入行数：");
//	scanf("%d", &r);
//	for (i = 1; i <= r; i++){
//		for (j = 1; j <= i; j++) {
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int i, j, r;
//	printf("请输入行数：");
//	scanf("%d", &r);
//	for (i = 1; i <= r; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char  r,s='A';
//	int  i, j;
//	printf("请输入大写字母：");
//	scanf("%c", &r);
//	for (i = 1; i <= (r-'A'+1); i++) {  // 利用ASCII码
//		for (j = 1; j <= i; j++) {
//			printf("%c ", s);
//		}
//		s++; // 这一步很重要
//		printf("\n");
//	}
//	return 0;
//}
// // 倒三角形
//#include <stdio.h>
//
//int main() {
//	int i, j, r;
//	printf("请输入行数：");
//	scanf("%d", &r);
//	for (i = r; i >= 1; i--) {
//		for (j = 1; j <= i; j++) {
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int i, j, r;
//	printf("请输入行数：");
//	scanf("%d", &r);
//	for (i = r; i >= 1; i--) {
//		for (j = 1; j <= i; j++) {
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int i, j, r, s,n=0;
//	printf("请输入行数：");
//	scanf("%d", &r);
//
//	for (i = 1; i <= r; ++i,n=0) {
//		// 控制空格数
//		for (s = 1; s <= r - i; ++s) {
//			printf("  ");
//		}
//		while (n != 2 * i - 1) {
//			printf("* ");
//			++n;
//		}
//		printf("\n");
//	}
//	return 0;
//}

//
//#include <stdio.h>
//
//int main() {
//	int i, s, r, count = 0,k=0,temp=0;
//	printf("请输入行数：");
//	scanf("%d", &r);
//	for (i = 1; i <= r; i++) {
//		for (s = 1; s <= r - i; s++) {
//			printf("  ");
//			count++;
//		}
//		while (k != 2 * i - 1) {
//			if (count <= r - 1) {
//				printf("%d ", i + k);
//				count++;
//			}
//			else {
//				temp++;
//				printf("%d ", (i + k - 2 * temp));
//			}
//			k++;
//		}
//		temp = count = k = 0;
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int rows, i, j, space;
//
//    printf("行数: ");
//    scanf("%d", &rows);
//
//    for (i = rows; i >= 1; --i)
//    {
//        for (space = 0; space < rows - i; ++space)
//            printf("  ");
//        //  三角形左半部分
//        for (j = i; j <= 2 * i - 1; ++j)
//            printf("* ");
//        //  三角形右半部分
//        for (j = 0; j < i - 1; ++j)
//            printf("* ");
//
//        printf("\n");
//    }
//
//    return 0;
//}
//  杨辉三角形
//#include <stdio.h>
//
//int main() {
//	int i, j, r, s,m=1;
//	printf("请输入行数：");
//	scanf("%d", &r);
//	for (i = 0; i <= r; i++) {
//		for (s = 1; s <= r - i; s++) {
//			printf("  ");
//		}
//		for (j = 0; j <= i; j++) {
//			if (j == 0 || i == 0)
//				m = 1;
//			else
//				m = m * (i - j + 1) / j;
//			printf("%4d", m);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//  弗洛伊德三角形
//#include <stdio.h>
//#define N 10
//
//int main() {
//	int i, j, l;
//	for (i = 1, j = 1; i <= N; i++) {
//		for (l = 1; l <= i; l++, j++)
//			printf("%5d", j);
//		printf("\n");
//	}
//	return 0;
//}

//  表格形式输出

//#include <stdio.h>
//
//int main() {
//	int i, j, count;
//	// i控制行数
//	for (i = 1; i <= 10; i++) {
//		for (j = i; j <= 100; j+=10) {
//			printf(" %3d", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int i, j, count;
//	int start, end;
//	start = 2, end = 10;
//	for (i = start; i <= end; i++) {
//		count = i;
//		for (j = 1; j <= 10; j++) {
//			// 是每列按第一列倍数增加
//			printf(" %3d", count * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//  实现简单计算器

//#include <stdio.h>
//void Add(void) {
//	int n, m;
//	printf("请输入两个数：\n");
//	scanf("%d%d", &n, &m);
//	int ret = n + m;
//	printf("%d + %d = %d\n",n,m,ret);
//}
//void Sub(void) {
//	int n, m;
//	printf("请输入两个数：\n");
//	scanf("%d%d", &n, &m);
//	int ret = n - m;
//	printf("%d - %d = %d\n", n, m, ret);
//}
//void Mul(void) {
//	int n, m;
//	printf("请输入两个数：\n");
//	scanf("%d%d", &n, &m);
//	int ret = m * n;
//	printf("%d x %d = %d\n", n, m, ret);
//}
//void Div(void) {
//	int n, m;
//	printf("请输入两个数：\n");
//	scanf("%d%d", &n, &m);
//	int ret = n / m;
//	printf("%d / %d = %d\n", n, m, ret);
//}
//int main() {
//	int n;
//	int a, b;
//	printf("----------计算器---------\n");
//	printf("----------1.加法---------\n");
//	printf("----------2.减法---------\n");
//	printf("----------3.乘法---------\n");
//	printf("----------4.除法---------\n");
//	printf("----------5.退出---------\n");
//	printf("----------选择要进行的操作---------\n");
//	scanf("%d", &n);
//	switch (n) {
//	    case 1:
//		    Add();
//		    break;
//		case 2:
//			Sub();
//			break;
//		case 3:
//			Mul();
//			break;
//		case 4:
//			Div();
//			break;
//		case 5:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入有误\n");
//			break;
//	}
//	return 0;
//}


//  判断一个数是否为两个素数的和

#include <stdio.h>
int check(int n) {
	int i, j = 1;
	for (i = 2; i < n / 2; i++) {
		if (n % i == 0) {
			j = 0;
			break;
		}
	}
	return j;
}
int main() {
	int n;
	int i,flag = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &n);
	
	for (i = 2; i <= n / 2; i++) {
		if (check(i) == 1) {
			if (check(n - i) == 1) {
				printf("%d是%d和%d两个素数的和\n", n, i, n-i);
				flag = 1;
			}
		}
	}
	if (flag == 0)
		printf("%d不能被分解为两个素数\n",n);
	return 0;
}
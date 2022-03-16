#define _CRT_SECURE_NO_WARNINGS



//题目：判断一个数字是否为质数。
//
//程序分析：质数（prime number）又称素数，有无限个。
//一个大于1的自然数，除了1和它本身外，不能被其他自然数整除

//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	int i, m = 0;
//	int count = 0;
//	// 注意这里直接排除了0和1两种情况
//	printf("输入一个大于1的自然数：\n");
//	scanf("%d", &m);
//	for (i = 2; i <= m / 2; i++) {
//		// 若存在m能整除的数 则m不是素数
//		if (m % i == 0) {
//			count++;
//			break;
//		}
//	}
//	if (count == 0) {
//		printf("%d是一个质数\n", m);
//	}
//	else {
//		printf("%d不是质数\n",m);
//	}
//	return 0;
//}


//  函数调用练习

//#include <stdio.h>
//
//void hello_world(void) {
//	printf("Hello world!\n");
//}
//
//void three_hellos(void) {
//	int count;
//	for (count = 1; count <= 3; count++) {
//		hello_world();
//	}
//}
//int main() {
//	three_hellos();
//	return 0;
//}


//字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。

// 方法一：
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char s[128] = { 0 }, s1[128] = { 0 };
//    int i, j = 0;
//    printf("请输入字符串：");
//    gets_s(s);
//    // 从字符串最后一位往前循环
//    for (i = strlen(s) - 1; i >= 0; i--)
//    {
//        // 依次存入新的字符串数组
//        s1[j++] = s[i];
//    }
//  //  puts(s);
//    puts(s1);
//    return 0;
//}


//  方法二
//#include <stdio.h>
//void reverse(char* s) {
//	int len = 0;
//	char* p = s;
//	// 获取字符串的长度
//	while (*p != 0) {
//		len++;
//		p++;
//	}
//	int i = 0;
//	char c;
//	// i 只需到字符串一半 
//	while (i <= len / 2 - 1) {
//		// 实现字符串第一位和相对应最后一位交换
//		c = *(s + i);
//		*(s + i) = *(s + len - 1 - i);
//		*(s + len - 1 - i) = c;
//		i++;
//	}
//}
//int main() {
//	char s[] = "www.runoob.com";
//	printf("%s => ", s);
//	reverse(s);
//	printf("%s\n", s);
//	return 0;
//}

// 求100之内的素数。
//#include <stdio.h>
//#include <math.h>
//
//int main() {
//	int i, j, k, count = 0;
//	// 除去0，1，从2开始
//	for (i = 2; i <= 100; i++) {
//		k = (int)sqrt(i);
//		for (j = 2; j <= k; j++) {
//			// 若存在可整除的数 则不是素数
//			if (i % j == 0)
//				break;
//			}
//		if (j > k) {
//			printf("%d ", i);
//			// n为
//			count++;
//			//  计数器用来换行
//			if (count % 5 == 0) {
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}



//题目：对10个数进行排序。
//
//程序分析：可以利用选择法，即从后9个比较过程中，
// 选择一个最小的与第一个元素交换，
//下次类推，即用第二个元素与后8个进行比较，并进行交换

//#include <stdio.h>
//#define N 10
//
//int main() {
//	int i, j, a[N], temp;
//	printf("请输入10个数字：\n");
//	for (i = 0; i < N; i++)
//		// 将输入的10个数字存入数组中
//		scanf("%d", &a[i]);
//	for (i = 0; i < N - 1; i++) {
//		int min = i;
//		for (j = i + 1; j < N; j++) {
//			if (a[min] > a[j])
//				min = j;
//			}
//		// 保证最小值在相应数组前面
//		if (min != i) {
//			temp = a[min];
//			a[min] = a[i];
//			a[i] = temp;
//		}
//	}
//	printf("排序结果是：\n");
//	for (i = 0; i < N; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}


//题目：求一个3*3矩阵对角线元素之和

//
//#include <stdio.h>
//#define N 3
//int main() {
//	int i, j, a[N][N], sum = 0;
//	printf("请输入矩阵3*3：\n");
//	//双重for循环控制输入二维数组
//	for (i = 0; i < N; i++)
//		for (j = 0; j < N; j++)
//			scanf("%d", &a[i][j]);
//	// 累加对角线元素和
//	for (i = 0; i < N; i++)
//		sum += a[i][i];
//	printf("对角线之和：%d\n", sum);
//	return 0;
//}



//题目：有一个已经排好序的数组。
// 现输入一个数，要求按原来的规律将它插入数组中。
//
//程序分析：首先判断此数是否大于最后一个数, 
// 然后再考虑插入中间的数的情况, 插入后此元素之后的数, 依次后移一个位置。


//#include <stdio.h>
//
//int main() {
//	int a[11] = { 1,4,6,9,13,16,19,28,40,100 };
//	int temp1, temp2, number, end, i, j;
//	printf("原始数组是: \n");
//	for (i = 0; i < 10; i++)
//		printf("%4d", a[i]);
//	printf("\n新插入一个新的数: ");
//	scanf("%d", &number);
//	//将原始数组最后一位赋给end
//	end = a[9];
//	//判断新插入数字与数组最后一个数字大小
//	// 若新插入数字大于最后一个  则直接插入数组最后
//	if (number > end)
//		a[10] = number;
//	else {
//		for (i = 0; i < 10; i++) {
//			//从头开始循环，若找到比新插入数字大的数字
//			//则将该位置给新数字，原始数字都往后移一位
//			if (a[i] > number) {
//				temp1 = a[i];
//				a[i] = number;
//				// 使后面数组数字都往后移一位
//				for (j = i + 1; j < 11; j++) {
//					temp2 = a[j];
//					a[j] = temp1;
//					temp1 = temp2;
//				}
//				break;
//			}
//		}
//	}
//	//循环打印出插入后的数组元素
//	for (i = 0; i < 11; i++)
//		printf("%4d", a[i]);
//	printf("\n");
//	return 0;
//}



//题目：将一个数组逆序输出。
//
//程序分析：用第一个与最后一个交换。

//#include <stdio.h>
//#define N 10
//int main() {
//	int a[N] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i, temp;
//	printf("原始数组是：");
//	// 打印原始数组
//	for (i = 0; i < N; i++)
//		printf("%d ", a[i]);
//	//首尾对应位置元素交换
//	for (i = 0; i < N/2; i++) {
//		temp = a[i];
//		a[i] = a[N - 1 - i];
//		a[N - 1 - i] = temp;
//	}
//	printf("\n排序后的数组是：");
//    //  打印排序后的数组
//	for (i = 0; i < N; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}



//  static静态变量使用
// 修饰局部变量：局部变量生命周期变长
// 修饰全局变量：改变变量的作用域，静态全局变量只能在自己源文件内部使用
//  修饰函数：改变函数的链接属性（通俗说，改变函数的作用域，但不准确）

//#include <stdio.h>
//void fun(void) {
//	int i = 0;
//	static int n_i = 0;   // 事实上此赋值语句从来没有执行过
//	printf("i = %d\n", i);
//	printf("n_i = %d\n", n_i);
//	i++;
//	n_i++;
//}
//int main() {
//	for (int i = 0; i < 3; i++)
//		fun();
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	int i, num;
//	num = 2;
//	for (i = 0; i < 3; i++) {
//		printf("num变量为%d \n", num);
//		num++;
//		{
//			static int num = 1;
//			printf("内置模块num变量为%d \n", num);
//			num++;
//		}
//	}
//	return 0;
//}


// auto 定义变量用法

//#include <stdio.h>
//
//int main() {
//	int i, num;
//	num = 2;
//	for (i = 0; i < 3; i++) {
//		printf("num变量为%d \n", num);
//		num++;
//		{
//			auto  num = 1;
//			printf("内置模块num变量为%d \n", num);
//			num++;
//		}
//	}
//	return 0;
//}



//  调用外部函数

//#include <stdio.h>
//int a, b, c; //  a b c为全局变量
//void add() {
//	int a;  // a为局部变量
//	a = 3;
//	c = a + b;
//}
//int main() {
//	a = b = 4;
//	add();
//	printf("c的值为：%d\n", c);
//	return 0;
//}


//  register定义用法
/// register ---  寄存器关键字

//#include <stdio.h>
//int main() {
//	register int i;
//	int temp = 0;
//	// 求1-100累加的和
//	for (i = 1; i <= 100; i++) 
//		temp = temp + i;
//	printf("总和为：%d\n", temp);
//	
//	return 0;
//}


// 宏 #define  

//#include <stdio.h>
//#define TRUE 1
//#define FALSE 0
//#define SQ(x) (x)*(x)
//int main() {
//	int num;
//	int again = 1;
//	printf("如果值小于50程序将终止\n");
//	while (again != 0) {
//		printf("\n请输入数字: ");
//		scanf("%d", &num);
//		printf("该数的平方和为%d \n", SQ(num));
//		if (num >= 50)
//			again = TRUE;
//		else
//			again = FALSE;
//	}
//	return 0;
//}

//#include <stdio.h>
//#define exchange(a,b) {int t;t=a;a=b;b=t;}
//int main() {
//	int x = 10;
//	int y = 20;
//	printf("x = %d,y = %d\n", x, y);
//	exchange(x, y);
//	printf("x = %d,y = %d\n", x, y);
//	return 0;
//}

//#include <stdio.h>
//#define LAG >
//#define SMA <
//#define EQ ==
//int main() {
//	int i, j;
//	printf("请输入两个数字：");
//	scanf("%d%d", &i, &j);
//	if (i LAG j)
//		printf("%d大于%d\n", i, j);
//	else if (i EQ j)
//		printf("%d等于%d\n", i, j);
//	else if (i SMA j)
//		printf("%d小于%d\n", i, j);
//	else
//		printf("输入有误\n");
//	return 0;
//}

//  #if #ifdef和#ifndef的综合应用
//

//#ifdef 标识符
//程序段1
//#else
//程序段2
//#endif
// 
//当标识符已经被定义过(一般是用#define命令定义)，
//则对程序段1进行编译，否则编译程序段2。


//#ifndef 标识符
//程序段1
//#else
//程序段2
//#endif
// 
//若标识符未被定义则编译程序段1，否则编译程序段2。这种形
//式与第一种形式的作用相反。


//#if 表达式
//程序段1
//#else
//程序段2
//#endif
/*
当指定的表达式值为真（非零）时就编译程序段1，否则编译程序段2。
可以事先给定一定条件，使程序在不同的条件下执行不同的功能*/

#include <stdio.h>
#define Max
#define MaxMum(x,y) (x>y)?x:y
#define MinMum(x,y) (x>y)?y:x
int main() {
	int a = 10, b = 20;
#ifdef Max
	printf("更大的数字是%d\n", MaxMum(a, b));
#else
	printf("更小的数字是%d\n", MinMun(a, b));
#endif

#ifndef Min
	printf("更小的数字是：%d\n",MinMum(a,b));
#else
	printf("更大的数字是：%d\n",MaxMum(a,b);
#endif

#undef Max
#ifdef Max
	printf("更大的数字是：%d\n", MaxMum(a, b);
#else
	printf("更小的数字是：%d\n", MinMum(a, b));
#endif

#define Min
#ifndef Min
	printf("更小的数字是：%d\n", MinMum(a, b));
#else
	printf("更大的数字是：%d\n", MaxMum(a, b));
#endif
	return 0;
}
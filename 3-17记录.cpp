#define _CRT_SECURE_NO_WARNINGS


//  按位与 &
//  与：全真为真
//  0&0 = 0; 0&1 = 0; 1&0 = 0; 1&1 = 1;

//
//#include <stdio.h>
//int main() {
//	int a, b;
//	a = 077;
//	b = a & 3;
//	printf("a & b为%d \n", b);
//	b &= 7;
//	printf("a & b为%d \n", b);
//	return 0;
//}


// 按位或 |
//  或：有真则真
// 0|0 = 0; 0|1 = 1; 1|0 = 1; 1|1 = 1;

//#include <stdio.h>
//int main() {
//	int a, b;
//	a = 077;
//	b = a | 3;
//	printf("b的值为%d \n", b);
//	b |= 7;
//	printf("b的值为%d \n", b);
//	return 0;
//}

// 按位异或^
// 异或：相同为0，不同为1
// 0^0 = 0; 0^1 = 1;1^0 = 1; 1^1 = 0;

//#include <stdio.h>
//int main() {
//	int a, b;
//	a = 77;
//	b = a ^ 3;
//	printf("b的值为%d \n", b);
//	b ^= 7;
//	printf("b的值为%d \n", b);
//	return 0;
//}


//  按位取反 ~
// ~0 = -1；  ~1 = -2；

//#include <stdio.h>
//int main() {
//	int a, b;
//	a = 234;
//	b = ~a;
//	printf("a的按位取反值为（16进制）%d \n", b);
//	a = ~a;
//	printf("a的按位取反值为（16进制）%x \n", a);
//	return 0;
//}


//题目：打印出杨辉三角形（要求打印出10行）。

//
//#include <stdio.h>
//
//int main() {
//	int i, j;
//	int a[10][10];
//	//  使第一列和对角线都为1
//	for (i = 0; i < 10; i++) {
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//
//	for (i = 2; i < 10; i++) {
//		for (j = 1; j < i; j++) {
//			// 使中间数为该数上一行左相邻两数的和 如：2 = 1 +1； 10 = 4+6；
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//		}
//	}
//	//  循环打印出杨辉三角
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <= i; j++)
//			printf("%5d", a[i][j]);
//		printf("\n");
//	}
//	return 0;
//}

//
//题目：输入3个数a, b, c，按大小顺序输出。
//
//程序分析：利用指针方法。
//
//#include <stdio.h>
//void swap(int* s1, int* s2) {
//	int temp;
//	temp = *s1;
//	*s1 = *s2;
//	*s2 = temp;
//}
//int main() {
//	int a, b, c;
//	int* p1, * p2, * p3;
//	printf("输入三个数：");
//	scanf("%d%d%d", &a, &b, &c);
//	p1 = &a;
//	p2 = &b;
//	p3 = &c;
//	// 是最小值在a中
//	if (a > b)
//		swap(p1, p2);
//	if (a > c)
//		swap(p1, p3);
//	//  使最大值在c中
//	if (b > c)
//		swap(p2, p3);
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}


//题目：输入数组，最大的与第一个元素交换，
//最小的与最后一个元素交换，输出数组

//#include <stdio.h>
//#include <stdlib.h>
//void fun(int* s, int n) {
//	int i;
//	int max = s[0];
//	int a = 0;
//	// 查找数组最大值
//	for (i = 0; i < n; i++) {
//		if (s[i] > max) {
//			max = s[i];
//			a = i;
//		}
//	}
//	// 交换，将最大值存入数组开头
//	s[a] = s[0];
//	s[0] = max;
//	int j;
//	int min = s[n - 1];
//	int b = n - 1;
//	// 查找数组最小值
//	for (j = 0; j < n; j++) {
//		if (s[j] < min) {
//			min = s[j];
//			b = j;
//		}
//	}
//	// 交换，将最小值存入数组尾部
//	s[b] = s[n - 1];
//	s[n - 1] = min;
//}
//void printf_s(int* s, int n) {
//	int i;
//	//  打印数组元素
//	for (i = 0; i < n; i++)
//		printf("%d ", s[i]);
//	printf("\n");
//}
//int main() {
//	int s[20];
//	int i, n;
//	printf("设置数组长度<20:");
//	scanf("%d", &n);
//	printf("输入%d个元素: ",n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &s[i]);
//	fun(s, n);
//	printf_s(s, n);
//	return 0;
//}

//题目：有 n个整数，使其前面各数顺序向后移 m 个位置，
//最后m个数变成最前面的 m 个数。

//
//#include <stdio.h>
//#define N 100
//void reverse(int a[], int low, int high) {
//	int i = low;
//	int j = high;
//	//  实现数组逆序
//	while (i < j) {
//		if (i < j) {
//			int temp;
//			temp = a[i];
//			a[i] = a[j];
//			a[j] = temp;
//		}
//		i++;
//		j--;
//	}
//}
//int main() {
//	int n, m, a[N];
//	printf("要输入几位数？");
//	scanf("%d", &n);
//	printf("请输入%d个数字: ", n);
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	printf("要移动的位数：");
//	scanf("%d", &m);
//	// 使整个数组逆序
//	reverse(a, 0, n - 1);
//	// 逆序前半部分
//	reverse(a, 0, n-m-1);
//	// 逆序后半部分
//	reverse(a, n-m, n - 1);
//	for (int i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//题目：有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），
//凡报到3的人退出圈子，问最后留下的是原来第几号的那位

//#include <stdio.h>
//
//int main() {
//	int num[50], n, m, i, j, k, loop, * p;
//	printf("请输入这一圈的人数：");
//	scanf("%d", &n);
//	p = num;
//	// 给圈内人编号
//	for (j = 0; j < n; j++) {
//		*(p + j) = j + 1;
//	}
//	i = 0; // i为计数器，即让指针后移
//	m = 0; // m记录退出圈子的人数
//	k = 0; // k为报数1,2,3
//	while (m < n - 1) {
//		// 若编号不为0，则就报数加1
//		if (*(p + i) != 0) {
//			k++;
//		}
//		if (k == 3) {
//			k = 0; // 当报数为3时，报数清零，下一任从1开始重新报数
//			*(p + i) = 0; // 将报数为3的人编号设为0
//			m++; //  退出一人就加1
//		}
//		i++;  //  指针后移
//		if (i == n) {
//			i = 0; //  当到了队尾，使指针重新指向对头
//		}
//	}
//	printf("现在剩下的人是：");
//	for (loop = 0; loop < n; loop++) {
//		if (num[loop] != 0) {
//			printf("%d号\n", num[loop]);
//		}
//	}
//	return 0;
//}

// 自定义函数，求字符串的长度 

//#include <stdio.h>
//#include <string.h>
//int length(char* s) {
//	int i = 0;
//	while (*s != '\0') {
//		i++;
//		s++;
//	}
//	return i;
//}
//int main() {
//	int len;
//	char str[20];
//	printf("请输入字符串:");
//	scanf("%s", str);
//	len = length(str);
//	printf("字符串的长度是：%d\n", len);
//	return 0;
//}


// input()和 output()函数的输入输出
//
//#include <stdio.h>
//#include <stdlib.h>
// struct Stu{
//	char name[20];
//	char sex[5];
//	int age;
//};
//void input(Stu* stu) {
//	int i;
//	for (i = 0; i < 5; i++)
//		scanf("%s%s%d", stu[i].name, stu[i].sex, &(stu[i].age));
//}
//void output(Stu* stu) {
//	int i;
//	for (i = 0; i < 5; i++)
//		printf("%s %s %d\n", stu[i].name, stu[i].sex, stu[i].age);
//}
//int main() {
//	Stu stu[5];
//	printf("请输入5个学生的信息：\n");
//	input(stu);
//	printf("5个学生的信息如下：\n");
//	output(stu);
//	return 0;
//}



//题目：输入一个整数，并将其反转后输出。

//  方法一：
//#include <stdio.h>
//
//int main() {
//	int n, a = 0, b;
//	printf("输入一个整数：");
//	scanf("%d", &n);
//	while (n != 0) {
//		b = n % 10;  //  分解整数
//		a = a * 10 + b; //  分解的数反向按倍数相加
//		n = n / 10;  
//	}
//	printf("反转后的整数：%d", a);
//	return 0;
//}

// 方法二：
//#include <stdio.h>
//void reverse(int i) {
//	while (i) {
//		// 将分解的直接一位一位输出
//		int j = i % 10;
//		printf("%d", j);
//		i = i / 10;
//	}
//}
//int main() {
//	int i;
//	printf("请输入一个整数：");
//	scanf("%d", &i);
//	printf("反转后的整数是：");
//	reverse(i);
//	return 0;
//}


/*题目：编写一个函数，输入n为偶数时，调用函数求1 / 2 + 1 / 4 + ... + 1 / n,
        当输入n为奇数时，调用函数1 / 1 + 1 / 3 + ... + 1 / n(利用指针函数)*/
//#include <stdio.h>
//#include <stdlib.h>
//double evenumber(int n) {
//	double s = 0, a = 0;
//	int i;
//	for (i = 2; i <= n; i+=2) {
//		a = (double)1 / i;
//		s = s + a;
//	}
//	return s;
//}
//double oddnumber(int n) {
//	double s = 0,a = 0;
//	int i;
//	for (i = 1; i <= n; i += 2) {
//		a = (double)1 / i;
//		s = s + a;
//	}
//	return s;
//}
//int main() {
//	int n;
//	double r;
//	double (*p)(int);  //  定义指针
//	printf("请输入一个数字：");
//	scanf("%d", &n);
//	if (n % 2 == 0)
//		p = evenumber; // 指针指向函数
//	else
//		p = oddnumber;
//	r = (*p)(n);   //  指针解引用函数值
//	printf("%lf\n", r);
//	return 0;
//}

//题目：找到年龄最大的人，并输出

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Man {
//    char name[20];
//    int age;
//};
//
//int main() {
//    Man person[3] = { "小王",22,"小磊",34,"小号",12 };
//    struct Man* q, * p;
//    int i, m = 0, k = 0;
//    q = p = person;
//    // 循环找年龄最大值
//    for (i = 0; i < 3; i++) {
//        if (m < p->age) {
//            m = p->age;
//            q = p;
//            k = i;
//        }
//        p++;
//    }
//    for (; k < 3; k++) {
//        if (person[k].age >= m) {
//            printf("%s %d\n", person[k].name, person[k].age);
//        }
//    }
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
////  自定义交换函数
//void swap(char* str1, char* str2) {
//    char temp[20];
//    strcpy(temp, str1);
//    strcpy(str1, str2);
//    strcpy(str2, temp);
//}
//int main() {
//    char str1[20], str2[20], str3[20];
//    printf("请输入三个字符串：\n");
//    //stdin是C语言中标准输入流，一般用于获取键盘输入到缓冲区里的东西。
//    fgets(str1, (sizeof str1 / sizeof str1[0]), stdin);
//    fgets(str2, (sizeof str2 / sizeof str2[0]), stdin);
//    fgets(str3, (sizeof str3 / sizeof str3[0]), stdin);
//    // 比较1和2，将较小存入1
//    if (strcmp(str1, str2) > 0)
//        swap(str1, str2);
//    // 比较2和3，将较小存入2，此时3中为最终最大
//    if (strcmp(str2, str3) > 0)
//        swap(str2, str3);
//    // 在比较1和2，将最小存入1
//    if (strcmp(str1, str2) > 0)
//        swap(str1, str2);
//    printf("排序后的结果为：\n");
//    printf("%s\n%s\n%s\n", str1, str2, str3);
//    return 0;
//}

//
//题目：海滩上有一堆桃子，五只猴子来分。
//第一只猴子把这堆桃子平均分为五份，多了一个，这只 猴子把多的一个扔入海中，拿走了一份。
//第二只猴子把剩下的桃子又平均分成五份，又多了 一个，它同样把多的一个扔入海中
//，拿走了一份，第三、第四、第五只猴子都是这样做的，
//问海滩上原来最少有多少个桃子？



/*假设海滩上原来有x个桃子，则
第一只猴子分完桃子之后剩下的桃子x1 = x - 1 - (x - 1) / 5 = (4 * (x - 1)) / 5
第二只猴子分完桃子之后剩下的桃子x2 = x1 - 1 - (x1 - 1) / 5 = (4 * (x1 - 1)) / 5
第三只猴子分完桃子之后剩下的桃子x3 = x2 - 1 - (x2 - 1) / 5 = (4 * (x2 - 1)) / 5
第四只猴子分完桃子之后剩下的桃子x4 = x3 - 1 - (x3 - 1) / 5 = (4 * (x3 - 1)) / 5
第五只猴子分完桃子之后剩下的桃子x5 = x4 - 1 - (x4 - 1) / 5 = (4 * (x4 - 1)) / 5
假设第五只猴子分得的桃子为1，五份则为5，即第5只猴子分完桃子后剩下的桃子为4
4 / 4 * 4 + 1 = 6  即6为第五只猴子开始分之前的桃子数，但是6 % 4 != 0, 即不满足当第四只猴子分完桃子后剩余桃子个数。
所以第五只猴子分得的桃子数不是1，那么从2开始推，直到满足每次所有条件为止*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, m = 1, x = 1;
    while (1)
    {
        m = x;
        for (i = 0; i < 5; i++)
        {
            if ((m - 1) % 5 == 0)
                m = (m - 1) / 5 * 4;
            else
                break;
        }
        if (i == 5 && m > 0)
            break;
        x++;
    }
    printf("%d\n", x);
    return 0;
}
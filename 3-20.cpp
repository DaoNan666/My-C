#define _CRT_SECURE_NO_WARNINGS


//  字符串反转
// 方法一： 递归实现
//#include <stdio.h>
// 
//void reverse() {
//	char c;
//	scanf("%c", &c);
//	if (c != '\n') {
//		reverse();
//		printf("%c", c);
//	}
//}
//int main() {
//	printf("请输入一个字符串：\n");
//	reverse();
//	return 0;
//}

//  方法二：
//#include <stdio.h>
//#include <string.h>
//
//char* reverse(char* str) {
//	int i = 0;
//	int j = strlen(str) - 1;
//	char temp;
//	while (i < j) {
//		temp = *(str + i);
//		*(str + i) = *(str + j);
//		*(str + j) = temp;
//		i++;
//		j--;
//	}
//	return str;
//}
//int main() {
//	char str[20];
//	printf("请输入一个字符串：");
//	scanf("%s", str);
//	printf("反转后的字符串是：%s",reverse(str));
//	return 0;
//}

//  计算数组元素平均值

//#include <stdio.h>
//
//int main() {
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sum, i;
//	float avg;
//	sum = avg = 0;
//	for (i = 0; i < 10; i++) {
//		sum = sum + a[i];
//	}
//	avg = (float)sum / i;
//	printf("平均值是：%f", avg);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int n, i;
//	float num[100], sum = 0.0, avg;
//	printf("请输入要输入的元素个数：");
//	scanf("%d", &n);
//	//  控制在1-100之间求
//	while (n > 100 || n <= 0) {
//		printf("元素超出范围\n");
//		printf("请再次输入：");
//		scanf("%d", &n);
//	}
//	for (i = 0; i < n; i++) {
//		printf("第%d个要输入得数字是： ", i + 1);
//		scanf("%f", &num[i]);
//		sum = sum + num[i];
//	}
//	avg = sum / n;
//	printf("平均值是：%.2f", avg);
//
//	return 0;
//}

//  输出数组

//#include <stdio.h>
//
//int main() {
//	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("%d ", a[i]);
//
//	}
//	return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i;
//	//  注意i的范围
//	for (i = 9; i >= 0; i--) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//  计算数组元素的和

//#include <stdio.h>
//
//int main() {
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i, sum = 0;
//	for (i = 0; i < 10; i++) {
//		sum = sum + a[i];
//	}
//	printf("数组元素的和是：%d\n", sum);
//	return 0;
//}

//  查找数组中最大的元素值

//#include <stdio.h>
//
//int main() {
//	int a[10] = { 1,2,3,4,55,6,7,8,9,0 };
//	int i, temp;
//	int max = a[0];
//	for (i = 0; i < 10; i++) {
//		if (a[i] > max) {
//			temp = max;
//			max = a[i];
//			a[i] = temp;
//		}
//	}
//	printf("最大元素是：%d", max);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int n, i;
//	int a[10];
//	printf("请输入要输入元素的个数：");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		printf("第%d个要输入的数字是：",i+1);
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < n; i++) {
//		if (a[0] < a[i]) {
//			a[0] = a[i];
//		}
//	}
//	printf("最大值是：%d", a[0]);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int a[10] = { 1,2,3,4,5,-6,7,8,9,0 };
//	int i;
//	int min = a[0];
//	for (i = 0; i < 10; i++) {
//		if (a[0] > a[i]) {
//			a[0] = a[i];
//		}
//	}
//	printf("最小值是：%d\n", a[0]);
//	return 0;
//}

//   数组的拆分与合并

//#include <stdio.h>
//
//int main() {
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i;
//	int str1[10], str2[10];
//	int n = 0, m = 0;
//	for (i = 0; i < 10; i++) {
//		if (a[i] % 2 == 0) {
//			str1[n] = a[i];
//			n++;
//		}
//		else {
//			str2[m] = a[i];
//			m++;
//		}
//	}
//	printf("偶数组是：");
//	for (i = 0; i < n; i++) {
//		printf("%d ", str1[i]);
//	}
//	printf("\n");
//	printf("奇数组是：");
//	for (i = 0; i < m; i++) {
//		printf("%d ", str2[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int str1[5] = { 1,3,5,7,9 };
//	int str2[5] = { 2,4,6,8,0 };
//	int a[10];
//	int i = 0, n = 0;
//	for (i = 0; i < 5; i++) {
//		a[n] = str1[i];
//		n++;
//	}
//	for (i = 0; i < 5; i++) {
//		a[n] = str2[i];
//		n++;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//  数组拷贝
//
//#include <stdio.h>
//
//int main() {
//	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int b[10];
//	int i,n=0;
//	for (i = 0; i < 10; i++) {
//		b[i] = a[i];
//		
//	}
//	for (i = 0; i < 10; i++) {
//	//	printf("%d \n", a[i]);
//		printf("%d ", b[i]);
//	}
//	return 0;
//}

//  矩阵相加
//
//#include <stdio.h>
//
//int main() {
//	int a[10][10], b[10][10], sum[20][20];
//	int i, j;
//	int r, c;
//	printf("请输入行数：");
//	scanf("%d", &r);
//	printf("请输入列数：");
//	scanf("%d", &c);
//	printf("第一个矩阵元素：\n");
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			printf("请输入元素 a%d%d: ", i + 1, j + 1);
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("第二个矩阵元素：\n");
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			printf("请输入元素 b%d%d: ", i + 1, j + 1);
//			scanf("%d", &b[i][j]);
//		}
//	}
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			sum[i][j] = a[i][j] + b[i][j];
//		}
//	}
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			printf("%d ", sum[i][j]);
//			if (j == c - 1) {
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//  矩阵转换
//
//#include <stdio.h>
//
//int main() {
//	int a[10][10], b[10][10];
//	int r, c;
//	int i, j;
//	printf("请输入矩阵的行数和列数：");
//	scanf("%d%d", &r, &c);
//
//	printf("请输入矩阵元素\n");
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			printf("矩阵元素 a%d%d: ", i + 1, j + 1);
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("输入的矩阵是：\n");
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			printf("%d ", a[i][j]);
//			if (j == c - 1) {
//				printf("\n");
//			}
//		}
//	}
//
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++) {
//			b[j][i] = a[i][j];
//		}
//	}
//	printf("转换后的矩阵是：\n");
//	for (i = 0; i < c; i++) {
//		for (j = 0; j < r; j++) {
//			printf("%d ", b[i][j]);
//			if (j == r - 1) {
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}

//  使用指针访问数组元素

//#include <stdio.h>
//
//int main() {
//	int data[5], i;
//	printf("请输入数组元素：\n");
//	for (i = 0; i < 5; i++)
//		scanf("%d", &data[i]);
//	printf("刚才输入的元素是：\n");
//	for (i = 0; i < 5; i++) {
//		printf("%d \n", *(data+i));
//	}
//	return 0;
//}

//  通过引用循环替换数值(指针接收地址）

//#include <stdio.h>
//void swap(int* a, int* b, int* c) {
//	int temp;
//	temp = *b;
//	*b = *a;
//	*a = *c;
//	*c = temp;
//}
//int main() {
//	int a, b, c;
//	printf("请输入三个整数值：\n");
//	scanf("%d%d%d", &a, &b, &c);
//	printf("交换前：\n");
//	printf("%d   %d  %d\n", a, b, c);
//	swap(&a, &b, &c);
//	printf("交换后：\n");
//	printf("%d   %d  %d\n", a, b, c);
//	return 0;
//}

// 判断最大值

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int i, n;
//	float* data;
//	printf("请输入要输入元素个数：");
//	scanf("%d", &n);
//
//	data = (float*)calloc(n, sizeof(float));
//
//	if (data == NULL) {
//		printf("内存空间不够\n");
//		exit(0);
//	}
//	for (i = 0; i < n; i++) {
//		printf("要输入的第%d个元素是：", i + 1);
//		scanf("%f", data + i);
//	}
//	for (i = 1; i < n; i++) {
//		if (*data < *(data + i))
//			*data = *(data + i);
//	}
//	printf("最大元素是：%.2f\n", *data);
//
//	free(data);
//	data = NULL;
//	return 0;
//}

//  删除字符串中的特殊字符

//#include <stdio.h>
//
//int main() {
//	char line[150];
//	int i, j;
//	printf("请输入一个字符串：");
//	fgets(line, (sizeof line / sizeof line[0]), stdin);
//
//	for (i = 0; line[i] != '\0'; i++) {
//		while (!((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z') || line[i] == '\0')) {
//			for (j = i; line[j] != '\0'; j++) {
//				line[j] = line[j + 1];
//			}
//			line[j] = '\0';
//		}
//	}
//	printf("输出：");
//	puts(line);
//	return 0;
//}

// 连接字符串

//#include <stdio.h>
//
//int main() {
//	char s1[100], s2[100], i, j;
//	printf("请输入第一个字符串：");
//	scanf("%s", s1);
//	printf("请输入第二个字符串：");
//	scanf("%s", s2);
//	//  计算s1长度
//	for (i = 0; s1[i] != '\0';i++);
//	for (j = 0; s2[j] != '\0'; j++,i++) {
//		s1[i] = s2[j];
//	}
//	s1[i] = '\0';
//
//	printf("连接后的字符串是：%s", s1);
//	return 0;
//}
// 方法二：
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char s1[100], s2[100];
//
//    printf("输入第一个字符串: ");
//    scanf("%s", s1);
//
//    printf("输入第二个字符串: ");
//    scanf("%s", s2);
//
//    int len1 = strlen(s1);
//    int len2 = strlen(s2);
//    //printf("%d %d", len1, len2);
//    for (int i = 0; i <= len2; i++)
//    {
//        s1[i + len1] = s2[i];
//    }
//   
//    printf("%s\n", s1);
//    // system("pause");
//    return 0;
//}


//   计算字符串长度

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char s[100];
//	int len;
//	printf("请输入字符串：");
//	scanf("%s", s);
//	len = strlen(s);
//	printf("字符串的长度是：%d", len);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char s[100], i;
//	printf("请输入字符串：");
//	scanf("%s", s);
//	for (i = 0; s[i] != '\0'; i++);
//	printf("字符串的长度是：%d", i);
//	return 0;
//}

//  查找字符在字符串中出现的次数

//#include <stdio.h>
//
//int main() {
//	char str[100], ch;
//	int i, n = 0;
//
//	printf("请输入一个字符串：");
//	fgets(str, (sizeof str / sizeof str[0]), stdin);
//
//	printf("请输入要查找的字符：");
//	scanf("%c", &ch);
//
//	for (i = 0; str[i] != '\0'; i++) {
//		if (ch == str[i])
//			n++;
//	}
//	printf("字符%c出现的次数是：%d",ch, n);
//	return 0;
//}

//  字符串中各种字符的计算

//#include <stdio.h>
//
//int main() {
//	char line[200];
//	int i, v = 0, c = 0, digit = 0, space = 0;
//	printf("请输入一个字符串：");
//	//scanf("%s", line);  //  有bug，遇到空格就停  改进：将%s改为%[^\n]
//	gets_s(line);
//	for (i = 0; line[i] != '\0'; i++) {
//		if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
//			line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
//			line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
//			line[i] == 'U') {
//			v++;
//		}
//		else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
//			c++;
//		}
//		else if (line[i] >= '0' && line[i] <= '9') {
//			digit++;
//		}
//		else if (line[i] == ' ') {
//			space++;
//		}
//	}
//	printf("元音的个数是：%d\n辅音的个数是：%d\n数字的个数是：%d\n空格的字数是：%d\n", v,c,digit,space);
//	return 0;
//}


//  字符串复制

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char str1[40];
//	char str2[100];
//
////	memset(str2, '\0', sizeof(str2)); //  先将str2置空
//	strcpy(str1, "hahahahahahah");
//	strcpy(str2, str1);
//	printf("最终字符串是：%s\n", str2);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	char s1[100], s2[100], i;
//	printf("请输入字符串s1: ");
//	scanf("%s", s1);
//
//	for (i = 0; s1[i] != '\0'; i++) {
//		s2[i] = s1[i];
//	}
//	s2[i] = '\0';
//	printf("字符串s2是：%s", s2);
//	return 0;
//}

//  字符串排序

//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	int i, j;
//	char str[10][50], temp[50];
//	printf("请输入5个要比较的字符串：\n");
//
//	for (i = 0; i < 5; i++) {
//		scanf("%s[^\n]", str[i]);
//	}
//	for (i = 0; i < 5; i++) {
//		for (j = i + 1; j < 5; j++) {
//			if (strcmp(str[i], str[j]) > 0) {
//				strcpy(temp, str[i]);
//				strcpy(str[i], str[j]);
//				strcpy(str[j], temp);
//			}
//		}
//	}
//	printf("排序后：\n");
//	for (i = 0; i < 5; i++) {
//		puts(str[i]);
//	}
//	return 0;
//}

//  结构体使用
//
//#include <stdio.h>
//
//struct Stu {
//	char name[10];
//	int ID;
//	float score;
//};
//
//int main() {
//	Stu stu = {  };
//	printf("请输入学生信息：\n");
//	printf("姓名：");
//	scanf("%s", stu.name);
//	printf("学号：");
//	scanf("%d", &stu.ID);
//	printf("成绩: ");
//	scanf("%f", &stu.score);
//
//	printf("信息显示：\n");
//	printf("姓名：");
//	puts(stu.name);
//	printf("学号：%d\n", stu.ID);
//	printf("成绩：%.1f\n", stu.score);
//	return 0;
//}


//  使用结构体使两个复数相加

//#include <stdio.h>
//
//typedef struct num {
//	float real;
//	float imag;
//}num;
//
//num  add(num n1, num n2) {
//	num temp;
//	temp.real = n1.real + n2.real;
//	temp.imag = n1.imag + n2.imag;
//	return (temp);
//}
//int main() {
//	num n1,n2,temp;
//	printf("请输入第一个复数：");
//	printf("实部是：虚部是：");
//	scanf("%f%f", &n1.real, &n1.imag);
//
//	printf("请输入第二个复数：");
//	printf("实部是：虚部是：");
//	scanf("%f%f", &n2.real, &n2.imag);
//
//	temp = add(n1, n2);
//
//	printf("sum = %.1f + %.1fi", temp.real, temp.imag);
//
//	return 0;
//}

//  将字符串写入文件

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	char s[100];
//	FILE* fp;
//	fp = fopen("3-20-1.txt", "w");
//	if (fp == NULL) {
//		printf("出错了");
//		exit(1);
//	}
//	printf("请输入字符串：");
//	fgets(s, (sizeof s / sizeof s[0]), stdin);
//
//	fprintf(fp, "%s", s);
//	fclose(fp);
//	return 0;
//}

//  读取文件中一行

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	char c[100];
//	FILE* fp;
//	if ((fp = fopen("3-20-1.txt", "r")) == NULL) {
//		printf("出错了");
//		exit(1);
//	}
//	//  读取文本，遇到换行结束
//	fscanf(fp, "%[^\n]", c);
//
//	printf("读取内容：%s", c);
//
//	fclose(fp);
//	return 0;
//}

 //  读取多行

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	FILE* fp;
//	fp = fopen("3-20-1.txt", "r");
//	char c[200];
//	
//	while (fgets(c, sizeof(c),fp) != NULL) {
//		printf("%s", c);
//	}
//
//	fclose(fp);
//	return 0;
//}

//  输出当前文件执行代码
//   __FILE__为当前执行文件常量
//#include <stdio.h>
//
//int main() {
//	FILE* fp;
//	char c;
//	fp = fopen(__FILE__, "r");
//	do {
//		c = getc(fp);
//		putchar(c);
//	} while (c != EOF);
//	fclose(fp);
//	return 0;
//}

// 题目 ：A、B、C、D、E 五人在某天夜里合伙去捕鱼，到第二天凌晨时都疲惫不堪，于是各自找地方睡觉。
//
//       日上三杆，A 第一个醒来，他将鱼分为五份，把多余的一条鱼扔掉，拿走自己的一份。
//
//       B 第二个醒来，也将鱼分为五份，把多余的一条鱼扔掉拿走自己的一份。 。
//
//       C、D、E依次醒来，也按同样的方法拿鱼。
//
//       问他们台伙至少捕了多少条鱼 ? 以及每个人醒来时见到了多少鱼

//#include <stdio.h>
//
//int main() {
//	int n, x, j, k, l, m;
//	//  n 为至少捕鱼数
//	for (n = 5;; n++) {
//		j = 4 * (n - 1) / 5;  // j为第二个人见到的鱼数
//		k = 4 * (j - 1) / 5;
//		l = 4 * (k - 1) / 5;
//		m = 4 * (l - 1) / 5;
//		if (n % 5 == 1 && j % 5 == 1 && k % 5 == 1 && l % 5 == 1 && m % 5 == 1) {
//			printf("至少合伙逮到 %d 条鱼\n", n);
//			printf("分别见到鱼的条数是：%d %d %d %d %d\n",n, j, k, l, m);
//			break; //很重要，因为n没上限，一次符合就退出，保证是至少捕鱼数
//		}
//	}
//	return 0;
//}


//    题目：30 个人在一条船上，超载，需要 15 人下船。
//
//        于是人们排成一队，排队的位置即为他们的编号。
//
//        报数，从 1 开始，数到 9 的人下船。
//
//        如此循环，直到船上仅剩 15 人为止，问都有哪些编号的人下船了呢？

#include <stdio.h>

int main() {
	int count = 0; //  记录下船人数，到15就结束
	int a[30] = { 0 }; // 存储30人信息，0代表在船上，1代表下船
	int i = 0;
	int c = 0;  //  记录号码数，到9就清零
	while (1) {
		if (a[i] == 0)
			c++; // 开始记录报数号码
		if (c == 9) {
			count++; //  下船人数加1
			a[i] = 1; // 标记这个人下船了
			printf("第%d号下船了\n", i + 1);
			c = 0; // 到9就清零，下一位从0开始报数
		}
		if (count == 15) // 下船人数到达15就结束
			break;
		i++;
		if (i == 30) // 使数组收尾接起来，便于循环
			i = 0;
	}
	return 0;
}

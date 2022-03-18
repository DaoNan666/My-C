#define _CRT_SECURE_NO_WARNINGS

//  题目：809* ? ? = 800 * ? ? +9 * ? ? 
//        其中 ? ? 代表的两位数, 809 * ? ? 为四位数，
//         8 * ? ? 的结果为两位数，9 * ? ? 的结果为3位数。
//        求 ? ? 代表的两位数，及809 * ? ? 后的结果

//
//#include <stdio.h>
//void output(long int b, long int i) {
//	printf("%ld = 800*%ld + 9*%ld\n", b, i, i);
//}
//int main() {
//	long int a, b, i;
//	a = 809;
//	// 已知i为两位数，所以从10-100之间
//	for (i = 10; i < 100; i++) {
//		b = i * a;
//		if (b >= 100 && b <= 100000 && 8 * i < 100 && 9 * i >= 100) {
//			output(b, i);
//		}
//	}
//	return 0;
//}

//   8进制转化为10进制

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int n = 0, i = 0;
//	char s[20];
//	printf("请输入一个8进制数：");
//	gets_s(s);
//	while (s[i] != '\0') {
//		n = n * 8 + s[i] - '0';
//		i++;
//	}
//	printf("刚输入的8进制转换为10进制为：%d\n", n);
//	return 0;
//}

//
//题目：求0—7所能组成的奇数个数。
//
//程序分析：
//
//这个问题其实是一个排列组合的问题，设这个数为 sun = a1a2a3a4a5a6a7a8, 
// a1 - a8 表示这个数的某位的数值，
// 当一个数的最后一位为奇数时，那么这个数一定为奇数，不管前面几位是什么数字。
// 如果最后一位数为偶数，则这个数一定为偶数。
//
//a1 - a8可以取 0 - 7 这个八个数字，首位数字不为 0。
//
//从该数为一位数到该数为8位数开始统计奇数的个数：
//
//1.当只有一位数时也就是该数的最后一位，奇数个数为4  即(1 3 5 7)
//2.当该数为两位数时，奇数个数为4 * 7 = 28 （0不能在开头）
//3.当该数为三位数时，奇数个数为：4 * 8 * 7 = 224
//...
//8.当该数为八位数时，奇数个数为：4 * 8 * 8 * 8 * 8 * 8 * 8 * 7(依次为最后一位到第一位)

//#include <stdio.h>
//
//int main() {
//	long sum = 4, s = 4;
//	int j;
//	for (j = 2; j <= 8; j++) {
//		printf("%d位数为奇数的个数%ld\n", j - 1, s);
//		if (j <= 2)
//			s = s * 7;
//		else
//			s = s * 8;
//		sum = sum + s;
//		
//	}
//	printf("%d位数为奇数的个数%ld\n", j - 1, s);
//	printf("奇数总个数为%ld\n", sum);
//	return 0;
//}


//  题目：一个偶数总能表示为两个素数之和。


//#include <stdio.h>
//#include <math.h>
//int IsPrime(int n) {
//	int i;
//	if (n == 1)
//		return 0;
//	// 判断是否为素数
//	for (i = 2; i <= sqrt(n); i++)
//		if (n % i == 0)
//			return 0;
//	return 1;
//}
//void divide_even(int even, int* a, int* b) {
//	int i;
//	// 循环找出符合的素数
//	for (i = 2; i < even; i++) {
//		if (IsPrime(i) && IsPrime(even - i))
//			break;
//	}
//	*a = i;
//	*b = even - i;
//}
//int main() {
//	int n, a, b;
//	printf("请输入一个偶数：");
//	scanf("%d", &n);
//	if (n % 2 != 0)
//		printf("输入的不是偶数\n");
//	else {
//		divide_even(n, &a, &b);
//		printf("偶数%d可以分解为%d和%d两个素数的和", n, a, b);
//	}
//	return 0;
//}

//  题目：判断一个素数能被几个9整除。
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int p, i;
//	long int sum = 9;
//	printf("请输入一个素数：");
//	scanf("%d", &p);
//	// i从1开始，知道找到符合的数
//	for (i = 1;; i++) {
//		if (sum % p == 0)
//			break;
//		else
//			sum = sum * 10 + 9;  // 使sum 从9,99,999,9999....
//	}
//	printf("素数%d能整除%d个9组成的数%ld\n", p, i, sum);
//	return 0;
//}


//   连接两个字符串

// 方法一：
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//char* strconnect(char* str1, char* str2) {
//	char* str;
//	// 给str申请空间
//	str = (char*)malloc(strlen(str1) + strlen(str2) + 1);
//	str[0] = '\0';
//	strcat(str, str1);
//	strcat(str, str2);
//	return str;
//}
//int main() {
//	char str1[20], str2[20];
//	// str指针指向连接函数
//	char* str;
//	puts("请输入两个字符串：");
//	scanf("%s%s", str1, str2);
//	str = strconnect(str1, str2);
//	puts("连接后的字符串是：");
//	puts(str);
//	return 0;
//}


//  方法二： 简单粗暴法：
//#include <stdio.h>
//#include <string.h>
//int main() {
//	char a[100];
//	char b[100];
//	printf("请输入两个字符串：\n");
//	scanf("%s%s", a, b);
//	printf("连接后的字符串是：\n");
//	puts(strcat(a, b));
//	return 0;
//}


//题目：读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的 ＊

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//	int n, i, j;
//	printf("请输入数字：");
//	//  读取7位数，限制条件为循环7次
//	for (i = 0; i < 7; i++) {
//		scanf("%d", &n);
//		// 限制条件 读取1-50之间的数
//		if (n > 50) {
//			printf("请重新输入：\n");
//			i--;
//			continue;
//		}
//		else {
//			// j相当于计数器，计算n的位置，以*形式输出
//			for (j = 0; j < n; j++)
//				printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//

/*题目：某个公司采用公用电话传递数据，数据是四位的整数，
        在传递过程中是加密的，加密规则如下： 
         每位数字都加上5, 然后用和除以10的余数代替该数字，
         再将第一位和第四位交换，第二位和第三位交换。*/

//#include <stdio.h>
//int main() {
//	int a, i, temp, s[4];
//	printf("请输入4位数字：");
//	scanf("%d", &a);
//	//  分解输入的四位数
//	s[0] = a % 10;
//	s[1] = a % 100 / 10;
//	s[2] = a % 1000 / 100;
//	s[3] = a / 1000;
//	
//	//每位数字都加上5,然后用和除以10的余数代替该数字
//	for (i = 0; i <= 3; i++) {
//		s[i] = s[i] + 5;
//		s[i] = s[i] % 10;
//	}
//	//  交换1和4  2和3
//	for (i = 0; i <= 3 / 2; i++) {
//		temp = s[i];
//		s[i] = s[3 - i];
//		s[3 - i] = temp;
//	}
//	printf("加密后的数字是：");
//	for (i = 3; i >= 0; i--)
//		printf("%d", s[i]);
//	printf("\n");
//	return 0;
//}


//  时间函数

//#include <stdio.h>
//#include <time.h>
//
//int main() {
//    time_t rawtime;
//    struct tm* timeinfo;
//
//    time(&rawtime);
//    timeinfo = localtime(&rawtime);
//    printf("当地时间为：%s", asctime(timeinfo));
//    return 0;
//}

//#include <stdio.h>
//#include <time.h>
//
//int main() {
//    time_t start, end;
//    int i;
//    start = time(NULL);
//    for (i = 0; i < 3000; i++) {
//        printf("\n");
//    }
//    end = time(NULL);
//
//    printf("时间间隔为：%6.3f\n", difftime(end, start));
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//    long i = 10000000L;
//    clock_t start, finish;
//    double TheTimes;
//    printf("做%ld次空循环需要的时间为：", i);
//    start = clock();
//    while (i--);
//    finish = clock();
//    TheTimes = (double)(finish - start) / CLOCKS_PER_SEC;
//    printf("%f秒。\n", TheTimes);
//    return 0;
//}

//  猜谜游戏

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void games(void) {
//    int n;
//    char begin;
//    int count = 1;
//    srand((int)time(NULL));
//    int m = (rand() % 100) + 1;
//    puts("游戏开始，请输入数字：");
//    while (1) {
//        scanf("%d", &n);
//        if (n == m) {
//            printf("猜中了,使用了%d次\n", count);
//            if (count == 1) {
//                printf("你是神级人物\n");
//                getchar();
//                printf("你已经达到最高级别，还要玩吗？Y/N\n");
//                scanf("%c", &begin);
//                if (begin == 'Y' || begin == 'y') {
//                    games();
//                }
//                else {
//                    printf("再见，goodluck");
//                }
//            }
//            else if (count <= 5) {
//                printf("你是王级人物了");
//                getchar();
//                printf("还要继续挑战最高级别嘛？Y/N");
//                scanf("%c", &begin);
//                if (begin == 'Y' || begin == 'y') {
//                    games();
//                }
//                else {
//                    printf("再见，goodluck");
//                }
//            }
//            else if (count <= 15) {
//                printf("你是钻石级别人物");
//                getchar();
//                printf("还要继续挑战高级别吗？Y/N");
//                scanf("%c", &begin);
//                if (begin == 'Y' || begin == 'y') {
//                    games();
//                }
//                else {
//                    printf("再见，goodluck");
//                }
//            }
//            else {
//                printf("你的技术还有待提高");
//                getchar();
//                printf("还要练习技术吗？Y/N");
//                scanf("%c", &begin);
//                if (begin == 'Y' || begin == 'y') {
//                    games();
//                }
//                else {
//                    printf("再见，goodluck");
//                }
//            }
//            break;
//        }
//        else if (n < m) {
//            puts("太小了");
//            puts("重新输入:");
//        }
//        else {
//            puts("太大了");
//            puts("重新输入");
//        }
//        count++;
//    }
//}
//int main() {
//    games();
//    return 0;
//}


// 结构体应用

//#include <stdio.h>
//
//struct programming {
//    float constant;
//    char* pointer;
//};
//
//int main() {
//    struct programming variable;
//    char string[] = "今天是2022年3月18号，这是我的github地址：https://github.com/DaoNan666";
//
//    variable.constant = 1.23;
//    variable.pointer = string;
//
//    printf("%f\n", variable.constant);
//    printf("%s\n", variable.pointer);
//
//    return 0;
//}

//  题目：计算字符串中子串出现的次数 。

//#include<stdio.h>
//#include<string.h>
//int Sub_Num(char* str, char* sub)
//{
//    int count = 0, i, j;
//    for (i = 0; i < strlen(str); i++)
//    {
//        int pos = 0;
//        for (j = 0; j < strlen(sub); j++, pos++)
//        {
//            if (str[i + pos] != sub[j])
//                break;
//        }
//        if (j == strlen(sub))
//            count++;
//    }
//    return count;
//}
//int main(void)
//{
//    char str[80], sub[80];
//    int count;
//    printf("请输入两个字符串，以回车隔开，母串在前，子串在后：\n");
//    // str为原始字符串   sub为想要查找的子串
//    gets_s(str);
//    gets_s(sub);
//    count = Sub_Num(str, sub);
//    printf("%d", count);
//    return 0;
//}

// 文件操作

//题目：从键盘输入一些字符，逐个把它们送到磁盘上去，直到输入一个#为止
// 
// 
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    FILE* fp = NULL;
//    char filename[25];
//    char ch;
//    printf("输入你要保存的文件名称：\n");
//    gets_s(filename);
//    if ((fp = fopen(filename, "w")) == NULL) {
//        printf("出错了，打开文件失败\n");
//        exit(0);
//    }
//    printf("你现在可以输入你要保存的一些字符，以#结束:\n");
//    //getchar();
//    while ((ch = getchar()) != '#'){
//        fputc(ch, fp);
//    }
//    fclose(fp);
//    fp = NULL;
//
//    return 0;
//}

//题目：从键盘输入一个字符串，将小写字母全部转换成大写字母，
//     然后输出到一个磁盘文件"test"中保存。 输入的字符串以！结束。

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    FILE* fp = NULL;
//    char str[50];
//    int i, len;
//    printf("输入一个字符串：\n");
//    gets_s(str);
//    len = strlen(str);
//    for (i = 0; i < len; i++) {
//        if (str[i] <= 'z' && str[i] >= 'a')
//            str[i] = str[i] - 32;
//    }
//    if ((fp = fopen("ceshi.txt", "w")) == NULL) {
//        printf("出错了，打开文件失败\n");
//        exit(0);
//    }
//    fprintf(fp, "%s", str);
//    fclose(fp);
//    fp = NULL;
//    return 0;
//}


//题目：有两个磁盘文件A和B,各存放一行字母，
//     要求把这两个文件中的信息合并（按字母顺序排列），
//        输出到一个新文件C中。

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    FILE* fa, * fb, * fc;
//    int i, j, k;
//    char str[100], str1[100];
//    char temp;
//    if ((fa = fopen("A.txt", "r")) == NULL) {
//        printf("出错了，打开文件失败\n");
//        exit(0);
//    }
//    fgets(str, 99, fa);
//    fclose(fa);
//    fa = NULL;
//    if ((fb = fopen("B.txt", "r")) == NULL) {
//        printf("出错了，打开文件失败\n");
//        exit(0);
//    }
//    fgets(str1, 100, fb);
//    fclose(fb);
//    fb = NULL;
//    strcat(str, str1);
//    for(i=strlen(str)-1;i>1;i--)
//        for(j=0;j<i;j++)
//            if (str[j] > str[j + 1]) {
//                temp = str[j];
//                str[j] = str[j + 1];
//                str[j + 1] = temp;
//            }
//    if ((fc = fopen("C.txt", "w")) == NULL)  // 合并为 C.txt
//    {
//        printf("error: cannot open C file!\n");
//        exit(0);
//    }
//    fputs(str, fc);
//    fclose(fc);
//    fc = NULL;
//    return 0;
//}

//题目：有五个学生，每个学生有3门课的成绩，
//      从键盘输入以上数据（包括学生号，姓名，三门课成绩），
//      计算出平均成绩，况原有的数据和计算出的平均分数存放在磁盘文件"stud"中。

#include <stdio.h>
#include <stdlib.h>
struct Stu {
    int ID;
    double math;
    double English;
    double C;
    char name[20];
    double average;
};

int main() {
    FILE* fp;
    Stu stu[5];
    int i, average = 0;
    printf("请输入5位学生信息：学号，姓名，数学成绩，英语成绩，C语言成绩\n");
    for (i = 0; i < 5; i++) {
        scanf("%d %s %lf %lf %lf", &(stu[i].ID), stu[i].name, &(stu[i].math), &(stu[i].English), &(stu[i].C));
        stu[i].average = (stu[i].math + stu[i].English + stu[i].average) / 3;
    }
    if ((fp = fopen("stud.txt", "w")) == NULL) {
        printf("出错了，打开文件失败\n");
        exit(0);
    }
    for (i = 0; i < 5; i++)
        fprintf(fp, "%d %s %lf %lf %lf %lf\n", stu[i].ID, stu[i].name, stu[i].math, stu[i].English, stu[i].C, stu[i].average);
    fclose(fp);
    fp = NULL;
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS

//题目：两个乒乓球队进行比赛，各出三人。
//      甲队为a, b, c三人，乙队为x, y, z三人。
//      已抽签决定比赛名单。有人向队员打听比赛的名单。
//      a说他不和x比，c说他不和x, z比，请编程序找出三队赛手的名单。
//
//
//#include <stdio.h>

//方法一：
//int main() {
//   //这里的i j k为选手 a b c
//	char i, j, k;
//    //  a的对手可能为x y z中的一个
//	for (i = 'x'; i <= 'z'; i++) {
//    //  b的对手可能为x y z中的一个
//		for (j = 'x'; j <= 'z'; j++) {
//         // 保证i j对手不同
//			if (i != j) {
//            //  c的对手可能为x y z中的一个
//				for (k = 'x'; k <= 'z'; k++) {
//           // 保证 i j k 对手各不相同
//					if (i != k && j != k) {
//               //     题目限制条件
//						if (i != 'x' && k != 'x' && k != 'z'){
//							printf("比赛名单为：a--%c\tb--%c\tc--%c\n",i,j,k);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//方法二：
// 定义枚举变量，实现变量自增
//enum rival
//{
//    x = 120,
//    y,
//    z
//};
//int main()
//{
//    enum rival a, b, c;
//    for (a = x; a <= z; a++)
//    {
//        for (b = x; b <= z; b++)
//        {
//            for (c = x; c <= z; c++)
//            {
//                if (a != x && c != x && c != z && a != b && b != c && a != c)
//                    printf("a = %c\nb = %c\nc = %c\n", a, b, c);
//            }
//        }
//    }
//    return 0;
//}

//   打印菱形

//#include <stdio.h>
//
//int main() {
//	// i用来控制行 j控制列里的空格 k控制列的*
//	int i, j, k;
//	// 将菱形分为上下两部分去打印 注意空格和*数量
//	//菱形的前四行
//	for (i = 0; i <= 3; i++) {
//		for (j = 0; j <= 2 - i; j++) {
//			printf(" ");
//		}
//		for (k = 0; k <= 2 * i; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	//菱形的后三行
//	for (i = 0; i <= 2; i++) {
//		for (j = 0; j <= i; j++) {
//			printf(" ");
//		}
//		for (k = 0; k <= 4 - 2 * i; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//题目：有一分数序列：2 / 1，3 / 2，5 / 3，8 / 5，13 / 8，21 / 13...
//                  求出这个数列的前20项之和。
//程序分析：请抓住分子与分母的变化规律。
//#include <stdio.h>
//
//int main() {
//	
//	int i, j;
//	float sum = 0;
//	float a = 2, b = 1;
//	for (i = 1; i <= 20; i++) {
//		sum = sum + a / b;
//		j = a;
//		a = a + b;
//		b = j;
//	}
//	printf("%9.6f\n", sum);
//	return 0;
//}


//题目：求1 + 2!+ 3!+ ... + 20!的和。
//
//程序分析：此程序只是把累加变成了累乘。
//
//#include <stdio.h>
//
//int main() {
//	int i;
//	long double sum, mix;
//	sum = 0, mix = 1;
//	for (i = 1; i <= 20; i++) {
//		// mix为单个累乘的结果
//		mix = mix * i;
//		// sum为各个累乘的和
//		sum = sum + mix;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//题目：利用递归方法求5!。
//
//#include <stdio.h>
////自定义fact函数，用来递归实现阶乘
//int fact(int i) {
//	int sum;
//	// 0的阶乘为1
//	if (i == 0) {
//		sum = 1;
//	}
//	else {
//		// 递归求阶乘
//		sum = i * fact(i - 1);
//	}
//	return sum;
//}
//int main() {
//	int i;
//	int fact(int);
//	for (i = 0; i < 6; i++) {
//		printf("%d!=%d\n", i, fact(i));
//	}
//	return 0;
//}

//题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。

//#include <stdio.h>
//void f() {
//	char ch;
//	if ((ch = getchar()) != '\n') {
//		f();
//	}
//	if (ch != '\n'){
//		printf("%c",ch);
//	}
//}
//int main() {
//	printf("请输入5个字符：");
//	f();
//	return 0;
//}

//题目：有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。
// 问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。
// 问第2个人，说比第一个人大两岁。最后问第一个人，他说是10岁。
// 请问第五个人多大？
//
//程序分析：利用递归的方法，递归分为回推和递推两个阶段。
// 要想知道第五个人岁数，需知道第四人的岁数，
// 依次类推，推到第一人（10岁），再往回推。。
//

//#include <stdio.h>
//
//int age(int n) {
//	int c;
//	if (n == 1)
//		c = 10;
//	else
//		c = age(n - 1) + 2;
//	return c;
//}
//int main() {
//	printf("%d\n", age(5));
//	return 0;
//}


//题目：给一个不多于5位的正整数，
//要求：一、求它是几位数，二、逆序打印出各位数字
// 
//方法一：分解出各位，各赋给一个变量 ，逆序输出
//
//#include <stdio.h>
//
//int main()
//{
//    long a, b, c, d, e, x;
//    printf("请输入不多于5位的正整数：");
//    scanf("%ld", &x);
//    a = x / 10000;        //分解出万位
//    b = x % 10000 / 1000;   //分解出千位
//    c = x % 1000 / 100;     //分解出百位
//    d = x % 100 / 10;       //分解出十位
//    e = x % 10;           //分解出个位
//    if (a != 0) {   //若a不为0，则说明这个数有万位，则为五位数
//        printf("为 5 位数\n逆序为： %ld %ld %ld %ld %ld\n", e, d, c, b, a);
//    }
//    else if (b != 0) {  
//        printf("为 4 位数\n逆序为： %ld %ld %ld %ld\n", e, d, c, b);
//    }
//    else if (c != 0) {
//        printf("为 3 位数\n逆序为：%ld %ld %ld\n", e, d, c);
//    }
//    else if (d != 0) {
//        printf("为 2 位数\n逆序为： %ld %ld\n", e, d);
//    }
//    else if (e != 0) {
//        printf("为 1 位数\n逆序为：%ld\n", e);
//    }
//}

//方法二：用库函数求长度，自定义函数逆序输出
//#include <stdio.h>
//#include <string.h>
//// 定义一个字符串数组，用来存放得到的整数
//static char str[5];
////自定义函数，实现逆序
//void Reverse(int n) {
//	while (n > 0) {
//		printf("%c", str[--n]);
//	}
//}
//int main() {
//	
//	printf("请输入一个正整数：");
//	scanf("%s", str);
//	// 利用库函数求字符串长度，即为所求整数的位数
//	printf("这是一个%lu位数\n", strlen(str));
//	printf("逆序为：");
//	// 调用自定义逆序函数
//	Reverse(strlen(str));
//	return 0;
//}

//方法三：
//#include <stdio.h>
//int main() {
//	int n;
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	int x[1000];
//	int i = 0, j = 0;
//	while (n != 0) {
//		//分解该数，将分解的各位存入x数组
//		x[i] = n % 10;
//		n = n / 10;
//		// i为计数器
//		i++;
//	}
//	// 分解出的位数即为所求 
//	int z = i;
//	printf("该数字为：%d位数\n", z);
//	printf("逆序为：");
//	for (j = 0; j < z; j++) {
//		//分解出的是从个位到十位...依次分解，所以分解第一位即为逆序第一位
//		printf("%d", x[j]);
//	}
//	return 0;
//}


//题目：一个5位数，判断它是不是回文数。
//即12321是回文数，个位与万位相同，十位与千位相同。

//方法一：
//因为是五位数，依次分解出各位，判断分解出第一位和最后一位是否相同，
//                       第二位是否和倒数第二位相同，得出结果
//#include <stdio.h>
//
//int main()
//{
//    long a, b, c, d, x;
//    printf("请输入 5 位数字：");
//    scanf("%ld", &x);
//    a = x / 10000;        //分解出万位
//    b = x % 10000 / 1000;  //分解出千位
//    c = x % 100 / 10;       //分解出十位
//    d = x % 10;            //分解出个位
//	//判断个位等于万位并且十位等于千位
//    if (a == d && b == c) { 
//        printf("这是回文数\n");
//    }
//    else {
//        printf("这不是回文数\n");
//    }
//}
// 
// 
//方法二：利用字符串，将这个五位数作为字符串输入存入数组中
  //            利用数组下标判断 相应位置数值是否相等
  // 
 // 
//#include <stdio.h>
//#include<string.h>
//
//int main()
//{
//    char str[5];
//    printf("请输入五位数:");
//    scanf("%s", str);
//
//    if (str[0] == str[4] && str[1] == str[3])
//        printf("这是一个回文数。\n");
//    else
//        printf("这不是回文数。\n");
//    return 0;
//}


//方法三： 将输入的数字逆序重新排列，与原数比较判断
// 
//#include <stdio.h>
//
//int main()
//{
//    int x;
//    int sum = 0;
//    printf("请输入一个整数:\n");
//    scanf("%d", &x);
//
//    for (int i = x; i > 0; i /= 10)
//        //sum最终为逆序后各个位相加的结果
//        sum = sum * 10 + i % 10;
//    //若该数是回文数字，说明该数逆序后还是这个数本身
//    // 所以这里直接判断sum与原数是否相等
//    if (sum == x)
//        printf("%d 是回文数\n", x);
//    else
//        printf("%d 不是回文数\n", x);
//}

//题目：请输入星期几的第一个字母来判断一下是星期几，
// 如果第一个字母一样，则继续判断第二个字母。
//
//程序分析：用情况语句比较好，如果第一个字母一样，
//则判断用情况语句或if语句判断第二个字母。

//#include <stdio.h>
//int main() {
//	char i, j;
//	printf("请输入第一个字母：");
//	scanf("%c", &i);
// //后面scanf("%c",&j);的问题，第二次是读入的一个换行符，
//  //  而不是输入的字符，因此需要加一个getchar() 吃掉换行符
//	getchar();
//	switch (i) {
//	case 'M':
//		printf("Monday\n");
//		break;
//	case 'W':
//		printf("Wednesday\n");
//		break;
//	case 'F':
//		printf("Frinday\n");
//		break;
//	case 'T':
//		printf("请输入第二个字母：");
//		scanf("%c", &j);
//		if (j == 'u') { printf("Tuesday\n"); break; }
//		if (j == 'h') { printf("Thursday\n"); break; }
//	case 'S':
//		printf("请输入第二个字母：");
//		scanf("%c", &j);
//		if (j == 'a') { printf("Saturday\n"); break; }
//		if (j == 'u') { printf("Sunday\n"); break; }
//	default:
//		printf("输入有误\n");
//		break;
//	}
//	return 0;
//}


//方法一
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//char* Delete(char* str, char* charSet) {
//	int hash[256];
//	if (charSet == NULL)
//		return str;
//	for (int i = 0; i < 256; i++)
//		hash[i] = 0;
//	for (int i = 0; i < strlen(charSet); i++)
//		hash[charSet[i]] = 1;
//	int count = 0;
//	for (int i = 0; i < strlen(str); i++) {
//		if (!hash[str[i]])
//			str[count++] = str[i];
//	}
//	str[count] = '\0';
//	return str;
//}
//int main() {
//	char s[2] = "a";
//	char s2[5] = "aca";
//	printf("%s\n", Delete(s2, s));
//	return 0;
//}

//方法二
//#include <stdio.h>
//
//int main(void)
//{
//    char ch;
//    int i, j;
//    //原始字符串
//    char s[] = "aca";
//    puts(s);
//    printf("请输入要删除的字母: ");
//    scanf("%c", &ch);
//
//    for (i = 0; s[i] != '\0'; i++)
//    {
//        if (s[i] == ch)
//        {
//            for (j = i; s[j] != '\0'; j++)
//            {
//                s[j] = s[j + 1];
//            }
//            s[j] = '\0';
//        }
//    }
//    puts(s);
//    return 0;
//}


#define _CRT_SECURE_NO_WARNINGS

//  1-100内9的个数

//#include <stdio.h>
//
//int main() {
//	int i, count = 0;
//	for (i = 0; i <= 100; i++) {
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d \n", count-1);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int a, n;
//	int ret = 0, sum = 0;
//	printf("请输入数字和项数：");
//	scanf("%d%d", &a, &n);
//	for (int i = 0; i < n; i++) {
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < len; i++) {
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//
//#include <stdio.h>
//#include <math.h>
//int main() {
//	int a = 2;
//	int c = 3;
//	int b = pow(a, c);
//	printf("%d\n", b);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//
//int main() {
//	char arr[] = "I AM A STUDENT";
//	int i = 0;
//	while (arr[i]) {
//		if (isupper(arr[i])) {
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//	printf("%d\n", sizeof(long));
//}


//  分数加减
//#include <stdio.h>
//
//int main() {
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++) {
//		sum = sum + flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//
//}


//#include <stdio.h>
//void print(int* p, int sz) {
//	int i;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", * (p + i));
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


#include <stdio.h>
#include <string.h>
void reverse(char arr[]){
	int left = 0;
	int right = strlen(arr) - 1;
	while (left < right) {
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}

	}
int main() {
	char arr[] = "abcdef";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}
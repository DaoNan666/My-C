#define _CRT_SECURE_NO_WARNINGS


//   C语言 链表操作

//   一 ： 基本操作


//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct link {
//	int data;  //  定义数据域
//	struct link* next;   //  定义指针域
//};
//struct link* AppendNode(struct link* head) {
//	//  创建p指针，初始化为NULL， 创建pr指针，通过pr指针给指针域赋值
//	struct link* p = NULL, * pr = head;
//	int data;
//	//  给指针p申请空间，
//	p = (struct link*)malloc(sizeof(struct link));
//	if (p == NULL) {
//		printf("内存空间申请失败\n");
//		exit(0);
//	}
//	//  若头指针为NULL，说明现在是空链表
//	if (head == NULL) {
//		//  让head指针指向p的地址，
//		head = p;
//	}else {
//		// 第一次添加头结点时，pr = head，和头指针一样指向头结点的地址
//		while (pr->next != NULL) {  //  若pr指向的地址不为NULL时，即p不是尾结点
//			pr = pr->next; //  使pr指向头结点的指针域
//		}
//		pr->next = p;  //  使pr的指针域指向新建结点的地址，此时next指针域是头结点的指针域
//	}
//	printf("输入新节点：");
//	scanf("%d", &data);
//	p->data = data;  // 给p的数据域赋值
//	p->next = NULL; //  新添加的结点位于表尾，所以它的指针域为NULL
//	return head;  //   返回head的地址
//}
//void DisplayNode(struct link* head) {
//	struct link* p = head;  //  定义p指针使其指向头结点
//	int j = 1;    //  记录存入的数值
//	while (p != NULL) {  //  因为p = p -> next，所以直到尾结点打印结束
//		printf("%5d%10d\n", j, p->data);
//		p = p->next;
//		j++;
//	}
//}
//void DeleteMemory(struct link* head) {
//	struct link* p = head, * pr = NULL;
//	while (p != NULL) {  //  当p的指针域不为NULL时
//		pr = p;    //  将每一个结点的地址赋值给pr指针
//		p = p->next;   //  使p指向下一个结点
//		free(pr);
//	}
//}
//int main() {
//	int i = 0; //  用i 记录创建的节点数
//	char c;
//	struct link* head = NULL; //  创建头指针，初始化为NULL
//	printf("请问你想建立一个新结点嘛？ Y/N  ");
//	scanf("%c", &c);
//	while (c == 'Y' || c ==  'y') {
//		head = AppendNode(head);// 通过函数获取链表的地址，AppendNode返回的是链表的头指针
//		   //  通过头指针指向的地址获取链表中保存的数据
//		DisplayNode(head);  //  根据头指针打印链表
//		printf("请问你想继续建立一个新结点嘛？ Y/N  ");
//		scanf(" %c", &c);  //  这里%c前的空格很重要
//		i++;
//	}
//	printf("%d 个新结点已经建立\n", i);
//	DeleteMemory(head);  //  释放占用的内存
//}


//  优化

//#include <stdio.h>
//#include <stdlib.h>
//
//struct Stu {
//	int id;
//	char name[50];
//	struct Stu* next;
//};
//
//struct Stu* create(int n) {
//	struct Stu* head, * node, * end;  //  定义头结点，普通结点，尾结点
//	head = (struct Stu*)malloc(sizeof(struct Stu));// 为头结点申请空间
//	end = head;  //  若是空表，则头尾地址一致
//	for (int i = 0; i < n; i++) {
//		//   给普通结点申请空间
//		node = (struct Stu*)malloc(sizeof(struct Stu));
//
//		scanf("%d %s", &node->id, node->name);
//		end->next = node; // 让上 一个结点的数据域指向当前节点
//		end = node;   //  end指向当前节点，最终指向尾结点
//	}
//		end->next = NULL;  //  给尾结点置空
//		return head;  //  返回头节点地址
//	
//}
//
//void print(struct Stu* head) {
//	struct Stu* p = head;
//	int j = 1;
//	p = p->next;
//	while (p != NULL) {
//		printf("%d\t%d\t%s\n", j, p->id, p->name);
//		p = p->next;
//		j++;
//	}
//}
//int main() {
//	int n;
//	struct Stu* head = NULL;   //  创建头指针
//	printf("请输入你想要创建的节点数：");
//	scanf("%d", &n);
//	head = create(n);
//	print(head);
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int i;
//	printf("请输入当前水位(厘米）：");
//	scanf("%d",&i);
//	if (i >= 0 && i <= 100)
//		printf("水位偏低\n");
//	else if (i >= 101 && i <= 150)
//		printf("水位正常\n");
//	else if (i >= 150)
//		printf("水位偏高\n");
//	return 0;
//}


//#include <stdio.h>
//#define N 200
//
//int main() {
//	int i;
//	for (i = 1; i <= 200; i++) {
//		if (i % 3 == 0 && i % 5 == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#define N 3
//
//struct phone
//{
//	char ID[10];
//	char model[12]; 
//	char brand[12];
//	float price; 
//	int num;
//};
//
//void input(struct phone* p) {
//	printf("请输入手机销售信息：编号 型号 品牌 价格 数量\n");
//	int i;
//	for (i = 0; i <= N; i++) {
//		scanf("%s%s%s%f%d", p->ID, p->model, p->brand, &p->price,& p->num);
//		p++;
//	}
//
//
//}
//void sort(struct phone* p) {
//	phone* pr;
//	pr = (phone*)malloc(sizeof(phone));
//	for (int i = 0; i < N - 1; i++) {
//		for (int j = i + 1; j < N; j++) {
//			if ((p + i)->num < (p + j)->num) {
//				*pr = *(p + i);
//				*(p + i) = *(p + j);
//				*(p + j) = *pr;
//			}
//		}
//	}
//	free(pr);
//	output1(p);
//}
//void output1(struct phone* p) {
//	printf("手机编号 型号 品牌 价格  数量\n");
//	for (int i = 0; i < N; i++) {
//		printf("%s %s %s %f %d", p->ID, p->model, p->brand, p->price, p->num);
//		p++;
//	}
//	printf("\n");
//}
//void output2(struct phone* p) {
//	float averageprice = 0;
//	phone* pr;
//	pr = p;
//	for (int i = 0; i < N; i++, pr++) {
//		averageprice = averageprice + pr->price;
//	}
//	averageprice = averageprice / N;
//
//	FILE* fp;
//	if ((fp = fopen("3-21.txt", "w")) == NULL) {
//		printf("文件打开失败\n");
//		exit(0);
//	}
//	fprintf(fp, "手机编号 型号 品牌 价格 数量\n");
//	for (int i = 0; i < N; i++) {
//		if (p->price < averageprice) {
//			fprintf(fp, "%s %s %s %f %d", p->ID, p->model, p->brand, p->price, p->num);
//		}
//	}
//	fclose(fp);
//}
//
//
//int  main()
//{
//	struct phone st[N]; 
//	input(st);
//	output1(st); 
//	output2(st);
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//int main()
//
//{
//	int n, c = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &n);
//	n = abs(n);  //  求绝对值
//	while (n != 0)
//	{
//		n = n / 10;
//		c++;
//	}
//	printf("这个整数是 %d 位数\n", c);
//	return 0;
//
//}

#include<stdio.h>
#define N 80
void reverse(int a[], int low, int high)
{
    int i = low;
    int j = high;
    while (i < j)
    {
        if (i < j)
        {
            int temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        i++;
        j--;
    }
}

int main(void)
{
    int n, m, a[N];
    printf("需要输入几个数？\n");
    scanf("%d", &n);
    printf("请输入%d个数：\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("请输入移动位置大小：\n");
    scanf("%d", &m);
    reverse(a, 0, n - 1);
    reverse(a, 0, n - m - 1);
    reverse(a, n - m, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
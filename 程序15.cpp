#include <stdio.h>
int main(){
	int score;
	char grade;
	printf("�������ѧ���ɼ�: \n");
	scanf("%d",&score);
	grade = score >= 90 ?'A':(score >= 60 ?'B':'C');
	printf("%d���ڵȼ�%c",score,grade);
}

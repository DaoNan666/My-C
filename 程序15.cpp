#include <stdio.h>
int main(){
	int score;
	char grade;
	printf("请输入该学生成绩: \n");
	scanf("%d",&score);
	grade = score >= 90 ?'A':(score >= 60 ?'B':'C');
	printf("%d属于等级%c",score,grade);
}

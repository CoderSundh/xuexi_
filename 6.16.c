#define _CRT_SECURE_NO_WARNINGS 1
#define SIZE 3
#include <stdio.h>
//定义结构体（使用typedef)，包含学生的信息（序号，三门课的成绩，平均分），从键盘输入学生的信息，计算平均值，并列出这个学生的信息。
typedef struct student
{
	int num;//学号
	int score[SIZE];//三科成绩
	float avg;//成绩平均分，保留两位小数
}STU;
int main()
{
	int i = 0;
	STU a;
	a.avg=0;
	printf("请输入该生的序号：");
	scanf("%d", &a.num);
	printf("请输入该生的成绩\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("请输入第%d门的成绩：",i+1);
		scanf("%d",&a.score[i]);
		a.avg = a.avg + a.score[i];
	}
	a.avg = a.avg / SIZE;
	printf("学生的序号是:%d\n",a.num);
	for (i = 0; i < SIZE; i++)
	{
		printf("该生的第%d门成绩是:%d",i+1,a.score[i]);
	}
	printf("\n");
	printf("学生的平均成绩是:%.2f（保留两位小数）\n",a.avg);
	return 0;
}

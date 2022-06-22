#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*
struct AGE
{
	int year;
	int month;
	int day;
};
struct STUDENT
{
	char name[20];//姓名
	int num;	//学号 
	struct AGE birthday;	//生日
	float score;//分数
};
int main(void)
{
	struct STUDENT student1; //用 struct STUDENT 结构体类型定义结构体变量 student1
	struct STUDENT* p = NULL; //定义一个指向 struct STUDENT 结构体类型的指针变量 p
	p = &student1;//p 指向结构体变量 student1 的首地址, 即第一个成员的地址
	strcpy((*p).name, "小明"); //(*p).name 等价于 student1.name 
	p->birthday.year = 1989;//相当于(*p).birthday.year = 1989;
	(*p).birthday.month = 3;//p->birthday.mounth=3;
	(*p).birthday.day = 29;//p->birthday.day=29;
	p->num = 1207041;//相当于(*p).num = 1207041;
	(*p).score = 100;
	printf("name : %s\n", p->name);//(*p).name 不能写成 p
	printf("birthday : %d-%d-%d\n", (*p).birthday.year, (*p).birthday.month, (*p).birthday.day);
	printf("num : %d\n", (*p).num); printf("score : %.1f\n", (*p).score);
	return 0;
}
*/
struct AGE
{
	int year;
	int month;
	int day;
};
typedef struct STUDENT
{
	char name[20];//姓名
	int num;//学号 
	struct AGE birthday;//生日
	float score;//分数
}STU;
int main()
{
	STU student1;
	STU* p;
	p = &student1;
	printf("请输入录入学生的姓名:");
	scanf("%s",&p->name);
	printf("请输入%s的学号:",p->name);
	scanf("%d",&p->num);
	printf("请输入%s的出生日期\n", p->name);
	printf("年:");
	scanf("%d",&p->birthday.year);
	printf("月:");
	scanf("%d", &p->birthday.month);
	printf("日:");
	scanf("%d", &p->birthday.day);
	printf("请输入%s的分数:", p->name);
	scanf("%f",&p->score);
	printf("姓名: %s\n", p->name);
	printf("学号: %d\n", (*p).num);
	printf("出生日期: %d-%d-%d\n", (*p).birthday.year, (*p).birthday.month, (*p).birthday.day);
	printf("分数: %.1f\n", (*p).score);
	return 0;
}
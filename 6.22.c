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
	char name[20];//����
	int num;	//ѧ�� 
	struct AGE birthday;	//����
	float score;//����
};
int main(void)
{
	struct STUDENT student1; //�� struct STUDENT �ṹ�����Ͷ���ṹ����� student1
	struct STUDENT* p = NULL; //����һ��ָ�� struct STUDENT �ṹ�����͵�ָ����� p
	p = &student1;//p ָ��ṹ����� student1 ���׵�ַ, ����һ����Ա�ĵ�ַ
	strcpy((*p).name, "С��"); //(*p).name �ȼ��� student1.name 
	p->birthday.year = 1989;//�൱��(*p).birthday.year = 1989;
	(*p).birthday.month = 3;//p->birthday.mounth=3;
	(*p).birthday.day = 29;//p->birthday.day=29;
	p->num = 1207041;//�൱��(*p).num = 1207041;
	(*p).score = 100;
	printf("name : %s\n", p->name);//(*p).name ����д�� p
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
	char name[20];//����
	int num;//ѧ�� 
	struct AGE birthday;//����
	float score;//����
}STU;
int main()
{
	STU student1;
	STU* p;
	p = &student1;
	printf("������¼��ѧ��������:");
	scanf("%s",&p->name);
	printf("������%s��ѧ��:",p->name);
	scanf("%d",&p->num);
	printf("������%s�ĳ�������\n", p->name);
	printf("��:");
	scanf("%d",&p->birthday.year);
	printf("��:");
	scanf("%d", &p->birthday.month);
	printf("��:");
	scanf("%d", &p->birthday.day);
	printf("������%s�ķ���:", p->name);
	scanf("%f",&p->score);
	printf("����: %s\n", p->name);
	printf("ѧ��: %d\n", (*p).num);
	printf("��������: %d-%d-%d\n", (*p).birthday.year, (*p).birthday.month, (*p).birthday.day);
	printf("����: %.1f\n", (*p).score);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#define SIZE 3
#include <stdio.h>
//����ṹ�壨ʹ��typedef)������ѧ������Ϣ����ţ����ſεĳɼ���ƽ���֣����Ӽ�������ѧ������Ϣ������ƽ��ֵ�����г����ѧ������Ϣ��
typedef struct student
{
	int num;//ѧ��
	int score[SIZE];//���Ƴɼ�
	float avg;//�ɼ�ƽ���֣�������λС��
}STU;
int main()
{
	int i = 0;
	//int j = 0;
	STU a;
	a.avg=0;
	printf("�������������ţ�");
	scanf("%d", &a.num);
	printf("����������ĳɼ�\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("�������%d�ŵĳɼ���",i+1);
		scanf("%d",&a.score[i]);
		a.avg = a.avg + a.score[i];
	}
	a.avg = a.avg / SIZE;
	printf("ѧ���������:%d\n",a.num);
	/*printf("ѧ�������ųɼ��ֱ���:");
	printf("��һ�ţ�%d���ڶ��ţ�%d�������ţ�%d\n",a.score[i]);*/
	for (i = 0; i < SIZE; i++)
	{
		printf("�����ĵ�%d�ųɼ���:%d",i+1,a.score[i]);
	}
	printf("\n");
	printf("ѧ����ƽ���ɼ���:%.2f��������λС����\n",a.avg);
	//����һ�ŵĳɼ���:%d���ڶ��ŵĳɼ���:%d�������ŵĳɼ���:%d��ƽ���ɼ���%.2f\n,a.score[i],a.avg
	return 0;
}

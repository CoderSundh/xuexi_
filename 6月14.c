#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


// ע�⣺�궨����治�ܼ����źͷֺţ���������ͺ�����һ��
//#define M 3 
//#define N 3
//int main()
//{
//	int a[M][N] = { {1,2,3},4,5 };
//	int b = 0;
//	b = a[0][2] + a[2][2];
//	printf("%d\n", b);
//	return 0;
//}

//���a[3][4]���е�����Ԫ�ص�ֵ
#define M 3
#define N 4
int main()
{
	int a[M][N] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	int j = 0;	
	for (i  ; i < M; i++)
	{
		for (j = 0; j < N; j++)
			printf("a[%d][%d]=%d\n", i, j, a[i][j]);
	}
	return 0;
}
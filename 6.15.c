#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define M 3
#define N 4
int main()
{
	int a[M][N] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	int i = 0;
	int j = 0;
	/*
	//��С�����
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}*/

	//��С�����
	for (j = 0; j < N; j++)
	{
		for (i = 0; i < M; i++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
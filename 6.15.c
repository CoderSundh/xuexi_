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
	//行小标遍历
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	*/

	//列小标遍历
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

/*
//对3行4列的矩阵求其最大值，以及其所在的行号和列号
int main()
{
	int a[M][N] = { {1,5,9,6},{8,5,12,3},{-5,8,-15,3} };
	int row = 0, colum = 0;
	int i=0,j=0,max = 0;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (a[i][j] >= max)
			{
				max = a[i][j];
				row = i+1;
				colum = j+1;
			}
		}
	}
	printf("最大值为:%d\n所在行号:%d\n所在列号:%d\n",max,row,colum);
	return 0;
}
*/

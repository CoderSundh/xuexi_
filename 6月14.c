#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


// 注意：宏定义后面不能加括号和分号，命名规则和函数名一致
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

//输出a[3][4]所有的数组元素的值
#define M 3
#define N 4
int main()
{
	int a[M][N] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	int j = 0;	
	for (i = 0  ; i < M; i++)//i后面的赋值为0可以省去
	{
		for (j = 0; j < N; j++)//j后面的赋值为0不可以删去，i可以删去是因为其只遍历一遍，而j要多次遍历，所以要赋值0
			printf("a[%d][%d]=%d\n", i, j, a[i][j]);
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int* runningSum(int* nums, int numsSize, int* returnSize);
#define M 4
int main()
{
	int a[M] = {1,2,3,4};
	int b[M] = { 0 };
	runningSum(a,M,b);
	for (int i = 0; i < M; i++)
	{
		printf("%d\n", b[i]);
	}
	return 0;
}
函数的作用：给定一个数组nums，经过 函数的计算可以的出求和结果，
求和公式为runningSum[i] = sum(nums[0]...nums[i])
int* runningSum(int* nums, int numsSize, int* returnSize) {
	*returnSize = numsSize;//题源来自力扣，这里的*returnSize是一个输出参数，指针类型，该地址存取的是结果数组的长度。
	//leetcode后台测试用例运行时，需要该参数，不然只有结果数组的指针，没有长度。
	for (int i = 1; i < numsSize; i++) {
		nums[i] += nums[i - 1];
	}
	return nums;
}
//输入[1 2 3 4]，输出[1 3 6 10]

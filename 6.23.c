#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int* runningSum(int* nums, int numsSize, int* returnSize);
#define M 5
int main()
{
	int a[M] = {1,2,3,4,5};
	int b[M] = { 0 };
	runningSum(a,M,b);
	for (int i = 0; i < M; i++)
	{
		printf("%d\n", b[i]);
	}
	return 0;
}
//函数的作用：给定一个数组nums，经过 函数的计算可以的出求和结果，
//求和公式为runningSum[i] = sum(nums[0]...nums[i])
//int* runningSum(int* nums, int numsSize, int* returnSize) {
//	*returnSize = numsSize;//利用指针的方法表示出返回值的个数
//	for (int i = 1; i < numsSize; i++) {
//		nums[i] += nums[i - 1];
//	}
//	return nums;
//}
int* runningSum(int* nums, int numsSize, int* returnSize) {
	returnSize[0] = nums[0];
	*returnSize = numsSize;//利用指针的方法表示出返回值的个数
	for (int i = 1; i < numsSize; i++) {
		returnSize[i] = returnSize[i-1] + nums[i];
	}
	return returnSize;
}
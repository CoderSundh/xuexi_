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
//���������ã�����һ������nums������ �����ļ�����Եĳ���ͽ����
//��͹�ʽΪrunningSum[i] = sum(nums[0]...nums[i])
//int* runningSum(int* nums, int numsSize, int* returnSize) {
//	*returnSize = numsSize;//����ָ��ķ�����ʾ������ֵ�ĸ���
//	for (int i = 1; i < numsSize; i++) {
//		nums[i] += nums[i - 1];
//	}
//	return nums;
//}
int* runningSum(int* nums, int numsSize, int* returnSize) {
	returnSize[0] = nums[0];
	*returnSize = numsSize;//����ָ��ķ�����ʾ������ֵ�ĸ���
	for (int i = 1; i < numsSize; i++) {
		returnSize[i] = returnSize[i-1] + nums[i];
	}
	return returnSize;
}
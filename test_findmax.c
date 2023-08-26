#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//输入10个整数寻找最大值
	//输入
	//比较大小
	//打印
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		scanf("%d", &arr[i]);
	}
	//先确定一个数，再拿剩下的数一个一个去比较，依次更新最大值
	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("max=%d", max);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//函数
//int add(int(x), int(y))
//{
//	int z;
//	z = x + y;
//
//	return z;
//}
//int main()
//{
//	int num1 = 0, num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//printf("%d", sum = num1 + num2);函数模式
//	sum=add(num1, num2);
//	printf("%d", sum);
//	return 0;
//}
 
 
 
 
//数组-一组同类型的数组合
//数组通过下标来访问从0开始
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//		int i=0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	//char arr1[5] = { 'a','b','c' };//不完全初始化，剩余为0
//	return 0;
//}




//操作符
//算术操作符：+ - \ %
//移位操作符:<<   >>,移的是二进制，整体向前向后移几个位置，后面差的补0
//演示
int main()
{
	//int a = 9 / 2;
	//float a = 9 / 2;
	//float a = 9.0 / 2.0;  想要得到小数后面的位数需要以小数的形式来作除法
	//int a = 9 % 2;//  9模2也就相当于取余数
	//int a = 2;
	//int b = a << 1;
	// 
	// 
	// 
	// 
	//赋值操作符
	// =，+=，*=，/=,%=,>>=,<<=
	//int a = 3;
	//a = a + 3;
	//a += 3;
	//a = a % 3;
	//a %= 3;
	//a = a / 3;
	//a /= 3;

	//单目操作符
	//!--逻辑取反
	//---负值
	//+--正值
	//&--取地址
	//sizeof--操作数的类型长度
	//~--对一个数的二进制按位取反
	//---前置，后置--
	//++--前置，后置++
	//*--间接访问操作类型

	//演示一下！的使用
	//int a;
	//if (a)
	//{
	//	//a为真执行
	//}
	//if (!a)
	//{
	//	//不为a执行
	//}
	int a = 10;
	int arr[10] = { 0 };

	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(arr));//10*4,计算数组的大小，大小是字节
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组的元素个数
	printf("%d\n", sz);

	return 0;
}
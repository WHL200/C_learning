#include<stdio.h>
int main()
{
	//  ~的使用
	//int a = 0;

	//printf("%d\n", ~a);
	
	
	//对a的二进制进行取反
	//	整数在内存中以补码的形式储存
	//	整数的原码，反码，补码一样，
	// 最高位是表示正负，1为负，0为整。
	//	负数的计算： - 1
	//	1000000000000001--原码
	//	1111111111111110--反码
	//	1111111111111111--补码
	// 
	//	0的计算:0000000000000000--补码
	//	取反：1111111111111111--取反的补码
	//	反码 = 补码 - 1 : 111111111111110；
	//	反码变原码符号不变
	//	原码：1000000000000001
	//	以十进制打印出来就是 - 1


	//int a = 3,b=0,c=a&&b;//逻辑与，符号两边为非0,整个为非0；若有一个为0则整个为0
	//int a = 3, b = 0, c = a || b;//表示逻辑或，符号两边都为0整个为0；若有一个为0则整个不为0
	//printf("%d\n", c);

	//int a = 0, b = 4, max = 0;
	////if (a > b)
	////{
	////	max = a;
	////}
	////else
	////{
	////	max = b;
	////}
	//max=a > b ? a: b;//三目操作符，若a>b则整个结果为a;若a！>b则整个结果为b
	//printf("%d\n", max);
	//return 0;



	//逗号操作符
	//int a = 0, b = 2, c = 3, d = 5,e=0;
	//printf("%d\n", e=(b=a+b,c=b+c,d=c+d,e=d+e));
	////逗号操作符，从左往右依次计算，整个表达式的结果为最后一个表达式的结果
	//return 0;

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 },i=0;

	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d\n",arr[i]);
	//	
	//}
	//return 0;
	//函数调用符，在函数名的（）表示调用函数
}
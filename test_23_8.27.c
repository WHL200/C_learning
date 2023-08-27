#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//输入十个数计算平均数
//	//输入
//	//计算
//	//输出
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	float ave = 0;
//	ave = sum / 10;
//	printf("Average=%.2f", ave);
//	return 0;
//}
//#include<stdio.h>
//int a = 2022;
//extern a;
//int main()
//{
//
//		//int a = 2023;
//
//	printf("a=%d\n", a);
//	return 0;
//}

//常量
//#include<stdio.h>
//int main()
//{
//	//1.字符常量
//	3.14;
//    'a';
//    "abcd";
   //2.const修饰的常变量
	//const int n = 3;
	//int arr[10] = { 0 };
	//int arr[n] = { 0 };
	//
	//printf("%d\n", n);
	//3.#define定义的标识符常量
//#define n 2000
//	int arr[10] = { 0 };
//	int arr[n] = { 0 };
//	printf("%d", n);
	//4.枚举常量
	//enum Sex {
	//	male=5,
	//    female,
	//    secert

	//};
	//printf("%d\n", male);
	//printf("%d\n", female);
	//printf("%d\n", secert);

//	return 0;
//}




//字符串，一串由双引号扩起来的字符，以\0为标志结束
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = { 'a', 'b', 'c','\0'};
//	//计算字符串的长度strlen()计算字符串大小sizeof()
//	int len = strlen(arr2);
//	int size = sizeof(arr1);
//	printf("%d\n", len);
//	printf("%d\n", size);
//	printf("%s\n",arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//转义字符
#include<stdio.h>
//int main()
//{
	//printf("(are you ok??)\n");
	//printf("c.\test\test.c\n"); 
	//	printf("c.\very\very.c");
	//	printf("\a\a\a\n");
	//	printf("%s","\\\'\n");
	//	printf("aka\beat\n");
	//	printf("a\rdsaa");
//	printf("%c\n", '\130');//130的八进制是88，而88的ASCII值是X，\dddd代表八进制
//	printf("%d\n", 'X');
//	printf("%c\n", '\101');//A-65-8进制101
//	printf("%c\n", '\x41');//A-65-16进制41，\xdd代表十六进制
//
//		return 0;
//}


//下边两行字符串长度是多少？
//#include<stdio.h>
//int main()
//{
	//printf("%d\n", strlen("abcdf"));
	//\32被解析为一个转义字符
	//printf("%d\n", strlen("c:\test\328\test.c"));//\t,\32被看作一个转义字符
	
//}


//选择语句
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("welcome join us!!!\a\n");
//	printf("please enter 0 or 1:\n");
//	scanf("%d", &input);//存入一个数
//	if (input == 0)//选择0或者1输出不同结果
//	{
//		printf("Hello,who are you?\n");
//	}
//	else
//	{
//		printf("Please introduce yourself.");
//	}
//	return 0;
//}


//循环语句，假如你每天写代码，写到30000行代码就能找到很好的工作
#include<stdio.h>
int main()
{
	int line = 0;
	while (line < 3000)
	{
		printf("写代码：%d\n", line);
		line++;
	}
	if (line = 30000)
	{
		printf("You will get a good job!");
	}
	return 0;
}
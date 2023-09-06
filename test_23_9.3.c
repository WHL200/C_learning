#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//#define z 1.414
//int main()
//{
//	/*double x = 0,y=0;
//	scanf("%lf", &x);
//	y = 1 /(1 + 2.0* x) - (1.0 - x) /(1.0 + x);
//	printf("%lf\n", y);
//	printf("%lf\n",(2*x*x)/((1+2*x)*(1+x)) );
//	printf("%lf\n", sqrt(x + 1) - sqrt(x));
//	printf("%lf\n", 1 / (sqrt( + 1) + sqrt(x)));*/
//	printf("%lf\n", 1 / pow((z + 1.0),6));
//	printf("%lf\n", pow((3 - 2 * z),3));
//	printf("%lf\n", 1 / pow((3 + 2 * z), 3));
//	printf("%lf\n", 99 - 70 * z);
//	printf("%lf\n", pow((z - 1), 6));
//
//	return 0;
//}
//int main()
//{
//	int caipiao=0;
//	printf("今天买了一张彩票\n");
//	scanf("%d", &caipiao);
//	if (caipiao ==1)
//	{
//		printf("娶白富美");
//	}
//	else
//	{
//		printf("继续买彩票");
//	}
//	return 0;
//}
//while 循环在while循环中，break用于永久终止循环
//在while循环中，continue的作用是跳过本次循环continue的代码，直接去判断是否进入下一次循环

//

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char ch[20] = { 0 }, dh[20] = { 0 }, eh[20] = { 0 };
//	char i,m,n,o;
//	int num=0;
//	printf("请输入4位数密码：");
//	scanf("%s", ch);
//	//getchar();//清理缓冲区,处理\n,只能清理一个字符
//	while ((m = getchar() )!= '\n')
//	{
//		;
//	}
//
//	printf("请确认密码：Y/N\n");
//	scanf("%c", &i);
//	getchar();
//
//	if (i == 'Y')
//	{
//		printf("确认密码成功！\n");
//		if (strcmp(ch,"1234")==0)
//
//		{
//			printf("密码正确！");
//		}
//		else
//		{
//			printf("密码错误！\n");
//			//for (num = 1; num < 3; num++)
//			{
//				printf("你还有2次机会\n请输入密码：");
//				scanf("%s",dh );
//				while ((m = getchar()) != '\n')
//				{
//					;
//				}
//				printf("请确认密码：Y/N\n");
//				scanf("%c", &n);
//				if (n == 'Y')
//				{
//					printf("密码确认成功！\n");
//					if (strcmp(dh, "1234") == 0)
//					{
//						printf("密码正确！");
//
//					}
//					else
//					{
//						printf("密码错误！\n");
//						{
//							printf("你还有最后1次机会！\n请输入密码：");
//							scanf("%s", dh);
//							while ((m = getchar()) != '\n')
//							{
//								;
//							}
//							printf("请确认密码：Y/N\n");
//							scanf("%c", &o);
//							if (o == 'Y')
//							{
//								printf("密码确认成功！\n");
//								if (strcmp(dh, "1234") == 0)
//								{
//									printf("密码正确！");
//								}
//								else
//								{
//									printf("密码错误！我已经打110了！");
//								}
//							}
//						}
//					}
//				}
//
//			}
//
//		}
//
//		
//	}
//	else
//	{
//		printf("请重新确认密码！");
//	}
//
//	
//
//	return 0;
//
//}


int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')//ascii码这两个数中是数字字符
			continue;
		else
			putchar(ch);
	}
	return 0;
}
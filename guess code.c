#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char ch[20] = { 0 }, dh[20] = { 0 }, eh[20] = { 0 };
	char i,m,n,o;
	int num=0;
	printf("请输入4位数密码：");
	scanf("%s", ch);
	//getchar();//清理缓冲区,处理\n,只能清理一个字符
	while ((m = getchar() )!= '\n')
	{
		;
	}

	printf("请确认密码：Y/N\n");
	scanf("%c", &i);
	getchar();

	if (i == 'Y')
	{
		printf("确认密码成功！\n");
		if (strcmp(ch,"1234")==0)

		{
			printf("密码正确！");
		}
		else
		{
			printf("密码错误！\n");
			//for (num = 1; num < 3; num++)
			{
				printf("你还有2次机会\n请输入密码：");
				scanf("%s",dh );
				while ((m = getchar()) != '\n')
				{
					;
				}
				printf("请确认密码：Y/N\n");
				scanf("%c", &n);
				if (n == 'Y')
				{
					printf("密码确认成功！\n");
					if (strcmp(dh, "1234") == 0)
					{
						printf("密码正确！");

					}
					else
					{
						printf("密码错误！\n");
						{
							printf("你还有最后1次机会！\n请输入密码：");
							scanf("%s", dh);
							while ((m = getchar()) != '\n')
							{
								;
							}
							printf("请确认密码：Y/N\n");
							scanf("%c", &o);
							if (o == 'Y')
							{
								printf("密码确认成功！\n");
								if (strcmp(dh, "1234") == 0)
								{
									printf("密码正确！");
								}
								else
								{
									printf("密码错误！我已经打110了！");
								}
							}
						}
					}
				}

			}

		}

		
	}
	else
	{
		printf("请重新确认密码！");
	}

	

	return 0;

}
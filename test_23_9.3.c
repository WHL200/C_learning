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
//	printf("��������һ�Ų�Ʊ\n");
//	scanf("%d", &caipiao);
//	if (caipiao ==1)
//	{
//		printf("Ȣ�׸���");
//	}
//	else
//	{
//		printf("�������Ʊ");
//	}
//	return 0;
//}
//while ѭ����whileѭ���У�break����������ֹѭ��
//��whileѭ���У�continue����������������ѭ��continue�Ĵ��룬ֱ��ȥ�ж��Ƿ������һ��ѭ��

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
//	printf("������4λ�����룺");
//	scanf("%s", ch);
//	//getchar();//��������,����\n,ֻ������һ���ַ�
//	while ((m = getchar() )!= '\n')
//	{
//		;
//	}
//
//	printf("��ȷ�����룺Y/N\n");
//	scanf("%c", &i);
//	getchar();
//
//	if (i == 'Y')
//	{
//		printf("ȷ������ɹ���\n");
//		if (strcmp(ch,"1234")==0)
//
//		{
//			printf("������ȷ��");
//		}
//		else
//		{
//			printf("�������\n");
//			//for (num = 1; num < 3; num++)
//			{
//				printf("�㻹��2�λ���\n���������룺");
//				scanf("%s",dh );
//				while ((m = getchar()) != '\n')
//				{
//					;
//				}
//				printf("��ȷ�����룺Y/N\n");
//				scanf("%c", &n);
//				if (n == 'Y')
//				{
//					printf("����ȷ�ϳɹ���\n");
//					if (strcmp(dh, "1234") == 0)
//					{
//						printf("������ȷ��");
//
//					}
//					else
//					{
//						printf("�������\n");
//						{
//							printf("�㻹�����1�λ��ᣡ\n���������룺");
//							scanf("%s", dh);
//							while ((m = getchar()) != '\n')
//							{
//								;
//							}
//							printf("��ȷ�����룺Y/N\n");
//							scanf("%c", &o);
//							if (o == 'Y')
//							{
//								printf("����ȷ�ϳɹ���\n");
//								if (strcmp(dh, "1234") == 0)
//								{
//									printf("������ȷ��");
//								}
//								else
//								{
//									printf("����������Ѿ���110�ˣ�");
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
//		printf("������ȷ�����룡");
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
		if (ch < '0' || ch>'9')//ascii�������������������ַ�
			continue;
		else
			putchar(ch);
	}
	return 0;
}
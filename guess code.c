#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char ch[20] = { 0 }, dh[20] = { 0 }, eh[20] = { 0 };
	char i,m,n,o;
	int num=0;
	printf("������4λ�����룺");
	scanf("%s", ch);
	//getchar();//��������,����\n,ֻ������һ���ַ�
	while ((m = getchar() )!= '\n')
	{
		;
	}

	printf("��ȷ�����룺Y/N\n");
	scanf("%c", &i);
	getchar();

	if (i == 'Y')
	{
		printf("ȷ������ɹ���\n");
		if (strcmp(ch,"1234")==0)

		{
			printf("������ȷ��");
		}
		else
		{
			printf("�������\n");
			//for (num = 1; num < 3; num++)
			{
				printf("�㻹��2�λ���\n���������룺");
				scanf("%s",dh );
				while ((m = getchar()) != '\n')
				{
					;
				}
				printf("��ȷ�����룺Y/N\n");
				scanf("%c", &n);
				if (n == 'Y')
				{
					printf("����ȷ�ϳɹ���\n");
					if (strcmp(dh, "1234") == 0)
					{
						printf("������ȷ��");

					}
					else
					{
						printf("�������\n");
						{
							printf("�㻹�����1�λ��ᣡ\n���������룺");
							scanf("%s", dh);
							while ((m = getchar()) != '\n')
							{
								;
							}
							printf("��ȷ�����룺Y/N\n");
							scanf("%c", &o);
							if (o == 'Y')
							{
								printf("����ȷ�ϳɹ���\n");
								if (strcmp(dh, "1234") == 0)
								{
									printf("������ȷ��");
								}
								else
								{
									printf("����������Ѿ���110�ˣ�");
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
		printf("������ȷ�����룡");
	}

	

	return 0;

}
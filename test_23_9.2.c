#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//С�ɻ�

//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    * *     \n");
//	printf("    * *     \n");
//
//	return 0;
//}


//�ж�һ�����ܷ�5����
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 5 == 0)
//	{
//		printf("�����ܱ�5����");
//	}
//	else
//	{
//		printf("�������ܱ�5����");
//	}
//	return 0;
//}

//int main()
//{
//	float age=0;
//	scanf("%f", &age);
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 25)
//		printf("������\n");
//	else if (age >= 25 && age < 40)
//		printf("������");
//	else if (age >= 40 && age < 60)
//		printf("�е�������");
//	else if (age >= 60 && age < 80)
//		printf("������");
//	else if (age >= 80)
//		printf("�ر���");
//
//
//	return 0;
//}
//int main()
//{
//	int a = 0, b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else//�������if��ƥ��
//		printf("haha\n");
//	return 0;
//}


//struct stu
//{
//	char name[20];
//	int age;
//	char gender[20];
//};
//int main()
//{
//	struct stu s={ "Jack",18,"man"};
//	printf("name age gender\n");
//	printf("---------\n");
//	printf("%s %d %s",s.name,s.age,s.gender );
//	return 0;
//}

//�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("����");
//
//	}
//	else
//	{
//		printf("ż��");
//	}
//	return 0;
//}

//���100�ڵ�����
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//���������


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//������Ҳ���������γ���
//	{
//	case 1:printf("����һ"); break;//case �������γ���
//	case 2:printf("���ڶ�"); break;//case ����ڣ�break �ǳ���
//	case 3:printf("������"); break;
//	case 4:printf("������"); break;
//	case 5:printf("������"); break;
//	case 6:printf("������"); break;
//	case 7:printf("������"); break;
//
//
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("gongzuori");
//		break;
//	case 6:
//	case 7:
//		printf("xiuxiri");
//	}
//	return 0;
//}
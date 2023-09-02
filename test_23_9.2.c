#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//小飞机

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


//判断一个数能否被5整除
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 5 == 0)
//	{
//		printf("该数能被5整除");
//	}
//	else
//	{
//		printf("该数不能被5整除");
//	}
//	return 0;
//}

//int main()
//{
//	float age=0;
//	scanf("%f", &age);
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 25)
//		printf("青年人\n");
//	else if (age >= 25 && age < 40)
//		printf("中年人");
//	else if (age >= 40 && age < 60)
//		printf("有点老年人");
//	else if (age >= 60 && age < 80)
//		printf("老年人");
//	else if (age >= 80)
//		printf("特别老");
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
//	else//与最近的if相匹配
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

//判断一个数是否为奇数
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("奇数");
//
//	}
//	else
//	{
//		printf("偶数");
//	}
//	return 0;
//}

//输出100内的奇数
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

//输出星期天


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//括号中也必须是整形常量
//	{
//	case 1:printf("星期一"); break;//case 后面整形常量
//	case 2:printf("星期二"); break;//case 是入口，break 是出口
//	case 3:printf("星期三"); break;
//	case 4:printf("星期四"); break;
//	case 5:printf("星期五"); break;
//	case 6:printf("星期六"); break;
//	case 7:printf("星期天"); break;
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
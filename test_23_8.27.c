#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	//����ʮ��������ƽ����
//	//����
//	//����
//	//���
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

//����
//#include<stdio.h>
//int main()
//{
//	//1.�ַ�����
//	3.14;
//    'a';
//    "abcd";
   //2.const���εĳ�����
	//const int n = 3;
	//int arr[10] = { 0 };
	//int arr[n] = { 0 };
	//
	//printf("%d\n", n);
	//3.#define����ı�ʶ������
//#define n 2000
//	int arr[10] = { 0 };
//	int arr[n] = { 0 };
//	printf("%d", n);
	//4.ö�ٳ���
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




//�ַ�����һ����˫�������������ַ�����\0Ϊ��־����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = { 'a', 'b', 'c','\0'};
//	//�����ַ����ĳ���strlen()�����ַ�����Сsizeof()
//	int len = strlen(arr2);
//	int size = sizeof(arr1);
//	printf("%d\n", len);
//	printf("%d\n", size);
//	printf("%s\n",arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



//ת���ַ�
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
//	printf("%c\n", '\130');//130�İ˽�����88����88��ASCIIֵ��X��\dddd����˽���
//	printf("%d\n", 'X');
//	printf("%c\n", '\101');//A-65-8����101
//	printf("%c\n", '\x41');//A-65-16����41��\xdd����ʮ������
//
//		return 0;
//}


//�±������ַ��������Ƕ��٣�
//#include<stdio.h>
//int main()
//{
	//printf("%d\n", strlen("abcdf"));
	//\32������Ϊһ��ת���ַ�
	//printf("%d\n", strlen("c:\test\328\test.c"));//\t,\32������һ��ת���ַ�
	
//}


//ѡ�����
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("welcome join us!!!\a\n");
//	printf("please enter 0 or 1:\n");
//	scanf("%d", &input);//����һ����
//	if (input == 0)//ѡ��0����1�����ͬ���
//	{
//		printf("Hello,who are you?\n");
//	}
//	else
//	{
//		printf("Please introduce yourself.");
//	}
//	return 0;
//}


//ѭ����䣬������ÿ��д���룬д��30000�д�������ҵ��ܺõĹ���
#include<stdio.h>
int main()
{
	int line = 0;
	while (line < 3000)
	{
		printf("д���룺%d\n", line);
		line++;
	}
	if (line = 30000)
	{
		printf("You will get a good job!");
	}
	return 0;
}
//�ؼ�����c�涨�ģ������Լ�����
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	////һЩ������Ƶ��ʹ�õ����ݷ���Ĵ���������߼���Ч��
//	// register int a = 100;//���齫���ݷ���Ĵ���
//	//printf("%d", a);
//	//return 0;
//}
//typedef unsigned int u_int;//typedef--������������һЩ���Ĺؼ��֣���Ҫ����������ʹ��
//int main()
//{
//	unsigned int a = 100;
//	u_int b = 200;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//void test()
//{
//	static int a = 0;//static���ξֲ������ı��˾ֲ������ĵ���������
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}




//extern int a;//�ⲿ����ȫ�ֱ���
//int main()
//{
//
//	printf("%d", a);
//	return 0;
//}

//static�����ⲿ������ȫ�ֱ������ı����ⲿ�������ԣ�ֻ�����Լ���Դ�ļ���ʹ��
//extern int add(int x,int y);
//int main()
//{
//	int x = 20, y = 10;
//	int sum=add(x, y);
//	printf("%d", sum);
//	return 0;
//}


//define���峣���ͷ���
//#define max 100
//int main()
//{
//	printf("%d", max);
//	return 0;
//}
//define�����



//define �����
//#define add(x,y) (x+y)
//int main()
//{
//	printf("%d\n", 4*add(5, 6));
//	return 0;
//}


//ָ��
//int main()
//{
//	int a = 10;//int ��С��4byte�����ڴ��һ���ĵ�Ԫ��С��1byte������1��intռ4����Ԫ
//	//*��ָ�룬˵����pa��ָ�������int��˵��ָ����������ͣ���ͬ��ָ���������Ӧ��ʹ�ò�ͬ�Ĺؼ���
//	//ָ����������洢��ַ
//	int* pa = &a;//��&ȡ��ַ����ȡ����int��ռ��4����Ԫ�е�1����Ԫ�ĵ�ַ��*paָ�����
//	printf("%p\n", &a);//%p��ӡ��ַ
//	int ch = 'c';
//	char* ca = &ch;
//	printf("%p", &ch);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p= &a;
//	*p= 20;//*�����ò�����*pͨ��p�ĵ�ַ���ҵ�a����a��ֵ��a��Ȼռ4byte����20Ҳռ4byteҲ����˵��*pѰ�ҵ�һ����Ԫ�ĵ�ַ�����ν������������Ԫ��ַ����20ʹ��
//	printf("%d", a);
//	return 0;
//}

//��ͬ����ָ��Ĵ�С
//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//
//	return 0;
//}

//�ṹ����������������˽⸴�Ӷ���
struct stu 
{
	char name[20];
	int age;
	double score;
};
//int main()
//{
//	struct stu s={ "С��",18,20};//�ṹ������ĳ�ʼ��
//	printf("1.%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
//	struct stu* p = &s;
//	printf("2.%s %d %lf\n", (*p).name, (*p).age, (*p).score);
//	printf("3.%s %d %lf\n", p->name, p->age, p->score);///->ǰ����ָ��
//	return 0;
//}
//#define n 10
//int main()
//{
//
//		int i;
//	int arr[n] = { 0 };
//	for (i = 0;i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\121"));
//	return 0;
//}


//�Ƚ��������Ĵ�С
//int main()
//{
//	float a, b,c;
//	printf("���������������Ƚϴ�С\n");
//	scanf("%f%f", &a, &b);
//	c = a > b ? a : b;
//	printf("%f", c);
//	return 0;
//}
//

//������һ�㲻��ȫ��д
//void max(double(x), double(y))
//{
//	if (x > y)
//		printf("%lf", x);
//	else
//		printf("%lf", y);
//}
//int main()
//{
//	double a, b;
//	scanf("%lf%lf", &a, &b);
//	 max(a, b);
//	
//	return 0;
//}

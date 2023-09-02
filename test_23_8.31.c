//关键字是c规定的，不能自己定义
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	////一些大量、频繁使用的数据放入寄存器可以提高计算效率
//	// register int a = 100;//建议将数据放入寄存器
//	//printf("%d", a);
//	//return 0;
//}
//typedef unsigned int u_int;//typedef--用来重新命名一些长的关键字，需要在主函数外使用
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
//	static int a = 0;//static修饰局部变量改变了局部变量的的生命周期
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




//extern int a;//外部声明全局变量
//int main()
//{
//
//	printf("%d", a);
//	return 0;
//}

//static修饰外部函数和全局变量都改变了外部链接属性，只能在自己的源文件下使用
//extern int add(int x,int y);
//int main()
//{
//	int x = 20, y = 10;
//	int sum=add(x, y);
//	printf("%d", sum);
//	return 0;
//}


//define定义常量和符号
//#define max 100
//int main()
//{
//	printf("%d", max);
//	return 0;
//}
//define定义宏



//define 定义宏
//#define add(x,y) (x+y)
//int main()
//{
//	printf("%d\n", 4*add(5, 6));
//	return 0;
//}


//指针
//int main()
//{
//	int a = 10;//int 大小是4byte，而内存的一个的单元大小是1byte，所以1个int占4个单元
//	//*是指针，说明是pa是指针变量，int是说明指针变量的类型，不同的指针变量类型应该使用不同的关键字
//	//指针变量用来存储地址
//	int* pa = &a;//而&取地址符，取的是int所占的4个单元中第1个单元的地址，*pa指针变量
//	printf("%p\n", &a);//%p打印地址
//	int ch = 'c';
//	char* ca = &ch;
//	printf("%p", &ch);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p= &a;
//	*p= 20;//*解引用操作，*p通过p的地址来找到a，给a赋值，a依然占4byte，而20也占4byte也就是说，*p寻找第一个单元的地址，依次将后面的三个单元地址赋给20使用
//	printf("%d", a);
//	return 0;
//}

//不同类型指针的大小
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

//结构体变量，让我们能了解复杂对象
struct stu 
{
	char name[20];
	int age;
	double score;
};
//int main()
//{
//	struct stu s={ "小明",18,20};//结构体变量的初始化
//	printf("1.%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
//	struct stu* p = &s;
//	printf("2.%s %d %lf\n", (*p).name, (*p).age, (*p).score);
//	printf("3.%s %d %lf\n", p->name, p->age, p->score);///->前面是指针
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


//比较两个数的大小
//int main()
//{
//	float a, b,c;
//	printf("请输入两个数来比较大小\n");
//	scanf("%f%f", &a, &b);
//	c = a > b ? a : b;
//	printf("%f", c);
//	return 0;
//}
//

//函数名一般不用全大写
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

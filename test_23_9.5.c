#include<stdio.h>
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
int main()
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		if (i == 5)
			continue;//����5
		//break;����forѭ��
		printf("%d\n", i);
	}
	return 0;
}
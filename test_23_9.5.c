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
			continue;//Ìø¹ý5
		//break;Ìø³öforÑ­»·
		printf("%d\n", i);
	}
	return 0;
}
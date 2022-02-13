#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	for (a = 1; a <= 100; a++)
	{
		if (a % 5 == 0)
			continue;
		printf(" %d", a);
	}
	printf("THE END");
}
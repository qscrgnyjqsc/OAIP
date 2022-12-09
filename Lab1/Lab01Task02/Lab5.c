#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int K, x;
	printf("Enter an integer \n");
	scanf("%d", &K);
	x = K % 2;

	if (x == 0)
	{
		printf("Number is even \n");
	}
	else
	{
		printf("Number is odd \n");
	}
	return 0;
}

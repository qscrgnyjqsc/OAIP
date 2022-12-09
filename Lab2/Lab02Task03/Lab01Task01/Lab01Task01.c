#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int A;
	int B;
	int counter = 0;

	printf("Enter two natural numbers A and B: ");
	scanf("%d %d", &A, &B);

	if (A <= B)
	{
		printf("Error! A should be greater than B");
		return 0;
	}

	while (A >= B)
	{
		counter++;
		A -= B;
	}

	printf("Number of segments B placed on segment A: %d", counter);
	return 0;
}
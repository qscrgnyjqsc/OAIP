#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>


int main()
{
	srand(time(NULL));
	int matrix_dimention = 6;
	int matrix[6][6];
	int choice = -1;

	printf("1 - random fill\n");
	printf("2 - manual fill\n");
	printf("Choice: ");
	scanf("%d", &choice);
	
	if (choice == 1)
	{	
		printf("Matrix:\n");
		for (int row = 0; row < matrix_dimention; row++) 
		{
			for (int column = 0; column < matrix_dimention; column++)
			{
				matrix[row][column] = (int)((double)rand() / RAND_MAX * 200 - 100);
				printf("%d ", matrix[row][column]);
			}
			printf("\n");
		}
	}
	else 
	{
		if (choice == 2)
		{
			printf("Please, enter matrix values:\n");
			for (int row = 0; row < matrix_dimention; row++) {
				printf("Matrix row %d: ", row);
				scanf("%d %d %d %d %d %d", &matrix[row][0], &matrix[row][1], &matrix[row][2], &matrix[row][3], &matrix[row][4], &matrix[row][5]);
			}

			printf("Matrix:\n");
			for (int row = 0; row < matrix_dimention; row++) 
			{
				for (int column = 0; column < matrix_dimention; column++)
				{
					printf("%d ", matrix[row][column]);
				}
				printf("\n");
			}
		}
		else
		{
			printf("Error. Incorrect choice value");
		}
	}

	int sum = 0;
	int min;
	int max;

	for (int row = 0; row < matrix_dimention; row++) {
		min = matrix[row][0];
		max = matrix[row][0];
		if (row % 2 == 0)
		{
			for (int column = 0; column < matrix_dimention; column++)
			{
				if (max < matrix[row][column])
				{
					max = matrix[row][column];
				}
			}
			sum += max;
		}
		else
		{
			for (int column = 0; column < matrix_dimention; column++)
			{
				if (min > matrix[row][column])
				{
					min = matrix[row][column];
				}
			}
			sum += min;
		}
	}

	printf("Sum: %d", sum);
}

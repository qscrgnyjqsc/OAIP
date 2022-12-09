#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>


int main()
{
	srand(time(NULL));
	int matrix[4][4];
	int matrix_dimension = sizeof(matrix) / sizeof(matrix[0]);
	int choice = -1;

	printf("1 - random fill\n");
	printf("2 - manual fill\n");
	printf("Choice: ");
	scanf("%d", &choice);

	if (choice == 1)
	{
		printf("\nMatrix:\n");
		for (int row = 0; row < matrix_dimension; row++)
		{
			for (int column = 0; column < matrix_dimension; column++)
			{
				matrix[row][column] = (int)((double)rand() / RAND_MAX * 20 - 10);
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
			for (int row = 0; row < matrix_dimension; row++) {
				printf("Matrix row %d: ", row);
				for (int column = 0; column < matrix_dimension; column++)
				{
					scanf("%d", &matrix[row][column]);
				}
			}

			printf("\nMatrix:\n");
			for (int row = 0; row < matrix_dimension; row++)
			{
				for (int column = 0; column < matrix_dimension; column++)
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
	
	int sum_of_elements = 0;
	for (int row = matrix_dimension / 2; row < matrix_dimension; row++)
	{
		for (int column = matrix_dimension - row - 1; column <= row; column++)
		{
			sum_of_elements += matrix[row][column];
		}
	}

	printf("\nSum = %d \n", sum_of_elements);
}

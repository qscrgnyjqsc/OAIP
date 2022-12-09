#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>


int main()
{
	srand(time(NULL));
	int matrix[5][5];
	int matrix_dimension =  sizeof(matrix) / sizeof(matrix[0]);
	int choice = -1;

	printf("1 - random fill\n");
	printf("2 - manual fill\n");
	printf("Choice: ");
	scanf("%d", &choice);
	
	if (choice == 1)
	{	
		printf("Matrix:\n");
		for (int row = 0; row < matrix_dimension; row++)
		{
			for (int column = 0; column < matrix_dimension; column++)
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
			for (int row = 0; row < matrix_dimension; row++) {
				printf("Matrix row %d: ", row);
				for (int column = 0; column < matrix_dimension; column++)
				{
					scanf("%d", &matrix[row][column]);
				}
			}

			printf("Matrix:\n");
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

	int is_ascending_order = 1;
	int row_with_ascending_order = -1;

	for (int row = 0; row < matrix_dimension; row++) 
	{
		is_ascending_order = 1;
		for (int column = 0; column < matrix_dimension - 1; column++)
		{
			if (matrix[row][column] > matrix[row][column + 1])
			{
				is_ascending_order = 0;
				continue;
			}
		}
		if (is_ascending_order == 1)
		{
			row_with_ascending_order = row;
			break;
		}
	}

	if (row_with_ascending_order > -1)
	{	
		int tmp;
		for (int column = 0; column < matrix_dimension / 2; column++)
		{
			tmp = matrix[row_with_ascending_order][column];
			matrix[row_with_ascending_order][column] = matrix[row_with_ascending_order][matrix_dimension - column - 1];
			matrix[row_with_ascending_order][matrix_dimension - column - 1] = tmp;
		}

		printf("\nNew matrix:\n");
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
		printf("\nNo rows all elements of which are sorted in ascending order\n");
	}
}

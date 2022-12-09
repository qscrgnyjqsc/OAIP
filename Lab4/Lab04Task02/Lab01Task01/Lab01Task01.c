#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>


int main()
{
	srand(time(NULL));
	float array_of_floats[200];
	int array_size = 0;
	int choice = 0;
	while (1)
	{
		printf("%s", "Please, enter array size (from 0 to 100):  ");
		scanf("%d", &array_size);
		if (array_size > 0 && array_size < 101)
		{
			break;
		}
		else
		{
			printf("%s", "Incorrect array size: Array size should be greater than 0 and less than 101. Please, try again\n");
		}
	}

	while (1)
	{
		printf("%s", "Fill array with random values or enter from keyboard:\n");
		printf("% s", "\t1 - random values generation\n");
		printf("%s", "\t2 - enter manually\n");
		scanf("%d", &choice);
		if (choice == 1 || choice == 2)
		{
			break;
		}
		else
		{
			printf("%s", "Incorrent choice value/ Please, try again\n");
		}
	}

	if (choice == 1)
	{
		for (int i = 0; i < array_size; i++)
		{
			array_of_floats[i] = (double)rand() / RAND_MAX * 200 - 100;
			printf("%f ", array_of_floats[i]);
		}
	}
	else
	{
		for (int i = 0; i < array_size; i++)
		{
			printf("array_of_floats[%d] = ", i);
			scanf("%f", &array_of_floats[i]);
		}
	}

	int count_of_negative = 0;
	int i = 0;

	while (i < (array_size + count_of_negative))
	{
		if (array_of_floats[i] < 0)
		{
			count_of_negative++;
			for (int j = (array_size + count_of_negative) - 1 ; j > i; j--)
			{
				array_of_floats[j] = array_of_floats[j - 1];
			}
			i++;
		}
		i++;
	}

	printf("\nNew array:\n");
	for (int i = 0; i < array_size + count_of_negative; i++)
	{
		printf("%f ", array_of_floats[i]);
	}
}

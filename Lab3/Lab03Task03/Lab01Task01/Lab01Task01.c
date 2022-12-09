#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> 
#include <time.h>


int main()
{
	srand(time(NULL));
	int first_array[100];
	int first_array_size = 0;
	int choice = 0;
	while (1)
	{
		printf("%s", "Please, enter first array size (from 0 to 100):  ");
		scanf("%d", &first_array_size);
		if (first_array_size > 0 && first_array_size < 101)
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
		int start_random = (int)((double)rand() / RAND_MAX * 200 - 100);
		int step_random = 4;
		for (int i = 0; i < first_array_size; i++)
		{
			first_array[i] = start_random + step_random * i;
			printf("%d ", first_array[i]);
		}
	}
	else
	{
		for (int i = 0; i < first_array_size; i++)
		{
			printf("first_array[%d] = ", i);
			scanf("%d", &first_array[i]);
		}
	}


	int second_array[100];
	int second_array_size = 0;
	choice = 0;

	while (1)
	{
		printf("%s", "\nPlease, enter second array size (from 0 to 100):  ");
		scanf("%d", &second_array_size);
		if (second_array_size > 0 && second_array_size < 101)
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
		int start_random = (int)((double)rand() / RAND_MAX * 200 - 100);
		int step_random = -7;
		for (int i = 0; i < second_array_size; i++)
		{
			second_array[i] = start_random + step_random * i;
			printf("%d ", second_array[i]);
		}
	}
	else
	{
		for (int i = 0; i < second_array_size; i++)
		{
			printf("second_array[%d] = ", i);
			scanf("%d", &second_array[i]);
		}
	}
	
	printf("\n");

	printf("First array: ");
	for (int i = 0; i < first_array_size; i++)
	{
		printf("%d ", first_array[i]);
	}

	printf("\n");

	printf("Second array: ");
	for (int i = 0; i < second_array_size; i++)
	{
		printf("%d ", second_array[i]);
	}

	printf("\n");

	int union_array[200];
	int union_array_size = first_array_size + second_array_size;
	int i = 0;
	int j = second_array_size - 1;
	int k = 0;

	while (i < first_array_size && j > -1)
	{
		if (first_array[i] <= second_array[j])
		{
			union_array[k] = first_array[i];
			k++;
			i++;
		}
		else
		{
			union_array[k] = second_array[j];
			k++;
			j--;
		}
	}

	if (i == first_array_size)
	{
		for (int i = j; i > -1; i--)
		{
			union_array[k] = second_array[i];
			k++;
		}
	}
	else
	{
		for (int j = i; j < first_array_size; j++)
		{
			union_array[k] = first_array[j];
			k++;
		}
	}

	printf("\nUnion array:\n");
	for (int i = 0; i < k; i++)
	{
		printf("%d ", union_array[i]);
	}
	return 0;
}

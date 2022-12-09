#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

int main()
{
	float array_of_floats[100];
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

	float max_element = array_of_floats[0];
	for (int i = 1; i < array_size; i++)
	{
		if (array_of_floats[i] > max_element)
		{
			max_element = array_of_floats[i];
		}
	}
	printf("\nMax element: %f", max_element);

	float sum_of_elements_before_last_positive = 0;
	int is_negative_flag = 1;
	for (int i = array_size - 1; i > -1; i--)
	{
		if (array_of_floats[i] > 0 && is_negative_flag == 1)
		{
			sum_of_elements_before_last_positive += array_of_floats[i];
			is_negative_flag = 0;
		}
		else
		{
			if (is_negative_flag == 0)
			{
				sum_of_elements_before_last_positive += array_of_floats[i];
			}
		}
	}
	printf("\nSum of elements before last positive: %f", sum_of_elements_before_last_positive);
}

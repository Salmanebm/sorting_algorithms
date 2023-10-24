#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * _swap - swaps two integer values
 *
 * @a: a pointer to int 1
 * @b: a pointer ot int 2
 */
void _swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sorts an array of integers Bubble Sort
 *
 * @array: The array to be sorted.
 * @size:  The number of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				_swap(array + j, array + j + 1);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
		{
			break;
		}
	}
}

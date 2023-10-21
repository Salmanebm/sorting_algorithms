#include "sort.h"

/**
 * bubble_sort - uses the algorithm of bubble sort
 * to sort any array or list
 *
 * @array: a pointer to the unsorted array
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int swapped = 1;
	size_t i;

	if (array == NULL || size < 2)
		return;

	while (swapped == 1)
	{
		swapped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				_swab(array + i, array + i + 1);
				swapped = 1;
				print_array(array, size);
			}
		}
		
	}
}

/**
 * _swab - swabs two integer values
 * @a: a pointer to the first ineteger
 * @b: a pointer to the second integer
 */
void _swab(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

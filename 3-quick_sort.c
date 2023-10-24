#include "sort.h"

/**
 * swap - Swaps two integer values.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * This function swaps the values pointed to by 'a' and 'b'.
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * quick_sort - sorts an unsorted array using quick sort algorithm
 *
 * @array: an unsorted array
 * @size: size of the array
 */
void quick_sort(int *array, size_t size)
{
	int *pivot = &array[size - 1], *swapper, *smallest_elem;
	size_t i, j;
	int k;

	for (i = 0; i < size; i++)
	{
		if (array[i] > *pivot)
			swapper = array + i;
		j = i;
		while (array[j] > *pivot)
		{
			j++;
		}

		smallest_elem = array + j;
		for (k = *smallest_elem; k != *pivot; k++)
		{
			if (array[k] < *pivot)
			{
				swap(array + k, swapper);
				swapper++;
				print_array(array, size);
			}
		}
	}
	swap(pivot, swapper);
}

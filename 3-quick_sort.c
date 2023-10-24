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
 * partition - splits the array to smaller subarrays
 *
 * @arr: the main array
 * @first: first index
 * @last: last index
 */
int partition(int *arr, size_t size, int first, int last)
{
	int *pivot, more, less;

	more = less = first;
	pivot = arr + last;
	for (; less < last; less++)
	{
		if (arr[less] < *pivot)
		{
			if (more < less)
			{
					swap(arr + less, arr + more);
					print_array(arr, size);
			}
			more++;
		}
	}
	if (arr[more] > *pivot)
	{
		swap(arr + more, pivot);
		print_array(arr, size);
	}
	return (more);
}

/**
 * recursive_sort - sorts the subarrays recursively
 *
 * @array: the main array
 * @size: size of the array
 * @first: frst index
 * @last: last index
 */
void recursive_sort(int *array, size_t size, int first, int last)
{
	int part;

	if (last > first)
	{
		part = partition(array, size, first, last);
		recursive_sort(array, size, first, part - 1);
		recursive_sort(array, size, part + 1, last);
	}
}

/**
 * quick_sort - Sort an array of integers using the quicksort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	recursive_sort(array, size, 0, size - 1);
}

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * shell_sort - Sorts an array of integers using the Shell sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: The number of elements in the array.
 */

void shell_sort(int *array, size_t size)
{
	size_t gap, i, j;
	int tmp;

	gap = size / 2;
	while (gap != 0)
	{
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
				array[j] = array[j - gap];
			array[j] = tmp;
		}
		print_array(array, size);
		gap = (gap - 1) / 3;
	}
}

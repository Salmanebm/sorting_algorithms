#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void merge_sort(int *array, size_t size)
{	
	size_t i;

	if (size > 1)
	{
		size_t mid = size / 2;
		size_t left_size = mid;
		size_t right_size = size - mid;

		int *left;
		int *right;
		
		left = (int *)malloc((left_size + 1) * sizeof(int));
		if (left == NULL)
			return;
		for (i = 0; i < left_size; i++)
		{
			left[i] = array[i];
		}
		right = (int *)malloc((right_size + 1) * sizeof(int));
		if (right == NULL)
			return;
		for (i = 0; i < right_size; i++)
		{
			right[i] = array[mid + i];
		}
		merge_sort(left, left_size);
		merge_sort(right, right_size);
		merge_rec(array, left, left_size, right, right_size);
	}
}
void merge_rec(int *array, int *left, size_t left_size, int *right, size_t right_size)
{
	size_t i = 0, j = 0, k = 0;
	
	printf("Merging...\n");
	printf("[left]: ");
	print_array(left, left_size);
	printf("[right]: ");
	print_array(right, right_size);
	
	while (i < left_size && j < right_size)
	{
		if (left[i] <= right[j])
		{
			array[k++] = left[i++];
		}
		else
		{
			array[k++] = right[j++];
		}
	}

	while (i < left_size)
	{
		array[k++] = left[i++];
	}
	while (j < right_size)
	{
		array[k++] = right[j++];
	}
	printf("[Done]: ");
	print_array(array, left_size + right_size);
}

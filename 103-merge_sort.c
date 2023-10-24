#include <stdlib.h>
#include "sort.h"
/**
 * merge_sort - Sorts an array of integers using merge sort.
 * @array: Pointer to the array to be sorted.
 * @size: Number of elements in the array.
 */
void merge_sort(int *array, size_t size)
{	size_t i;
	if (size > 1)
	{	size_t mid = size / 2, left_size = mid, right_size = size - mid;
		int *left, *right;

		left = (int *)malloc((left_size + 1) * sizeof(int));
		for (i = 0; i < left_size; i++)
			left[i] = array[i];
		right = (int *)malloc((right_size + 1) * sizeof(int));
		for (i = 0; i < right_size; i++)
			right[i] = array[mid + i];
		merge_sort(left, left_size);
		merge_sort(right, right_size);
		merge_rec(array, left, left_size, right, right_size);	}}
/**
 * merge_rec - Merge two subarrays into one sorted array recursively.
 * @array: Pointer to the original array.
 * @l: Pointer to the left subarray.
 * @l_size: Size of the left subarray.
 * @r: Pointer to the right subarray.
 * @r_size: Size of the right subarray.
 */
void merge_rec(int *array, int *l, size_t l_size, int *r, size_t r_size)
{	size_t i = 0, j = 0, k = 0;
	printf("Merging...\n");
	printf("[left]: ");
	print_array(l, l_size);
	printf("[right]: ");
	print_array(r, r_size);
	while (i < l_size && j < r_size)
	{
		if (l[i] <= r[j])
			array[k++] = l[i++];
		else
			array[k++] = r[j++];	}
	while (i < l_size)
		array[k++] = l[i++];
	while (j < r_size)
		array[k++] = r[j++];
	printf("[Done]: ");
	print_array(array, l_size + r_size);	}

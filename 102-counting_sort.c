#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * counting_sort - Sorts an array using the counting sort algorithm
 * @array: The array to be sorted
 * @size: The size of the array
 */
void counting_sort(int *array, size_t size)
{
	size_t i;
	int M = array[0];
	int j;
	int *outputArr, *countArr;

	for (i = 1; i < size; i++)
	{
		if (array[i] > M)
		{
			M = array[i];
		}
	}
	countArr = (int *)malloc((M + 1) * sizeof(int));
	if (countArr == NULL)
		return;
	for (j = 0; j <= M; j++)
		countArr[j] = 0;
	for (i = 0; i < size; i++)
		countArr[array[i]]++;
	for (j = 0; j <= M; j++)
		countArr[j] += countArr[j - 1];
	print_array(countArr, M + 1);
	outputArr = (int *)malloc((size + 1) * sizeof(int));
	if (outputArr == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		outputArr[countArr[array[i]] - 1] = array[i];
		countArr[array[i]]--;
	}
	for (i = 0; i < size; i++)
		array[i] = outputArr[i];
	free(outputArr);
	free(countArr);
}

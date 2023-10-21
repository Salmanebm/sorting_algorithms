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
	int sort_check = 1, tmp;
	size_t i;

	while (sort_check == 1)
	{
Here:
		i = 0;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				/* print_array(array, size); */
				goto Here;
			}
			else
			{
				sort_check = 0;
			}
			i++;
		}
	}
}

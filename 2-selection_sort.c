#include "sort.h"

/**
 * selection_sort - uses the algorithm of selection sort
 * to sort any array or list
 *
 * @array: a pointer to the unsorted array
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index;
	int tmp, check_smallest, sort_check = 1, swab_check;

	while (sort_check == 1)
	{
		i = 0;
		while (i < size)
		{
			check_smallest = array[i];
			swab_check = 1;
			j = i + 1;
			while (j < size)
			{
				if (array[j] < check_smallest)
				{
					check_smallest = array[j];
					index = j;
					swab_check = 0;
				}
				j++;
			}
			if (swab_check == 0)
			{
				tmp = array[i];
				array[i] = array[index];
				array[index] = tmp;
				print_array(array, size);
			}
			i++;
		}
		if (swab_check == 1)
			sort_check = 0;
	}
}

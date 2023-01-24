#include "sort.h"

/**
 * selection_sort - function that sorts an array in ascending order
 * @size: Size of the array
 * @array: the array of integers.
 *
 * Return: No value
 */

void selection_sort(int *array, size_t size);
{
	size_t i = 0, k = 1, tmp = 0, min = 0, limit = size - 1;

	if (size < 2)
		return;

	while (i < limit)
	{
		if (j == size)
		{
			if (i != min)
			{
				tmp = array[i];
				array[i] = array[min];
				array[min] = tmp;
				print_array(array, size);
			}

			++i;
			min = i;
			k = i + 1;
			continue;
		}

		if (array[min] > array[k])
			min = k;

		++k;
	}
}

#include "sort.h"

/**
 * selection_sort - function that sorts an array in ascending order
 * @size: Size of the array
 * @array: the array of integers.
 */

void selection_sort(int *array, size_t size);
{
	size_t i, k;
	int min, tmp, idx;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (k = i + 1; k < size; k++)
		{
			if (min > array[k])
			{
				min = array[k];
				idx = k;
			}
		}
		if (min != array[i])
		{
			tmp = array[i];
			array[i] = min;
			array[idx] = tmp;
			print_array(array, size);
		}
	}
}

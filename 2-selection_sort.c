#include "sort.h"

/**
 * selection_sort - function that sorts an array in ascending order
 * @size: Size of the array
 * @array: the array of integers.
 */

void selection_sort(int *array, size_t size);
{
	size_t i, index;
	int min, tmp, idx;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (index = i + 1; index < size; index++)
		{
			if (min > array[index])
			{
				min = array[index];
				idx = index;
			}
		}
		if (min != array[i]
		{

			tmp = array[i];
			array[i] = min;
			array[idx] = tmp;
			print_array(array, size);
		}
	}
}

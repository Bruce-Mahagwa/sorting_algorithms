#include "sort.h"
/**
 * selection_sort - sorts an array using selection sort
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t n, j;

	size_t temp;

	int min;

	if (array == NULL || size < 2)
		return;
	for (n = 0; n < size - 1; n++)
	{
		temp = n;
		for (j = n + 1; j < size; j++)
		{
			if (array[j] < array[temp])
			{
				temp = j;
			}
		}
		if (temp != n)
		{
			min = array[n];
			array[n] = array[temp];
			array[temp] = min;
			print_array(array, size);
		}
	}
}

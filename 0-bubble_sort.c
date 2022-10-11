#include "sort.h"
/**
 * bubble_sort - sorts an array using bubble sort method
 *
 * @array: array to be sorted
 * @size: number of elements in an array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t n, j;

	int temp;

	if (array == NULL || size < 2)
		return;
	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			for (j = 0; j < size  - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
				}
			}
		}
		print_array(array, size);
	}
}

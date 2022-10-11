#include "sort.h"
/**
 * swap - swaps 2 ints
 * @x: first pointer to an int
 * @y: second pointer to an int
 *
 * Return: void
 */
void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * partition - partitions the array for swapping
 * @low: lowest value
 * @high: highest value
 *
 * Return: index of pivot element
 */
int partition(int array[], int low, int high) {
	int j;

	int pivot_value = array[high];
	
	int i = low;

	for (j = low; j < high; j++) {
		if (array[j] <= pivot_value) {
			swap(&array[i], &array[j]);
			i++;
			print_array(array, high);
		}
	}
	swap(&array[i], &array[high]);
	return (i);
}
/**
 * quick_sort_recurrsion - carries out recurssive operation
 * @array: array to be recurrsed
 * @low: lowest value in array
 * @high: highest value in array
 *
 * Return: void
 */
void quick_sort_recurssion(int array[], int low, int high) {
	if (low < high)
	{
		int pivot_index = partition(array, low, high);
		quick_sort_recurssion(array, low, pivot_index - 1);
		quick_sort_recurssion(array, pivot_index + 1, high);
	}
}
/**
 * quick_sort - sorts using quick_sort method
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: void
 */
void quick_sort(int *array, size_t size) {
	quick_sort_recurssion(array, 0, size - 1);
}

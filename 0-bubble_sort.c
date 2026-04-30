#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm.
 * @array: The array to be sorted.
 * @size: Number of elements in the array.
 *
 * Description: Swaps adjacent elements if they are in the wrong order
 * and prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				/* Print array after each swap to meet project requirements */
				print_array(array, size);
			}
		}
	}
}

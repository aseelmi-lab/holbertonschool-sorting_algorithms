#include "sort.h"

/**
 * swap - Swaps two integers in array
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * partition - Partitions array using lomuto scheme
 *
 * @array: The array to partition
 * @low: Starting index of partition
 * @high: Ending index of partition
 * @size: Total size of the array
 *
 * Return: The final index of pivot
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&array[i + 1], &array[high]);
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * lomuto - Recursively sorts partitions
 *
 * @array: The array to sort
 * @low: Starting index
 * @high: Ending index
 * @size: Total size of array
 */
void lomuto(int *array, int low, int high, size_t size)
{
	int pivot_idx;

	if (low < high)
	{
		pivot_idx = partition(array, low, high, size);
		lomuto(array, low, pivot_idx - 1, size);
		lomuto(array, pivot_idx + 1, high, size);
	}
}

/**
 * quick_sort - Sorts an array of integers
 * @array: The array to sort
 * @size: Number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lomuto(array, 0, (int)(size - 1), size);
}

#include "sort.h"

/**
 * swap - swap the given 2 items
 * @array: array of int
 * @i: first item
 * @j: second item
 * Return: Nothing
 */
void swap(int *array, int i, int j)
{
	int curr;

	curr = array[i];
	array[i] = array[j];
	array[j] = curr;
}
/**
 * lomuto_partition - lomuto partition scheme
 * @array: array of int
 * @low: lowest num of array
 * @high: highest num of array
 * @size: size of array
 * Return: index
 */
int lomuto_partition(int *array, int low, int high, int size)
{
	int pivot = array[high];
	int i = (low - 1);
	int j;

	for (j = low; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(array, i, j);
				print_array(array, size);
			}
		}
	}
	return (i);
}
/**
 * quick_sort - sort an array using the quick sort algorithm
 * @array: array to sort
 * @size: size of array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	int low, high;

	if (size < 2 || array == NULL)
		return;

	low = 0;
	high = size - 1;

	recursion(array, low, high, size);
}
/**
 * recursion - set pivot using recursion
 * @array: array of int
 * @size: size of array
 * @low: lowest num of array
 * @high: highest num of array
 */
void recursion(int *array, size_t low, size_t high, size_t size)
{
	size_t i;

	if (low < high)
	{
		i = lomuto_partition(array, low, high, size);

		if (i > low)
		{
			recursion(array, low, i - 1, size);
		}
		if (i < high)
		{
			recursion(array, i + 1, high, size);
		}
	}
}

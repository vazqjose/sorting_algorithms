#include "sort.h"

/**
 * swap - swap the given 2 items
 * @xp: first item
 * @yp: second item
 * Return: Nothing
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;

	*xp = *yp;
	*yp = temp;
}

int partition (int *array, size_t low, size_t high)
{
	int pivot = array[high];
	size_t i = (low - 1);
	size_t j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

void quickSort(int *array, size_t low, size_t high)
{
	if (low < high)
	{
		size_t pi;

		pi = partition(array, low, high);
		quickSort(array, low, pi - 1);
		quickSort(array, pi + 1, high);
	}
}
/**
 * quick_sort - sort an array using the quick sort algoritm
 * @array: array to sort
 * @size: size of array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1);
}

#include "sort.h"

/**
 * swap - swap the given 2 items
 * @xp: first item
 * @yp: second item
 * Return: Nothing
 */
void swap_items(int *xp, int *yp)
{
	int temp = *xp;

	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - sort an array using the bubble sort algoritm
 * @array: array to sort
 * @size: size of array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);

				print_array(array, size);
			}
		}
	}
}

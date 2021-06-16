#include "sort.h"

/**
 * bubble_sort - sort an array using the bubble sort algoritm
 * @array: array to sort
 * @size: size of array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, curr;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				curr = array[j];
				array[j] = array[j + 1];
				array[j + 1] = curr;

				print_array(array, size);
			}
		}
	}
}

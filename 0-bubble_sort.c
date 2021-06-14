#include "sort.h"


void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubble_sort(int *array, size_t size)
{
	int i, j;
	for (i = 0; i < n-1; i++)
	{
	// Last i elements are already in place  
		for (j = 0; j < n-i-1; j++i)
		{
			if (array[j] > array[j+1])
			{
				swap(&array[j], &array[j+1]);
				print_array(array, size)
			}
		}
	}
}

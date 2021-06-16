#include "sort.h"

/**
 * insertion_sort_list - algorithm
 * @list: list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr1, *curr2;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr2 = (*list)->next;
	while (curr2)
	{
		while (curr2->prev != NULL && curr2->prev->n > curr2->n)
		{
			curr1 = curr2->prev;
			curr2->prev = curr1->prev;

			if (curr2->next != NULL)
				curr2->next->prev = curr1;
			curr1->next = curr2->next;
			curr2->next = curr1;

			if(curr1->prev != NULL)
				curr1->prev->next = curr2;
			curr1->prev = curr2;

			if(curr2->prev == NULL)
				*list = curr2;
			print_list(*list);
		}
		curr2 = curr2->next;
	}
}

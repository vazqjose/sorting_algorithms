#include "sort.h"
/**
 * swap - function swap
 * @curr1: current node 1
 * @curr2: current node 2
 * Return: nothing
 *
void swap(listint_t *curr1, listint_t *curr2)
{
	curr1->next = curr2->next;

	if (curr1 == NULL || curr2 == NULL)
		return;
	if (curr2->next != NULL)
		curr2->next->prev = curr1;
	curr2->next = curr1;
	curr2->prev = curr1->prev;
	if (curr2->prev != NULL)
		curr2->prev->next = curr2;
}
*/

/**
 * insertion_sort_list - algorithm
 * @list: list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr1, *curr2 = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	curr1 = *list;

	while (curr1->next)
	{
		if (curr1->next->n < curr1->n)
		{
			swap_next(curr1, list);
			print_list(*list);
			curr2 = curr1->prev;
			while (curr2->prev && curr2->n < curr2->prev->n)
			{
				swap_prev(curr2, list);
				print_list(*list);
			}
		}
		else
			curr1 = curr1->next;
	}
}

#include "sort.h"
#include "swap.c"
/**
 * swap_next - swap with the next node
 * @head: head of list
 * @list: list
 */
void swap_next(listint_t *head, listint_t **list)
{
	listint_t *curr1, *curr2 = NULL;

	curr1 = head;
	curr2 = head->next;

	if (curr1->prev)
		curr1->prev->next = curr2;
	if (curr2->next)
	{
		curr2->next->prev = curr1;
		curr1->next = curr2->next;
	}
	if (curr1->prev == NULL)
	{
		*list = curr2;
		curr2->prev = NULL;
	}
	curr1->prev = curr2;
	curr2->next = curr1;
}

/**
 * swap_prev - swap with previous node
 * @head: head of list
 * @list: list
 */
void swap_prev(listint_t *head, listint **list)
{
	listint_t *curr1, curr2 = NULL;

	curr1 = head;
	curr2 = head->prev;

	if (curr2->prev)
	{
		curr2->prev->next = curr1;
		curr1->next->prev = curr2;
		curr2->next = curr1->next;
		curr1->prev = curr2->prev;
		curr2->prev = curr1;
		curr1->next = curr2;
	}
	if (curr1->prev == NULL)
		*list = curr1;
}

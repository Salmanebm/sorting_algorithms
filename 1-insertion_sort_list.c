#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * insertion_sort_list - Sorts a linked list using insertion sort
 * @list: A pointer to a pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = NULL, *next = NULL;
	listint_t *current = *list;
	listint_t *toprint = *list;

	if (*list == NULL || (*list)->next == NULL)
	{
		return;
	}
	while (current != NULL)
	{
		next = current->next;

		if (sorted == NULL || sorted->n >= current->n)
		{
			current->next = sorted;
			sorted = current;
			toprint = current;
		}
		else
		{
			listint_t *temp = sorted;

			while (temp->next != NULL && temp->next->n < current->n)
			{
				temp = temp->next;
			}
			current->next = temp->next;
			temp->next = current;
			toprint = current->next;
		}
			current = next;
			print_list(toprint);
	}

	*list = sorted;
}

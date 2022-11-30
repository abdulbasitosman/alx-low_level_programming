#include <stdlib.h>
#include "lists.h"
/**
 * check_cycle - fuction to chech if a singly linked list has a cycle int it
 * @list: pointer to the begining of the node
 * Return: 1 if there is a cycle, 0 if there is none
 */

int check_cycle(listint_t *list)
{
	listint_t *current, *check;

	if (list == NULL || list->next == NULL)
		return (0);
	current = list;
	check = current->next;

	while (current != NULL && check->next != NULL && check->next->next != NULL)
	{
		if (current == check)
			return (1);
		current = curent->next;
		check = check->next->next;
	}

	return (0);
}

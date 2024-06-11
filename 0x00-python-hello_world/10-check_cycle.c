#include "lists.h"

/**
 * check_cycle - function to check if singly linked list has a cycle in it
 * @list: pointer to beginning of node
 * Return: 0 if there is no cycle, 1 if cycle is there
 */
int check_cycle(listint_t *list)
{
	listint_t *current, *check;

	if (list == NULL || list->next == NULL)
		return (0);
	current = list;
	check = current->next;

	while (current != NULL && check->next != NULL
			&& check->next->next != NULL)
	{
		if (current == check)
			return (1);
		current = current->next;
		check = check->next->next;
	}
	return (0);
}

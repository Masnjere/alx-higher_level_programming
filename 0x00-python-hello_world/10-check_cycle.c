#include "lists.h"

/**
 * check_cycle - investigates if a linked lst has a cycle
 * @list: linked lst to investigate
 *
 * Return: 1 if lst has a cycle, else 0 if it does not
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}

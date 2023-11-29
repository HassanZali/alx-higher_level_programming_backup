#include "lists.h"

/**
 *check_cycle - func to check if a list is cycle
 *@list: pointer to the list array
 *
 *Return: return 1 if the list has cycle 0 if not.
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (list == NULL)
	{
		return (0);
	}

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			return (1);
		}
	}
	return (0);
}

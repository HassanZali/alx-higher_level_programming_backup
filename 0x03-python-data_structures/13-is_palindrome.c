#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *
 *
 *
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fast;

	fast = malloc(sizeof(listint_t));
	if (fast == NULL)
		return (NULL);
	fast->n = n;
	fast->next = *head;
	*head = fast;
	return (fast);
}
/**
 *
 *
 *
 *
 */
int is_palindrome(listint_t **head)
{
	listint_t *head2 =  *head;
	listint_t *midslow = NULL, *slow = NULL;

	if (*head == NULL || head2->next == NULL)
		return (1);
	while (head2 != NULL)
	{
		add_nodeint(&midslow, head2->n);
		head2 = head2->next;
	}
	slow = midslow;
	while (*head != NULL)
	{
		if((*head)->n != slow->n)
		{
			free_listint(midslow);
			return (0);
		}
		*head = (*head)->next;
		slow = slow->next;
	}
	free_listint(midslow);
	return(1);
}

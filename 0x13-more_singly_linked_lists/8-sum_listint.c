#include "lists.h"

/**
 * sum_listint - the function that returns the sum of all the data of a list.
 *
 * @head: pointer to the first node of the list
 *
 * Return: the sum (n)
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		/* add n to sum*/
		sum += head->n;

		head = head->next;
	}

	return (sum);
}

#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 *            at the end of the node
 *
 * @head: pointer to the first node of the list
 * @n: element int to add to new node
 *
 * Return: address of the new element or NULL if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	temp = *head;

	/*place new node first if head is NULL*/
	if (temp == NULL)
		*head = new;
	else
	{
		/*if head is not null, and next is not NULL*/
		while (temp->next != NULL)
			temp = temp->next;	/*go to the last node*/

		/*place our new node at the end*/
		temp->next = new;
	}

	return (*head);
}

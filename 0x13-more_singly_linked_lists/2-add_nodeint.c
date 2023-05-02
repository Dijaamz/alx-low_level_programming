#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the
 *              beginning of a list
 *
 * @head: pointer to the first node
 * @n: integer n to add in a new node
 *
 * Return: address of the new element or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	/*link first node in head with the new*/
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	new->n = n;
	/*add new node at the beginning of the list*/
	*head = new;

	return (*head);
}

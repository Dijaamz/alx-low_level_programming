#include "lists.h"

/**
 * pop_listint - deletes head of the node
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head's node's data (n)
*/
int pop_listint(listint_t **head)
{
	int Fnode;
	listint_t *tmp, *next;

	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);

	tmp = *head;
	
	next = tmp->next;
	/*get element of first node*/
	Fnode = tmp->n;

	/*free first node*/
	free(tmp);

	/*set head to second node*/
	*head = next;

	/*return element of first node*/
	return (Fnode);
}

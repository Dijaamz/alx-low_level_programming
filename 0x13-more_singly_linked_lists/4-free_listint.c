#include "lists.h"

/**
 * free_listint - free list
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	/*iterate through each node in list*/
	while ((tmp = head) != NULL)
	{
		/*set head as the next node*/
		head = head->next;
		free(tmp);
	}
}

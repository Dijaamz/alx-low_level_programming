#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 *
 * @head: pointer to the first node
 *
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *now, *tmp;

	if (head != NULL)
	{
		/*set head addr to current*/
		now = *head;

		/*iterate through the whole list*/
		/*while setting the now node to tmp*/
		while ((tmp = now) != NULL)
		{
			/*set next node to now*/
			now = now->next;
			/*free tmp, that is the now node*/
			free(tmp);
		}

		*head = NULL;
	}
}

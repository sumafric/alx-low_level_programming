#include "lists.h"
/**
 * get_nodeint_at_index - Returns nth node
 * @head: Heade node pointer
 * @index: Index of the node
 *
 * Return: nth node or NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *initial = head;
	unsigned int count = 0;

	if (head != NULL)
	{
		while (initial != NULL)
		{
			if (count == index)
			{
				return (initial);
			}
			count++;
			initial = initial->next;
		}
	}
	return (NULL);
}

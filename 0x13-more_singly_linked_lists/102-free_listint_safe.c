#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: data type listint_t double pointer of head
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0, j;
	listint_t *temp, *check, *copy = *h;

	while (*h)
	{
		i++;
		temp = *h;
		*h = (*h)->next;
		free(temp);
		check = copy;
		j = 0;
		while (j < i)
		{
			if (*h == check)
			{
				*h = NULL;
				return (i);
			}
			check = check->next;
			j++;
		}
	}
	return (i);
}

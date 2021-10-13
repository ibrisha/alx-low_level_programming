#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: data type listint_t double pointer of head
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *runner, *head;
	size_t h_i, r_i;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	head = *h;
	h_i = 0;

	while (head != NULL)
	{
		runner = *h;
		for (r_i = 0; r_i < h_i; r_i++)
		{
			if (runner == current)
			{
				*h = NULL;
				return (h_i);
			}
			runner = runner->next;
		}
		current = head->next;
		free(head);
		head = current;
		h_i++;
	}
	*h = NULL;
	return (h_i);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - print all the elements of a double linked list
 * @h: head pointer
 * Return: the number of pointers
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

<<<<<<< HEAD
	return (count);
}

=======
	return (nodes);
}
>>>>>>> aa277c0e977e0eb79598b403a09f4ece07ea63a6

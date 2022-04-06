#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - allocates a char array and fills with byte
 * @size: the size of the char array
 * @c: the default byte filling
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;
	ptr = malloc(size * sizeof(char))
	for(i=0; i<size; i++)
	{
	    ptr[i] =c;
	}

    return(ptr);

}

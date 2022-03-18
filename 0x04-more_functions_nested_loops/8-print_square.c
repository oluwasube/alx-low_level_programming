#include "main.h"

/**
 * print_square - Write a function that prints a square, followed by a new line.
 * @size: Long of the line
 *
 * Return: none
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}

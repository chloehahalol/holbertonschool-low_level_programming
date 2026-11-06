#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;
	int space;
	int hash;

	if (size <= 0)
    	{
		_putchar('\n');
        	return;
    	}

    	for (i = 0; i < size; i++)
    	{
        	space = 0;
        	while (space < size - i - 1)
        	{
            		_putchar(' ');
            		space++;
        	}

        	hash = 0;

		while (hash <= i)
        	{
            		_putchar('#');
            		hash++;
        	}

        _putchar('\n');
    	}
}

#include "main.h"

/**
 * print_square - prints a square
 */
void print_square(int size)
{
	int w;
	int h;
	
	if ( size > 0 )
	{
		for (w = 0; w < size; w++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar(35);
			}	
			_putchar('\n'); 
		}
	}
	else 
	{
		_putchar('\n');
	}	 
}

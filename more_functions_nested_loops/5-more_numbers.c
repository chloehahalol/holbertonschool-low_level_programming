#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * 0 to 14.
 */
void more_numbers(void)
{
	int col;
	int row;
	
	for (col = 0; col < 11; col++)
	{
		for (row = 0; row < 14; row++)
		{
			_putchar(48+row);
		}
		_putchar('\n');
	}	
}

#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 * 0 to 14.
 */
void more_numbers(void)
{
	int row;
	int num;

	for (row = 0; row < 10; row++)
	{
		num = 0;
		while (num < 15)
		{
			if ( num > 9 )
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
			num++;
		}
		_putchar('\n');
	}
}

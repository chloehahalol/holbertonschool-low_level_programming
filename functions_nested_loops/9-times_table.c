#include "main.h"

/**
 * times_table -  prints the 9 times table, starting
 * with 0.
 */
void times_table(void)
{
	int row;
	int column;
	int result;

	for (row = 0;  row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = row * column;

			if (column != 0 && result < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}

			if (result >= 9)
			{
				_putchar(' ');
				_putchar('0' + result / 10);
			}

			_putchar('0' + result % 10);

			if (column != 9 )
			{
				_putchar(',');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}

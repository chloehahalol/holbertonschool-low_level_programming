#include "main.h"

/**
 * times_table -  prints the 9 times table, starting
 * with 0.
 */
void times_table(void)
{
	int a;
	int b;
	int result;

	/* a 1- 9 */
	for (a = 0;  a < 10; a++)
	{
		/* b 1-9 */
		for (b = 0; b < 10; b++)
		{
			result = a * b;

			/* single digit */
			if (result < 10)
			{
				/* middle columns  */
				if (b != 0 && b < 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
					_putchar(',');
				}
				/* last column */
				else if (b == 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
					_putchar('\n');
				}
				/* first */
				else
				{
					_putchar('0' + result);
					_putchar(',');
				}
			}
			/* double digit */
			else
			{
					_putchar(' ');
					_putchar('0' + result / 10);
					_putchar('0' + result % 10);
				if (b < 9)
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
}

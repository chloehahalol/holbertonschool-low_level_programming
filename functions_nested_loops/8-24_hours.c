#include "main.h"


/**
 * jack_bauer - Prints every minute of the day, starting from 00:00
 * to 23:59.
 *
 * Return: Returns void.
 */
void jack_bauer(void)
{
	int hour_ten;
	int hour_unit;
	int min_ten;
	int min_unit;

	/* Hour hand increments 0,1,2  */
	for (hour_ten = 0 ; hour_ten < 3 ; hour_ten++)
	{
		for (hour_unit = 0; hour_unit < 10 ; hour_unit++)
		{
			if (hour_ten == 2 && hour_unit > 3)
			{
				break;
			}

			for (min_ten = 0 ; min_ten < 6 ; min_ten++)
			{
				for (min_unit = 0; min_unit < 10; min_unit++)
				{
					_putchar('0' + hour_ten);
					_putchar('0' + hour_unit);
					_putchar(':');
					_putchar('0' + min_ten);
					_putchar('0' + min_unit);
					_putchar('\n');
				}
			}
		}
	}
}

#include "main.h"

/**
 * _atoi -  converts a string to an integer
 * @s: the string
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int length;
	int new;
	int neg;
	int found;

	length = 0;
	new = 0;
	neg = 0;
	found = 0;

	/*Checks the whole string*/
	while (s[length] != 0)
	{
		/* Count how many negative signs*/
		if (s[length] == '-')
		{
			neg++;
		}

		/*Looks for numbers*/
		if (s[length] >= '0' && s[length] <= '9')
		{
			new = new * 10;
			new = new + (s[length] - '0');
			found = 1;
		}
		else if (found == 1 )
		{
			break;
		}

		length++;
	}

	/*If there's an odd number make number negative*/
	if (neg % 2 != 0)
	{
		new = new * -1;
	}

	return (new);
}

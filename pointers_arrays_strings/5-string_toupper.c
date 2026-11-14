#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase
 * @s: the string to convert
 *
 * Return: the string
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = s[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}

	return (s);
}

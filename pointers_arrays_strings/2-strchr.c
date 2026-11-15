#include "main.h"

/**
 * _strchr - looks for a character in a string
 * @s: string
 * @c: character to look for
 *
 * Return: pointer if exists, null if not.
 */
char *_strchr(char *s, char c)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		if (s[n] == c)
		{
			return (&s[n]);
		}
		n++;
	}

	if (s[n] == '\0' && s[n] == c)
	{
		return (&s[n]);
	}

	return (0);
}

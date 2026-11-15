#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string to search
 * @accept: the strings that are accepted
 *
 * Return: a pointer to the byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				return (&s[i]);
			}
		}
	}

	return (0);
}

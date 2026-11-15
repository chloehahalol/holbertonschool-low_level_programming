#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to check
 * @accept: the number of characters to accept
 *
 * Return: The number of bytes in the initial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
	/*Count number of bytes from accept*/
	int n;
	int i;
	unsigned int check;

	check = 0;
	i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
			{
				check++;
				break;
			}
		}
		if (accept[n] == '\0')
		{
			return (check);
		}
	}
	return (check);
}

#include "main.h"

/**
 * cap_string: proper case a string
 * @s: the string
 *
 * Return: return the string capitalised
 */
char *cap_string(char *s)
{
	int i;
 	int j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 0;

	/*Check first character*/
	if (s[0] > 96 && s[0] < 123)
	{
		s[0] = s[0] - 32;
	}

	/*Check everything else*/
	while (s[i] != '\0')
	{
		/*Check for separator*/
		for (j = 0; sep[j] != '\0'; j++)
		{
			/*Separator found*/
			if (s[i] == sep[j])
			{
				/*Check if next character is lowercase*/
				if (s[i + 1] > 96 && s[i + 1] < 123)
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
		i++;
	}

	return (s);
}

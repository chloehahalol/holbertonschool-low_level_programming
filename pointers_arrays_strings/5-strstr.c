#include "main.h"

/**
 * _strstr - the first occurence of the substring
 * @haystack: string to be checked
 * @needle: the string to find
 *
 * Return: pointer if substring found, else 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int n;

	if (needle[0] == '\0')
	{
		return (0);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		n = 0;

		while (needle[n] != '\0' && haystack[i + n] != '\0' && haystack[i + n] == needle[n])
		{
			n++;
		}
		if (needle[n] == '\0')
		{
			return(&haystack[i]);
		}
	}
	return (0);
}

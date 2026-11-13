#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i;
	int a;
	int b;

	i = 0;
	check = 0;
	a = 0;
	b = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}

	a = s1[i];
	b = s2[i];

	return (a - b);
}

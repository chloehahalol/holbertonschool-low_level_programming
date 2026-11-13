#include "main.h"

/**
 * puts_half - prints half the string
 * @str: the string
 */
void puts_half(char *str)
{
	int length;
	int start;

	length = 0;
	start = 0;

	/*Find length of the string*/
	while (str[length] != '\0')
	{
		length++;
	}

	/*If length is even or odd*/
	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}

	/*print*/
	while (start < length)
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}

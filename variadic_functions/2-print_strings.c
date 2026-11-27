#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: separates the strings
 * @n: the number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *print;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(args, n);

	while (i < n)
	{
		print = va_arg(args, char *);

		if (print == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", print);
		}

		if (i != n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);

	printf("\n");
}

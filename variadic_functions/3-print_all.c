#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_int - print an integer
 * @args: argument inputs
 */
void print_int(va_list *args)
{
	printf("%d", va_arg(*args, int));
}

/**
 * print_char - print a char
 * @args: argument inputs
 */
void print_char(va_list *args)
{
	printf("%c", va_arg(*args, int));
}

/**
 * print_float - print a float
 * @args: argument inputs
 */
void print_float(va_list *args)
{
	printf("%f", va_arg(*args, double));
}

/**
 * print_string - print a string
 * @args: argument inputs
 */
void print_string(va_list *args)
{
	char *str = va_arg(*args, char *);
	
	if (str == NULL)
	{
		str = "(nil)";
	}
	
	printf("%s", str);
}

/**
 * print_all - print all types
 * @format: format of the string
 */
void print_all(const char * const format, ...)
{
	va_list args;
	struct printer printers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	int i;
	int j = 0;
	char *sep = "";
	
	if (format == NULL)
	{
		return;
	}
	va_start(args, format);

	while (format[j] != '\0') /*Until all arguments have been found*/
	{
		i = 0;
		while (i < 4)
		{
			if (format[j] == printers[i].type)
			{
				printf("%s", sep);
				printers[i].f(&args);
				sep = ", ";
				break;
			}
			i++;
		}
		j++;
	}
	printf("\n");
}

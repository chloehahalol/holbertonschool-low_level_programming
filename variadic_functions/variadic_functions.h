#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printer - associates a format character with a 
 * function
 * @type: character representing the data type
 * @f: pointer to the corresponding function
 */
struct printer
{
	char type;
	void (*f)(va_list *);
};
typedef struct printer printer_t;

#endif

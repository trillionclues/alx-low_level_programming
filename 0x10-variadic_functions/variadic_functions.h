#ifndef VARIADIC_FUNCTIONSH
#define VARIADIC_FUNCTIONSH
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


void print_int(va_list);
void print_float(va_list);
void print_char(va_list);
void print_string(va_list);


/**
 * struct printTypeStruct - struct definition of entry sign
 * @t: type of arg
 * @f: function to print type of args
 */

typedef struct format_t
{
	char *t;
	void (*f)(va_list);
} format_t;

#endif /*VARIADIC_FUNCTIONSH*/

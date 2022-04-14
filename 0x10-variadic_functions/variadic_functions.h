#ifndef VARIADIC_FUNCTIONSH
#define VARIADIC_FUNCTIONSH
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_str(va_list list);


/**
 * struct printTypeStruct - struct definition of printTypeStruct function
 * @type: type of arg
 * @printer: function to print
 */

typedef struct printTypeStruct
{
	char *type;
	void (*printer)(va_list);
} printTypeStruct;

#endif /*VARIADIC_FUNCTIONSH*/

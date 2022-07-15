#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdarg.h>


/**
 * struct print - Struct for print types
 * @t: type
 * @f: The function associated
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int (*check_format(const char *format))(va_list);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
#endif /*_MAIN_H_ */

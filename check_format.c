#include "main.h"
#include <stdarg.h>

/**
 * check_format - function checks format
 * @format: format specifier
 * Return: corresponding function/ NULL
 */

int (*check_format(const char *format))(va_list)
{
	int i = 0;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"d", print_d},
		{NULL, NULL}
	};

	for (; p[i].t != NULL; i++)
	{
		if (*(p[i].t) == *format)
			break;
	}
	return (p[i].f);
}

#include "main.h"
#include <unistd.h>

/**
 * print_s - function prints tsring
 * @s: string to print
 * Return: last position
 */

int print_s(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i++]);
	}

	return (i);
}

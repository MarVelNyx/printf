#include "main.h"

/**
 * print_c - function prints char
 * @c: char to print
 * Return: 1 = success
 */

int print_c(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}

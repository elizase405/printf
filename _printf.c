#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - print input to standard output
 * @format: character string to be printed.
 * @...: args to be printed where necessary
 *
 * Return: int
 */

int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", print_string},
		{"%c", print_char},
		{"%%", print_char},
		{"%i", printf_int},
		{"%d", printf_dec},
		{"%b", print_binary},
		{"%u", print_unsigned},
		{"%o", print_octal},
		{"%x", print_hex},
		{"%X", print_Hex},
		{"%S", printf_non_printable_string},
		{"%p", printf_pointer},
		{"%r", print_reverse},
		{"%p", printf_pointer},
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{

		j = 8;

		j = 11;

		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				if (format[i] == '%' && format[i + 1] == '%')
					i++;
				else
				{
					len += m[j].f(args);
					i = i + 2;
					goto Here;
				}
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}

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

int _printf(const char *format, ...)
{
	int i = 0;
	int character; /*for a single character*/
	char *str; /*for string*/
	va_list ap;
	 int number;
	va_start(ap, format);

	while (format[i] != 0)
	{
		/* while iterating through format,
		 * check if a char = '%'*/
		if (format[i] == '%')
		{
			i++;
			/* give me the next character, if it's c, s or %
			 * then input it into its respective function.*/
			if (format[i] == 'c')
			{
				character = va_arg(ap, int);
				print_char(character);
			}printf_int
			else if (format[i] == 's')
			{
				str = va_arg(ap, char *);
				print_string(str);
			}
			else if (format[i] == '%')
			{
				print_char(format[i]);
			}
			else if (format[i] == 'i' || format[i] == 'd')
			{
			        number = va_arg(ap, int);
			        printf_int(number);
			}
		       else
		       {
			print_char(format[i]);
		       }

		i++;
	}

	va_end(ap);
	return (i + 1); /*length of format*/
}

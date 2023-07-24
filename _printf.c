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
{"%s", print_string}, {"%c", print_char},
{"%i", printf_int},{"%d", printf_dec},
};

va_list args;
int i = 0, j, len = 0;

va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

Here:
while (format[i] != '\0')
{
j = 3;
while (j >= 0)
{
if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
{
len += m[j].f(args);
i = i + 2;
goto Here;
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

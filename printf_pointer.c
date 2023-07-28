#include "main.h"

/**
* printf_pointer - prints an hexgecimal number.
* @args: arguments.
* @c: contains conversion specifier
*
* Return: counter.
*/
int printf_pointer(int c, va_list args)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	if (c != '\0')
		return (c);

	p = va_arg(args, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_HEX_aux(c, a);
	return (b + 2);
}

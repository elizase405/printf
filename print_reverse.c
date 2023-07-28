#include "main.h"

/**
* print_reverse - function that prints a string in reverse
* @args: type struct va_arg where the printf arguments are stored
* @c: contains conversion specifier
*
* Return: the length of the string
*/
int  print_reverse(int c, va_list args)
{
	/*  Retrieve the string argument from va_list */
	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (c != '\0')
		return (c);

	/*  If the string is NULL, replace it with "(null)" */
	if (s == NULL)
		s = "(null)";

	/* Calculate the length of the string */
	while (s[j] != '\0')
		j++;

	/*Print the string in reverse order */
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);

	/* Return the length of the string */
	return (j);
}

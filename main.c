#include "main.h"

int main(void)
{
	char *str = "hello";
	int i = 0;

	while(str[i] != 0)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
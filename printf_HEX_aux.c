#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * printf_HEX_aux - prints an hexgecimal number.
 * @num: number to print.
 * @c: contains conversion specifier
 *
 * Return: counter.
 */
int printf_HEX_aux(int c, unsigned int num)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int temp = num;

	if (c != '\0')
		return (c);

	/* Calculate the number of digits in the hexadecimal representation */
	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	/* Allocate memory to store the hexadecimal digits in reverse order */
	array = malloc(counter *sizeof(int));

	/* Store the hexadecimal digits in the array */
	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	/* Print the hexadecimal digits in reverse order */
	for (i = counter - 1; i >= 0; i--)
	{
		/**
		 * * Convert digits greater than 9 to corresponding ASCII
		 * * characters (A-F)
		 * */
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0'); /* Print the digit */
	}

	free(array); /* Free the allocated memory */
	return (counter); /* Return the length of the hexadecimal representation */
}

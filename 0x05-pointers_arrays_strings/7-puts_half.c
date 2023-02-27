#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	/* Declare and initialize variables */
	int index, length, half_length;

	length = 0;

	/* Get the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Calculate the index of the middle character(s) */
	half_length = length / 2;

	/* If the length is odd, add 1 to the middle index */
	if (length % 2 != 0)
	{
		half_length++;
	}

	/* Print the second half of the string starting from the middle index */
	for (index = half_length; index < length; index++)
	{
		_putchar(str[index]);
	}

	/* Print a new line at the end */
	_putchar('\n');
}


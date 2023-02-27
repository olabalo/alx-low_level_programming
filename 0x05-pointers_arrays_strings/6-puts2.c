#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: the string to print
 */
void puts2(char *str)
{
	int length = 0;
	int index = 0;
	char *str_ptr = str;

	/* Find the length of the string */
	while (*str_ptr != '\0')
	{
		str_ptr++;
		length++;
	}

	/* Iterate through the string and print every other character */
	for (index = 0; index < length; index++)
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
	}

	/* Print a newline character to move the cursor to the next line */
	_putchar('\n');
}


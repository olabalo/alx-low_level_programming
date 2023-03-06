
#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @x: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int x)
{
	int i = 0;

	for (; x > 0; i++)
	{
		s[i] = b;
		x--;
	}
	return (s);
}



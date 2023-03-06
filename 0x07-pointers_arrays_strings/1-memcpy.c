#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@x: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int x)
{
	int r = 0;
	int i = x;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		x--;
	}
	return (dest);
}


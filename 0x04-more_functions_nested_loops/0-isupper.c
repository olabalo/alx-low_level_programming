#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: variable text
 * Return: Always 0
 */
int_isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

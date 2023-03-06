#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *n = needle;

		while (*l == *n && *n != '\0')
		{
			l++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}


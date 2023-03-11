#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';
return (dest);
}
int main(void)
{
char str1[100] = "Hello, ";
char str2[] = "world!";
printf("%s\n", _strcat(str1, str2));
return (0);
}

#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Reads a text file and prints content to STDOUT
 * @filename: the name of the text file to be read
 * @letters: max byte to read
 * Return: w- The actual number of byte read and printed
 * Return 0 for failure or NULL filename
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);

free(buf);
close(fd);
return (w);
}

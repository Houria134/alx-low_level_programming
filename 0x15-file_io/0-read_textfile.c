#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read text file print to STDOUT
* @file_name: the text file to be read
* @num_letters: the number of letters to be read
* Return: w- actual number of bytes read
* and printed 0 when function fails
* or filename is NULL.
*/
ssize_t read_textfile(const char *file_name, size_t num_letters)
{
char *buffer;
ssize_t file_descriptor;
ssize_t write_bytes;
ssize_t total_bytes;

file_descriptor = open(file_name, O_RDONLY);
if (file_descriptor == -1)
return (0);

buffer = malloc(sizeof(char) * num_letters);
total_bytes = read(file_descriptor, buffer, num_letters);
write_bytes = write(STDOUT_FILENO, buffer, total_bytes);
free(buffer);
close(file_descriptor);
return (write_bytes);
}

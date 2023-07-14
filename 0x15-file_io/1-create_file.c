#include "main.h"
/**
* create_file - Creates a file and writes content to it
* @file_name: Pointer to the name of the file to create
* @content: Pointer to the content string to write to the file.
* Return: If the function fails return -1.
*/
int create_file(const char *file_name, char *content)
{
int file_descriptor, write_bytes, length = 0;
if (file_name == NULL)
return (-1);
if (content != NULL)
{
for (length = 0; content[length];)
length++;
}
file_descriptor = open(file_name, O_CREAT | O_RDWR | O_TRUNC, 0600);
write_bytes = write(file_descriptor, content, length);
if (file_descriptor == -1 || write_bytes == -1)
return (-1);
close(file_descriptor);
return (1);
}

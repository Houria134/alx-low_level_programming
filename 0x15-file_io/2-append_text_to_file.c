#include "main.h"
/**
* append_text_to_file - it appends text at the end of the file
* @file_name: Pointer to the name of the file
* @content: String to add to the end of the file
* Return: If the function fails -1
* If the file does not exist -1
* Otherwise - 1.
*/
int append_text_to_file(const char *file_name, char *content)
{
int file_descriptor, write_result, length = 0;
if (file_name == NULL)
return (-1);
if (content != NULL)
{
for (length = 0; content[length];)
length++;
}
file_descriptor = open(file_name, O_WRONLY | O_APPEND);
write_result = write(file_descriptor, content, length);
if (file_descriptor == -1 || write_result == -1)
return (-1);
close(file_descriptor);
return (1);
}

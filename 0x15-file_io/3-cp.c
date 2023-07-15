#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024
/**
 * exit_with_error - Prints an error message to the
 * standard error and exits with a specified code.
 * @message: The error message to be printed.
 * @file_name: The name of the file associated with the error.
 * @code: The exit code.
 */
void exit_with_error(const char *message, const char *file_name, int code)
{
dprintf(STDERR_FILENO, "%s %s\n", message, file_name);
exit(code);
}
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 * Return: 0 on success, or the appropriate error code.
 */
int main(int argc, char *argv[])
{
int source_fd, destination_fd, bytes_read, bytes_written;
char buffer[BUFFER_SIZE];
if (argc != 3)
exit_with_error("Usage: cp file_from file_to", argv[0], 97);
source_fd = open(argv[1], O_RDONLY);
if (source_fd == -1)
exit_with_error("Error: Can't read from file", argv[1], 98);
destination_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (destination_fd == -1)
exit_with_error("Error: Can't write to", argv[2], 99);
while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(destination_fd, buffer, bytes_read);
if (bytes_written != bytes_read || bytes_written == -1)
exit_with_error("Error: Can't write to", argv[2], 99);
}
if (bytes_read == -1)
exit_with_error("Error: Can't read from file", argv[1], 98);
if (close(source_fd) == -1)
exit_with_error("Error: Can't close fd", argv[1], 100);
if (close(destination_fd) == -1)
exit_with_error("Error: Can't close fd", argv[2], 100);
return (0);
}

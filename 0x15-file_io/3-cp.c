#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * handle_errors - Prints error messages and exits with specific code
 * @error_code: The exit code
 * @message: The error message to print
 * @file: The filename to include in the error message
 * @fd: The file descriptor to include in the error message (for close errors)
 */
void handle_errors(int error_code, const char *message, const char *file, int fd)
{
if (file != NULL)
dprintf(STDERR_FILENO, message, file);
else
dprintf(STDERR_FILENO, "%s\n", message);

if (fd != -1)
close(fd);

exit(error_code);
}

/**
 * copy_file - Copies content from source file to destination file
 * @file_from: The source file
 * @file_to: The destination file
 *
 * Return: 0 on success, -1 on failure
 */
int copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to;
ssize_t read_count, write_count;
char buffer[1024];
mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
handle_errors(98, "Error: Can't read from file %s\n", file_from, -1);

fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, permissions);
if (fd_to == -1)
handle_errors(99, "Error: Can't write to %s\n", file_to, fd_from);

while ((read_count = read(fd_from, buffer, sizeof(buffer))) > 0)
{
write_count = write(fd_to, buffer, read_count);
if (write_count != read_count)
handle_errors(99, "Error: Can't write to %s\n", file_to, fd_from);
}

if (read_count == -1)
handle_errors(98, "Error: Can't read from file %s\n", file_from, fd_to);

if (close(fd_from) == -1)
handle_errors(100, "Error: Can't close fd %d\n", NULL, fd_from);

if (close(fd_to) == -1)
handle_errors(100, "Error: Can't close fd %d\n", NULL, fd_to);

return (0);
}

/**
 * main - Copies the content of one file to another
 * @argc: The number of command line arguments
 * @argv: The command line arguments
 *
 * Return: 0 on success, or exit with appropriate code on failure
 */
int main(int argc, char *argv[])
{
if (argc != 3)
handle_errors(97, "Usage: cp file_from file_to\n", NULL, -1);

if (copy_file(argv[1], argv[2]) == -1)
exit(100);

return (0);
}


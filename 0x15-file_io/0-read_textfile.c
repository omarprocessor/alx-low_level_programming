#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t read_count, write_count;
char *buffer;

if (filename == NULL)
return (0);

buffer = (char *)malloc(letters);
if (buffer == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}

read_count = read(fd, buffer, letters);
if (read_count == -1)
{
close(fd);
free(buffer);
return (0);
}

write_count = write(STDOUT_FILENO, buffer, read_count);
if (write_count == -1 || write_count != read_count)
{
close(fd);
free(buffer);
return (0);
}

close(fd);
free(buffer);
return (read_count);
}


#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * return: if NULL, return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	if (close(fd) == -1)
	{
		return (-1);
	}
	return (1);
}
int main()
{
	const char *filename = "example.txt";
	char text_content[] = "this is the text to append";

	int result = append_text_to_file(filename, text_content);
	if (result == 1)
	{
		printf("Text appended successfully.\n");
	}
	else
	{
		printf("Failed to append text.\n");
	}

	return (0);
}

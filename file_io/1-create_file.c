#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - program creates a file
 * @filename: filename
 * @text_content: content wrote into the file
 * return: 1- if successful or -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	FILE *file_ptr;

	file_ptr = fopen(filename, "w");

	if (file_ptr == NULL)
	{
		printf("error opening file!\n");
		return (1);
	}
	fputs(text_content, file_ptr);

	fclose(file_ptr);

	return (0);
}
int main()
{
	const char *filename = "example.txt";
	char text_content[] = "this is an example content.";

	if (create_file(filename, text_content) == 0)
	{
		printf("file created and saved successfully.\n");
	}
	else
	{
		printf("Failed to create or write to the file.\n");
	}

	return (0);
}

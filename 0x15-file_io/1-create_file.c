#include "holberton.h"

/**
 * create_file - Create a file
 * @filename: name of file to be created
 * @text_content: NULL terminated string to write to the file
 * Description: function that create a file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_data, _write, len_text = 0;

	if (!(filename))
	{
		return (-1);
	}
	file_data = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_data == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[len_text])
		{
			len_text++;
		}
		_write = write(file_data, text_content, len_text);
		if (_write == -1)
		{
			return (-1);
		}

	}
	close(file_data);
	return (1);
}

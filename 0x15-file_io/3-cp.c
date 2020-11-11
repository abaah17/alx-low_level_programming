#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int f1, f2, _read, ch_in, ch_out;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	_file2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((_read = read(f1, buffer, 1024)) > 0)
	{
		if (_file2 < 0 || (write(_file2, buffer, _read) != _read))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	ch_in = close(f1);
	if (ch_in < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f1), exit(100);
	}
	ch_out = close(_file2);
	if (ch_out < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", _file2), exit(100);
	}
	return (0);
}

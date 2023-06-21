#include "shell.h"

/**
 * check_input - Verifies if input is from the terminal
 *
 * Return: Returns nothing (void)
 */

void check_input(void)
{
	if (isatty(STDIN_FILENO))
		_puts(":) ");
}

/**
 * check_EOF - Checks if the current position is end of the file
 * @len: The return value of getline function
 * @buffer: The temporal storage for holding data
 *
 * Return: Returns nothing (void)
 */
void check_EOF(int len, char *buffer)
{
	(void)buffer;
	if (len == -1)
	{
		if (isatty(STDIN_FILENO))
		{
			_puts("\n");
			free(buffer);
		}
		exit(0);
	}
}

/**
 * check_sig - Verifies if Ctrl C key combination is pressed
 * @sig: The int variable to compare to SIGINT
 *
 * Return: Returns nothing (void)
 */
void check_sig(int sig)
{
	if (sig == SIGINT)
	{
		_puts("\n:) ");
	}
}

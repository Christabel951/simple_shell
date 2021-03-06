#include "main.h"
/**
 * hsh_read_line - read and store string passed in commandline
 *
 * Return: command passed in string
 */
char *hsh_read_line(void)
{
	char *line = NULL;
	ssize_t bufsize = 0;
	
	if (getline(&line, &bufsize, STDIN_FILENO) == -1)
	{
		if (feof(STDIN_FILENO))
			exit(EXIT_SUCCESS);
		else
		{
			perror("readline");
			exit(EXIT_FAILURE);
		}
	}
	return (line);
}

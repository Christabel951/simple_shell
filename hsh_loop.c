#include "main.h"
/**
 * hsh_loop - print prompt, read, parse and execute commands
 */
void hsh_loop(void)
{
	char *line;
	char **args;
	int status;

	do
	{
		write(STDIN_FILENO, "($) ",4);
		line = hsh_read_line();
		args = hsh_split_line(line);
		status = hsh_execute(args);

		free(line);
		free(args);
	} while (status);
}

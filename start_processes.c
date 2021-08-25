#include "main.h"
int hsh_launch(char **args)
{
	pid_t pid, wpid;
	int status;

	pid = fork();
	if ( pid == 0)
	{
		if (execvp(args[0], args) == -1)
			perror("hsh");
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("hsh");
	}
	else
	{
		do
		{
			wpid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}

#include "main.h"
#define TOK_BUFSIZE 64
#define TOK_DELIM "\t\r\n\a"
/**
 * hsh_split_line - sperate command line arguments using whitespace
 * @line: string read from command line
 *
 * Description: Splits the string (line) using whitespaces into
 * substrings. The strings are stored into a null terminated array 
 * pointers
 * Return: array of char pointers (strings)
 */
char **hsh_split_line(char *line)
{
	int temp, position = 0, bufsize = TOK_BUFSIZE;
	char **tokens = malloc(sizeof(char) * bufsize);
	char *token;

	if (!tokens)
		alloc_err();
	token = strtok(line, TOK_DELIM);
	temp = bufsize;
	while (token)
	{
		tokens[position] = token;
		position++;
		if (position >= bufsize)
		{
			bufsize += TOK_BUFSIZE;
			tokens = _realloc(tokens, sizeof(char) * temp, sizeof(char) * bufsize);
			if (!tokens)
				alloc_err();
		}
		token = strtok(NULL, TOK_DELIM);
	}
	tokens[position] = NULL;
	return (tokens);
}

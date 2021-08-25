#include "main.h"
/**
 * main - displays a prompt and wait for user to type a command, 
 * then executes command entered
 * argc: number of arguments passed inclusive of program name
 * argv: arguments in an array of strings
 *
 * Description: The prompt is displayed again each time a command
 * is executed. No use of ;, | or > on command line
 * .The commandlines are made only of one word.
 * No arguments. If an executable does not exist, print an error message
 * and display prompt
 * Return: EXIT_SUCCESS
 */
int main(int argc, char **argv)
{
	hsh_loop();
	return (EXIT_SUCCESS);
}

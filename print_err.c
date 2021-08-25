#include "main.h"
/**
 * alloc_err - print allocation error and exits
 *
 * Description: displays information on error encountered in
 * memory allocation
 */
void alloc_err(void)
{
	char *allocation_err = "hsh: allocation error\n";
	write(STDERR_FILENO, allocation_err, _strlen(allocation_err));
	exit(EXIT_FAILURE);
}


#ifndef _MAIN_H_
#define _MAIN_H_

/* Header files */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*Function prototypes */
void hsh_loop(void);
char *hsh_read_line(void);
char **hsh_split_line(char *line);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _strlen(char *s);
void alloc_err(void);

int hsh_launch(char **args);
int (*builtin_func[]) (char **);
int hsh_num_builtins();
int hsh_execute(char **args);

/* Shell builtin function prorotypes */
int hsh_cd(char **args);
int hsh_help(char **args);
int hsh_exit(char **args);

#endif

#ifndef _SHELL__H
#define _SHELL__H
#define FILE_DESCRIPTOR 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

void show_prompt(void);
void _putchar(const char *message);
void browse_command(char *command, size_t size);
void _execute_command(const char *command);

#endif /* _SHELL__H */

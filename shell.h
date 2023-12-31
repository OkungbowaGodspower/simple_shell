#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <limits.h>

extern char **environ;

void run_shell(void);
char *get_input(void);
char **strsplit(const char *str, const char *delim);
void free_tokens(char **tokens);
int count_tokens(char **tokens);
void execute_command(char **args);
void handle_logical_operators(char *line);
void *safe_malloc(size_t size);
char *safe_strdup(const char *str);
void execute_setenv(char **args);
void execute_env(void);
void execute_cd(char **args);
void execute_unsetenv(char **args);
char *get_current_directory(void);
void execute_exit(char **args);

#endif /* SHELL_H */

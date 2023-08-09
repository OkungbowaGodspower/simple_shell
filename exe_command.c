#include "shell.h"

/**
  * execute_command - xecute a command in a child process
  *
  * @args: an array of strings representing the command and its arguments
  *
  * Return: nothing
  */

void execute_command(char **args)
{
	int status;

	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("execute_command");
		}
		exit(EXIT_FAILURE);
	} else if (pid < 0)
	{
		perror("execute_command");
	} else
	{
		do {
			pid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
}

/**
  * execute_env -  Print the current environment
  *
  * Return: nothing
  */

void execute_env(void)
{
	char **env = environ;

	while (*env)
	{
		printf("%s\n", *env);
		env++;
	}
}

/**
  * safe_malloc - allocate memory safely with error handling
  *
  * @size: size of the memory to allocate
  *
  * Return: a pointer to the allocated memory
  */

void *safe_malloc(size_t size)
{
	void *ptr = malloc(size);

	if (!ptr)
	{
		perror("Allocation error");
		exit(EXIT_FAILURE);
	}
	return (ptr);
}

/**
  * safe_strdup - duplicate a string safely with error handling
  *
  * @str: The string to be duplicated
  *
  * Return: a pointer to the duplicated string
  */

char *safe_strdup(const char *str)
{
	char *copy = safe_malloc(strlen(str) + 1);

	strcpy(copy, str);
	return (copy);
}

#include "shell.h"

/**
  * handle_logical_operators - handle multiple commands
  *
  * @line: a string representing the user input containing multiple commands
  *
  * Return: nothing
  */

void handle_logical_operators(char *line)
{
	char **commands = strsplit(line, ";");

	int idx = 0;

	while (commands[idx] != NULL)
	{
		char **args = strsplit(commands[idx], " \t");

		execute_command(args);
		free_tokens(args);
		idx++;
	}

	free_tokens(commands);
}

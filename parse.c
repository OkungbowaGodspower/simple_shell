#include "main.h"

/**
 * parse - Parses the input string into an array of strings
 * @input: The input string to be parsed
 *
 * Return: A pointer
 */

char **parse(char *input)
{
	char *item, **param = malloc(MAX_ARGS * sizeof(char *));

	if (!param)
	{
		perror("malloc error");
		exit(EXIT_FAILURE);
	}
	item = strtok(input, " \t\n");

	int i = 0;

	while (item != NULL && i < MAX_ARGS - 1)
	{
		param[i] = strdup(item);
		if (!param[i])
		{
			perror("strdup error");
			exit(EXIT_FAILURE);
		}
		item = strtok(NULL, " \t\n");
		i++;
	}
	param[i] = NULL;

	return (param);
}

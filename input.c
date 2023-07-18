#include "main.h"

/**
 * input_reader - Reads input from the user
 * @start: Indicate the method of input
 *
 * Return: a pointer
 */

char *input_reader(int start)
{
	char *put_in = malloc(MAX_INPUT_LENGTH * sizeof(char));

	if (!put_in)
	{
		perror("malloc error");
		exit(EXIT_FAILURE);
	}
	if (start)
	{
		if (fgets(put_in, MAX_INPUT_LENGTH, stdin) == NULL)
		{
			if (feof(stdin))
			{
				printf("\n");
				exit_shell(NULL);
			} else
			{
				perror("fgets error");
				exit(EXIT_FAILURE);
			}
		}
	} else
	{
		put_in[0] = '\0';
		if (scanf("%100[^\n]%*[^\n]", put_in) == EOF)
		{
			if (feof(stdin))
			{
				printf("\n");
				exit_shell(NULL);
			} else
			{
				perror("scanf error");
				exit(EXIT_FAILURE);
			}
		}
		getchar();
	}

	return (put_in);
}

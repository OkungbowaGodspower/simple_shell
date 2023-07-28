# This is a custom made simple shell (UNIX), it has the implementation of the original sh

Displays a prompt and waits for the user to type a command, ending with a new line.

After executing a command, the prompt is displayed again for the user to input another command.
The command lines are simple, no semicolons, no pipes, no redirections, or any other advanced features.

The command lines are simple, and the shell does not support semicolons, pipes, or redirections.
The command lines are made only of one word. No arguments will be passed to programs.

The shell considers the first word in the input line as the command and does not handle arguments.
If an executable cannot be found, it prints an error message and displays the prompt again.

The shell prints an appropriate error message if the command is not found and continues to display the prompt.
Handles errors and prints appropriate error messages.

The shell handles various errors, such as command not found, and prints appropriate error messages.
Handles the "end of file" condition (Ctrl+D).

The shell terminates gracefully if the "end of file" condition (Ctrl+D) is encountered.
Implements the exit built-in, exiting the shell with the specified status if an argument is provided or with status 0 otherwise.

The shell implements the exit built-in command, and it can exit with the specified status or status 0 if no argument is provided.
Implements the env built-in, printing the current environment.

The shell implements the env built-in command, which prints the current environment.
Implements the setenv and unsetenv built-in commands to initialize/modify and remove environment variables, respectively.

The shell implements the setenv and unsetenv built-in commands for initializing/modifying and removing environment variables.
Implements the cd built-in command, changing the current directory, handling cd -, and updating the PWD environment variable.

The shell handles logical operators "&&" and "||" to conditionally execute commands based on the previous command's success or failure.


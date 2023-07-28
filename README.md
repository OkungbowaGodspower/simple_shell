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

The shell handles logical operators "&&" and "||" to conditionally execute commands based on the previous command's success or failure.

The shell redirects input away from the keyboard and redirects output to a file or device other than the terminal.

The shell Links any number of commands together to form a complex program. The standard output of one program becomes the standard input of the next.

The shell Gives an alias name to a command or phrase. When the shell encounters an alias on the command line or in a shell script,
it substitutes the text to which the alias refers

Automatically produces a list of file names on a command line using pattern-matching characters.



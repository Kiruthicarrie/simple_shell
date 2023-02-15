#include <unistd.h>
#include <stdio.h>

int main(void)
{
	char *line = NULL;
	size_t nn;
	ssize_t bytes;

		while (1)
		{
			if (isatty(STDIN_FILENO) == 1)
				write(STDOUT_FILENO, "$ ", 2);
			bytes = getline(&line, &nn, stdin);

			{
				if (bytes != -1)
				{
					printf("%s", line);
				}
				else
				{
					printf("getline error\n");
				}
				if (line[1] == '#')
					break;
			}
			else
			{
				printf("Piped in\n");
				printf("%s\n", line);
			}
			while ((getchar()) != '\n');
		}
	return (0);
}

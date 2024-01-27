#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int	main()
{
	int fd[2];
	char tab[5];

	pid_t pid;

	if (pipe(fd) == -1)
		return (-1);
	
	pid = fork();
	if (pid == 0)
	{
		close(fd[0]);
		write(fd[1], "Hello", 5);
		close(fd[1]);
	}
	else
	{
		close(fd[1]);
		read(fd[0], tab, 5);
		close(fd[0]);
		printf("%s", tab);
	}
}
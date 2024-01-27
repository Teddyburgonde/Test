#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
		return (-1);
	if (pid == 0)
	{
		printf("je suis l'enfant\n");
		sleep(2);
	}
	else
	{
		wait(NULL);
		printf("je suis le parent\n");
	}
}
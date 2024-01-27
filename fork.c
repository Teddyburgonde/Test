#include <unistd.h>
#include <sys/wait.h>

int	main(void)
{
	pid_t pid;
	
	pid = fork();
	if (pid == 0) //enfant
		write(1, "Bonjour\n", 8);
	else //parent
	{
		wait(NULL);
		write(1, "BONJOUR\n", 8);
	}
}
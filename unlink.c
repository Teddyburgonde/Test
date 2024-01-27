#include <unistd.h>
#include <stdio.h>

int	main()
{
	if (unlink("example.txt") == 0)
		printf("fichier effacer");
	else
		printf("Erreur");
}
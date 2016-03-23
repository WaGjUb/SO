#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	int pid;
	int valor = 1000;
	
	pid = fork();
	
	if (pid)
	{
		printf("pid: %d... Valor antes da atribuição: %d \n", getpid(), valor);
		printf("pid: %d EU SOU SEU PAI e o PID do filho é: %d \n", getpid(), pid);
		valor = 5;
		printf("%d: valor: %d \n", getpid(), valor);
		wait(NULL);
	}
	else 
	{
		printf("%d: Valor antes da atribuição: %d \n", getpid(), valor);
		printf("%d: Eu sou filho do %d. (fork retornou %d) \n", getpid(), getppid(), pid);
		valor = 10;
		printf("%d: valor: %d \n", getpid(), valor);
	
		int i, j;
		for(i=0; i<100000; i++)
			for (j=0; j<100000; j++);
			printf("%d: terminei\n", getpid());
	}
	exit(1);
	return(0);
}

#include <unistd.h>
#include <stdio.h>

int main()
{
	printf("antes do exec\n");
	execl("./forkteste.o", "/home/todos/alunos/cm/a1625381/a.out", "-r", "-t", "-l", (char*) 0);
	printf("depois do exec\n");
return(0);
}

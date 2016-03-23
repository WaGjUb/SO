#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int pai;
	while (1)	
	pai = fork();
	
	if (pai)
	{
		printf("pai %d\n", pai);
	}	
	else
	{
		printf("filho %d\n", pai);
	}

	return 0;
}

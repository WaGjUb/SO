#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

float *a;
float *b;
float *c;

int main( int argc, char *argv[] ){
	//verificar se os argumentos estão corretos
    if(argc != 2){
		fprintf(stderr, "uso: %s tam_vetor\n", argv[0]);
		exit(1);
    }

	//quantos elementos nos vetores?
    int n = atoi(argv[1]);
 
	//alocar os vetores a serem somados e o vetor resultante. O valor inicial dos itens é irrelevante.
    size_t bytes = n*sizeof(float);
    a = (float*)malloc(bytes);
    b = (float*)malloc(bytes);
    c = (float*)malloc(bytes);
 
	//realizar a soma vetorial
	int i;
	for(i = 0; i < n; i++){
		c[i] = a[i] + b[i];		
	}

    free(a);
    free(b);
    free(c);

    return 0;
}

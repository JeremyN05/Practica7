#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]){

	int n;
	printf("Introduce la cantidad de números a introducir: ");
	scanf("%d", &n);

	int* array = malloc (n * sizeof(int));
	if(array == NULL){
		printf("Error al reservar memoria\n");
		exit(0);
	}

	for(int i = 0; i < n; i++){
		printf("Introduce el número %d: ", i+1);
		scanf("%d", &array[i]);
	}

	int aux, j;
	for (int i = 0; i < n; i++){
		for(j = i + 1; j < n; j++){
			if(array[i] > array[j]){
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
			}
		}
	}

	for (int i = 0; i < n; i++){
		printf("%d, ", array[i]);
	}

	free(array);

}
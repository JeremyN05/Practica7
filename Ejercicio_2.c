#include <stdio.h>
#include <stdlib.h>

//Defino las constantes que voy a utilizar

#define MAX_NOMBRE 20
#define MAX_APELLIDO 20
#define MAX_NOTA 10

typedef struct{
	
	char Nombre[MAX_NOMBRE];
	char Apellido[MAX_APELLIDO];
	float Nota;

}Estudiante;

int main(){

int numero_estudiantes;

int valor_retorno;

do{
	printf("Ingrese el número de alumnos a introducir: ");
	valor_retorno = scanf("%d", &numero_estudiantes);

	while(getchar() != '\n');
		if (valor_retorno == 0){
				printf("Error, el dato introducido no es un número, inténtelo de nuevo. \n");
	}

}while (valor_retorno == 0);

Estudiante *Estudiantes = (Estudiante*) malloc(numero_estudiantes *	 sizeof(Estudiante));

if (Estudiantes == NULL){

	printf("ERROR, no se puede asignar memoria \n");

}

for (int i = 0; i < numero_estudiantes; i++){

	printf("Introduzca el nombre del estudiante: ");
	scanf("%s", Estudiantes[i].Nombre); 

	printf("Introduzca el apellido del estudiante: ");
	scanf("%s", Estudiantes[i].Apellido);

do{
	printf("Introduzca la nota del estudiante: ");
	valor_retorno = scanf("%f",&Estudiantes[i].Nota);
	
	while (getchar() != '\n'); 
			if (valor_retorno == 0){
				printf("Error, el dato introducido no es un número, inténtelo de nuevo. \n");
	}

}while (valor_retorno == 0);

}

for (int i = 0; i < numero_estudiantes; i++){

	printf("%s %s Nota: %2.f \n", Estudiantes[i].Nombre, Estudiantes[i].Apellido, Estudiantes[i].Nota);
}

	free(Estudiantes);
	return 0;
}
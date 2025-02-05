#include <stdio.h>
#include <stdlib.h>

int main(){

	int largo;
	int ancho; //El maximo es 72 (En mi pantalla, mirar en otra pantalla)

	char posicion;

	printf("Introduce el largo del tablero: ");
	scanf("%d", &largo);

	printf("Introduce el ancho del tablero: ");
	scanf("%d", &ancho);

	int vertical = largo / 2;
	int horizontal = ancho / 2;

	while (1){

		for (int i = 0; i < largo; i++){

				for (int j = 0; j < ancho; j++){

						if (i > 0 && i < (largo - 1)){

								if ( i == vertical && j == horizontal) {

										printf("# ");

								}else if (j > 0 && j < (ancho - 1)){

										printf("  ");
								
								}else{

										printf("* ");}

						}else{

								printf("* ");} 
				}

				printf("\n");
		}

		printf("Introduce W = (Arriba),A = (Izquierda),S = (Abajo), D = (Derecha), Q = (Salir): \n");
		scanf("%c", &posicion);

		system("clear");

		if (posicion == 'w' || posicion == 'W'){
				vertical-= 1;

			if(vertical < 1 ){
				vertical+=1;
			}

		}else if(posicion == 'a' || posicion == 'A'){
			horizontal-= 1;

			if(horizontal < 1 ){
				horizontal+=1;
			}
		
		}else if(posicion == 's' || posicion == 'S'){
			vertical+= 1;

			if(vertical > (largo - 2) ){
				vertical-=1;
			}
		
		}else if(posicion == 'd' || posicion == 'D'){
			horizontal+=1;

			if(horizontal > (ancho - 2) ){
				horizontal-=1;
			}
		
		}else if(posicion == 'q' || posicion == 'Q'){
			break;
		}
	}

return 0;
}

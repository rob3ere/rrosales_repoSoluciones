/*Forma narrada:
 *Paso 1:Determinar las variables
 *Paso 2:Pedir que ingrese el valor del traje y guardarlo en la variable "traje"
 *Paso 3:Iniciar una estructura selectiva (if) para determinar uno de los tres tipos de selecciones o estructuras
 *Paso 4:Se entrega el valor del traje 
 *Paso 5:Terminar todo con "return 0;" */

#include <stdio.h>

int main()
{
    //Paso 1
	int traje,v_traje;
	
	//Paso 2
	printf ("Introdusca valor del traje:");
	scanf ("%d",&traje);
	
	//Paso 3
	if (traje > 2500) {
		v_traje= traje -(traje*0.15); 
	}
	
	if (traje < 2500) {
		v_traje= traje -(traje*0.08);
	}

	if (traje <= 0) {
		printf ("\nEl valor ingresado no es valido");
	}
	//paso 4
	printf ("\nEl valor del traje es:%d",v_traje);
	
	//paso 5
	return 0;
}

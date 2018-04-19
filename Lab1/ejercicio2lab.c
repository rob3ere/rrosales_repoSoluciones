/*forma narrada:
 * paso 1:Determinar las variables
 * paso 2:Pedir la cuenta y guardarla en la variable "cuenta"
 * paso 3:Determinar la operación para saber el valor del iva:
 *        iva= (cuenta*19)/100; 
 * paso 4:Determinar la operación para saber el valor de la propina:
 *        propina= (cuenta+iva)*10/100;
 * paso 5:Determinar la operación para saber el valor de la cuenta:
 *        total_cuenta= cuenta+iva+propina;
 * paso 6: Pedir que ingrese el número de personas y guardarlo en la variable "n_personas"
 * paso 7:Para determinar el valor que debe pagar cada uno se ocupa la operación:
 *        cada_1= total_cuenta/n_personas; y mostrar por pantalla la cantidad que debe pagar cada uno
 * paso 8:Finalizar todo con "return 0;"*/
 
#include <stdio.h>

int main()
{
	//paso 1
	int n_personas,cuenta,total_cuenta,propina;
	float cada_1,iva;
	
	//paso 2
	printf("Ingrese la cuenta:");
	scanf ("%d",&cuenta);
	
	//paso 3
	iva= (cuenta*19)/100; 
	printf ("\niva:%.0f",iva);
	
	//paso 4
	propina= (cuenta+iva)*10/100;
	printf ("\npropina:%d",propina);
	
	//paso 5
	total_cuenta= cuenta+iva+propina;
	printf ("\nEl total de la cuenta es:%d",total_cuenta);
	printf ("\n");
	
	//paso 6
	printf ("\nIngrese número de personas:");
	scanf ("%d",&n_personas);
	printf ("\n");
	
	//paso 7
	cada_1= total_cuenta/n_personas;
	printf ("Lo que debe pagar cada uno es:%.0f",cada_1);
	
	//paso 8
	return 0;

}

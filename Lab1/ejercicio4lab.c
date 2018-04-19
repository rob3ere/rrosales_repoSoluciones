#include <stdio.h>

int main()
{
	int v_base,tamano,pago;
	float n_kilos;
	char tipo;
	
	printf ("¿Cuanto cuesta el kilo?:");
	scanf ("%d", &v_base);
	
	printf ("¿Cuantos kilos va a vender?:");
	scanf ("%f",&n_kilos);
	
	while (getchar()!='\n');
	printf ("Ingresar el tipo de uva:");
	scanf ("%c",&tipo);
	
	printf ("Ingrese el tamaño:");
	scanf ("%d", &tamano);
	
	if(tipo=='a' && tamano==1)
	{
		pago = n_kilos*v_base+n_kilos*20;
	printf ("El valor es:%d",pago);
}
	else if (tipo=='a' && tamano==2)
	{
		pago = n_kilos*v_base+n_kilos*30;
	printf ("El valor es:%d",pago);
}
	else if (tipo=='b' && tamano==1)
	{
		pago = n_kilos*v_base-n_kilos*30;
	printf ("El valor es:%d",pago);
}
	else 
	{
		pago = n_kilos*v_base-n_kilos*50;
	printf ("El valor es:%d",pago);
}
	return 0;
}

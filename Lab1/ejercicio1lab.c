#include <stdio.h>
#include <stdlib.h>


int main ()
{
	float cand1=0, cand2=0, cand3=0,nulos=0,total_votos =0;
	char voto;
	//float prom1=0, prom2=0, prom3=0;
	while (voto!='f' && voto!='F')
	{
		printf ("ingrese su voto: ");
		//system("clear");
		scanf ("%c", &voto);
		
		if (voto=='1')
		{
			cand1 = cand1 + 1 ;
		}
		else
			if(voto=='2')
			{
				cand2 = cand2 + 1;
			}
		else
			if (voto=='3')
			{
				cand3 = cand3 + 1;
			}
		else
		{
			if (voto!='f')
			{
				nulos=nulos+1;
			}
		}
		
		while(getchar()!='\n');											
	}
		char porcent = '%';
		total_votos=cand1+cand2+cand3+nulos;
		printf("%.f votos candidato1 (%.2f%c),\n%.f votos candidato2 (%.2f%c),\n%.f votos candidato3 (%.2f%c)\n",cand1,(cand1/total_votos)*100,porcent,cand2,(cand2/total_votos)*100,porcent, cand3,(cand3/total_votos)*100,porcent);
		printf("%.f votos nulos: (%.2f%c),\n",nulos,(nulos/total_votos)*100,porcent);			
		printf("%.f total votos: ",total_votos);	
		
		printf("\n");
		if(cand1>cand2 && cand1>cand3){
			printf("Gana candidato 1!");
		}
		else{
			if(cand2>cand1 && cand2>cand3){
				printf("Gana candidato 2!");
			}
			else{
				if(cand3>cand2 && cand3>cand1){
					printf("Gana candidato 3!");
				}
				else{
					printf("Empate");
				}
			}
		}
}

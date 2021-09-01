#Include <stdio.h>
#include <stdlib.h>

int main()
{
	int num=1, cont=1, mayor=0, prom_final=0, prom=0;
	prom=0;
	while(cont<15){
		printf("Ingrese el nro%d:\n", cont);
		scanf("%d", &num);
		if (num>mayor){
			mayor=num;
		}
		prom=prom+num;
		cont=cont+1;
	}
	promf=prom/15;
	printf("El numero mayor es %d, y el promedio es %d", mayor, promf);
	return 0;
}

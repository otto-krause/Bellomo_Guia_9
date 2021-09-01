#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int num=0,fac=0,r=1;
	printf("Ingresa el numero para calcular el factoriar:");
	scanf("%d",&num);
	fac=num;
	while(fac>0){
		(fac==1);
		r=r*fac;
		fac=fac-1;
	}
	printf("\nEl resultado de factorial de %d es: %d",num,r);
    return 0;
}

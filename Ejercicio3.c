#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int I=0, Num1=0, Num2=0;
	printf("Ingrese el menor numero ");
	scanf("%d",&Num1);
	printf("Ingrese el mayor numero ");
	scanf("%d",&Num2);
	
	while (Num1<Num2-1)
	{
		Num1=Num1+1;
		printf("%d\n", Num1);
	}
	return 0;
}

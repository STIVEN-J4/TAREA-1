#include<stdio.h>
int par(int numero);
int impar(int numero);
int main ()
{
	int numero;
	do{
		printf(" Ingresar un numero mayor que cero:\n");
		scanf("%d",&numero);
	}
	while (numero<=0);
	if(par(numero))
	printf("El numero %d es par",numero);
	else
	printf("El numero %d es impar",numero);
}
int par(int numero)
{
	if (numero==0)
	return 1;
	else
	return impar(numero-1);
}
int impar(int numero)
{
	if (numero==0)
	return 0;
	else
	return par (numero-1);
}

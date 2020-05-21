#include<stdio.h>
#include<conio.h>
void intercambiar(float *numb1,float *numb2);
void ordenar(float arreglo[],int indicetotal);
void imprimir(float arreglo[],int indicetotal);

int main ()
{

	float arreglo[10]={25.5,27.6,15.24,3.27,5.15,6.21,7.57,4.61,5.4};
	imprimir(arreglo,10);
	ordenar(arreglo,10);
	imprimir(arreglo,10);
}
void intercambiar (float *numb1,float *numb2)
{
	float temporal;
	temporal=*numb1;
	*numb1=*numb2;
	*numb2=temporal;
}
void ordenar(float arreglo[],int indicetotal)
{
	int contadori,j;
	for (contadori=indicetotal-1;contadori>0;contadori--)
		for(j=0;j<contadori;j++)
			if(arreglo[j]>arreglo[j+1])
			intercambiar(&arreglo[j],&arreglo[j+1]);
}
void imprimir(float arreglo[],int indicetotal)
{
	int i;
	for(i=0;i<indicetotal-1;i++){
	printf("%2.f\t",arreglo[i],((i+1)%10==0?'\n':' '));
	/*si((i+1)%10==0)*/
}
printf("%.2f\n",arreglo[indicetotal-1]);
}

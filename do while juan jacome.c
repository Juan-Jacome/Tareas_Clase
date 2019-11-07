/******************************************************************************

Calcular un factorial de un numero
Juan Jacome

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1,numero,resultado=1;
    printf("Ingrese un numero:");
    scanf("%d",&numero);
    do
    {
        resultado=resultado*cont;
        cont++;
    }while(cont<=numero);
    printf("El factorial del numero %d\n",resultado);
    
}


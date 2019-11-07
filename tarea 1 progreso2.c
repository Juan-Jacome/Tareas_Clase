/******************************************************************************
Realizar un programa en C que calule el area de un circulo
Juan Jacome fila2 
*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float areaCirculo(float);
int factorial(int);
int tablaMult(int,int);
void parImpar(int);
void main()
{
    float radio;
    int num,tabla,lim,op;
    do
    {
        printf("1.Area del circulo\n2.Factorial\n3.Tabla multiplicar\n4.Par o Impar\n5.Numero de numeros pares e impares\n6.Salir\n");
        printf("Escoja la opcion:");
        scanf("%d",&op);
    switch(op)
    {
        case 1:
            printf("Area del circulo\n");
            printf("Ingrese el radio:");
            scanf("%f",&radio);
            printf("El area del circulo %.2f\n",areaCirculo(radio));
        break;
        case 2:
            printf("Factorial de un numero\n");
            printf("Ingrese el numero:");
            scanf("%d",&num);
            printf("El factorial es %d\n",factorial(num));
        break;
        case 3:
            printf("Tabla de multiplicar\n");
            printf("Ingrese la tabla de multiplicar:");
            scanf("%d",&tabla);
            printf("Ingrese el limite:");
            scanf("%d",&lim);
            tablaMult(tabla,lim);
        break;
        case 4:
            printf("Par o Impar\n");
            printf("Ingrese el numero:");
            scanf("%d",&num);
            parImpar(num);
        break;
        case 5:
            {
            int cont=1,nnum,numeros,conti=0,contp=0;
            printf("Cuantos numeros va ingresar");
            scanf("%d",&nnum);
            while(cont<=nnum)
            {
                printf("Ingrese un numero");
                scanf("%d",&numeros);
                cont++;
                if (numeros%2==0)
                    contp++;
                else
                    conti++;
            }       
            printf(" el numero de pares es %d e impares %d\n",contp,conti);
        }
        break;
        case 6:
            exit(0);
        break;
    }
}while(op<=5);
}

float areaCirculo(float radio)
{
    float area=0,pi=3.1416;
    area=pi*pow(radio,2);
    return area;
}
int factorial(int num)
{
    int fact=1,cont=1;
    while(cont<=num)
    {
        fact=fact*cont;
        cont++;
    }
    return fact;
}
int tablaMult(int tabla,int lim)
{
    int mult=1,cont=1;
    while(cont<=lim)
    {
        mult=tabla*cont;
        printf("%dX%d=%d\n",tabla,cont,mult);
        cont++;
    }
    return mult;
}
void parImpar(int num)
{
    if(num%2==0)
        printf("Es par\n");
    else
        printf("Impar\n");
}
int nnum(int num)
{
    
}



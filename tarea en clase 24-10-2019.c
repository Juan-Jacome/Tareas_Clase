/******************************************************************************

Juan Andres Jacome
Fila 1 While
Tarea en clase sentencias repetitivas 24-10-2019
Realiza un programa en C que, al recibir como dato un entero positivo, obtenga e imprima la
sucesión de ULAM, la cual se llama así en honor del matemático S. Ulam.
Sucesión de ULAM
1. Inicia con cualquier entero positivo.
2. Si el número es par, divídelo entre 2. Si es impar, multiplícalo por 3 y agrégale 1.
3. Obtén sucesivamente números enteros repitiendo el proceso.
Al final obtendrás el número 1. Por ejemplo, si el entero inicial es 45, la secuencia
es la siguiente: 45, 136, 68, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1.
Dato: N (variable de tipo entero que representa el entero positivo que se ingresa).


*******************************************************************************/
#include <stdio.h>

void main()
{
    int n,com=1,v1=0;
    printf("Ingrese un numero entero positivo:");
    scanf("%d",&n);
    while(n!=1)
    {
      com=n%2;
      if(com==1){
        v1=(n*3)+1;
      }
    else{
        v1=n/2;
    }
    printf("%d\n",v1);
    n=v1;
      
    }
    

}


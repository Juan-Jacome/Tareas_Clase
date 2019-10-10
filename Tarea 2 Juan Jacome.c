/******************************************************************************

Juan Jacome
Tarea2
Ejercicio1

*******************************************************************************/
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

    void main()
    {
    int edad;
    int sexo;
    int tiempot=0;
    int trabaja;
    int puntos;
    int horas;
    float sueldo;
    	printf("Ingrese su edad\n");
    	scanf("%d",&edad);
    	printf("Es trabajador de la empresa?(1=si 2=no)\n");
    	scanf("%d",&trabaja);
    	if(trabaja==1){
    	printf("Ingrese salario:");
    	scanf("%f",&sueldo);
    	printf("Ingrese 1 si es sexo femenino o 2 si es masculino\n");
    	scanf("%d",&sexo);
    	printf("Trabajo mas de un año en la empresa?(1=si y 2=no)");
    	scanf("%d",&tiempot);
    	if(tiempot==1){
    	printf("ingrese cuantos años trabaja en la empresa\n");	
    	scanf("%d",&tiempot);
    	}
    	else{
    	printf("cuantas horas trabaja en la empresa");
    	scanf("%d",&horas);
    	}
    	if(horas>40){
    	sueldo=sueldo+50;
    	}
    	if(sexo==1 && tiempot>30 ||edad>25 && tiempot>30){
    		sueldo = sueldo+800;
    		
    	}
    	else{
    		sueldo = sueldo +100;
    	}
    	printf("Su nuevo sueldo es= %.2f",sueldo);
    	}
    	else{
    		printf("cuanto puntos obtuvo");
    		scanf("%d",&puntos);
    		if(edad>18 && puntos>85){
    			printf("contratado");
    		}
    			
    	}
    
    	
    }



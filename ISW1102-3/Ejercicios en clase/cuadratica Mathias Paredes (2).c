/******************************************************************************

Realizar un programa que permita obtener la solución o soluciones de una ecuación
cuadrática, debe especificar los datos de entrada, proceso y salida.

Datos entrada
Decimal a,b,c,x1=0,x2=0

proceso
Escribir "Ingrese el valor de a"
Leer a
Escribir "Ingrese el valor de b"
Leer b
Escribir "Ingrese el valor de c"
Leer c
aplicar formula para obtener x1 y x2

datos salida
Imprimir valor de x1
Imprimir valor de x2


*******************************************************************************/

#include <stdio.h>//Declaracion de librerias
#include <math.h>
void main()
{
    float valorA,valorB,valorC,x1=0,x2=0; //Defino las variables
    printf ("Ingrese el valor de a: "); // Ingreso texto para conocer valor de a
    scanf ("%f",&valorA); //lee valor de a
    printf ("Ingrese el valor de b: ");// Ingreso texto para conocer valor de b
    scanf ("%f",&valorB); //lee valor de b
    printf ("Ingrese el valor de c: ");// Ingreso texto para conocer valor de c
    scanf ("%f",&valorC); //lee valor de c
    x1=(-valorB+sqrt(pow (valorB,2)-4*valorA*valorC))/2*valorA; //Planteo la formula para obtener x1
    x2=(-valorB-sqrt(pow (valorB,2)-4*valorA*valorC))/2*valorA; //Planteo la formula para obtener x2
    printf("x1 = %.3f\n",x1); //Imprimo valor de x1
    printf("x2 = %.3f\n",x2); //Imprimo valor de x2
    
    
    
    
}

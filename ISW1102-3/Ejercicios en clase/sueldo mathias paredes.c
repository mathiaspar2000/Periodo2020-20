/******************************************************************************

Datos de entrada
Ingresar el grupo al que pertenece
Horas trabajadas
Genero
Tiempo que lleva en la empresa
Puntaje en la prueba
Proceso 
Ingresar el grupo al que pertenece
leer grupo
Si es del grupo 1 entonces Ingresar horas trabajadas
Leer horas trabajadas
Ingresar Genero
Leer Genero
Ingresar Tiempo que lleva en la empresa
Leer Tiempo
Si trabajo mas de 40 horas entonces sueldo incrementa 50
caso contrario si el empleado es mujer o mayor de 25 entonces sueldo incrementa 800
caso contrario sueldo incrementa 100
Si perteneceal grupo 2 entonces
Ingresar edad
Leer edad
Ingresar Puntaje
Leer Puntaje
Si tiene mas de 30 y tiene mas de 85 puntos entonces es contratado 
caso contrario no es contratado
Datos de salida
Imprimir incremento o imprimir contrato

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void main()
{
    int grupo, horas,Tiempo,Puntaje,edad,Genero;

    printf ("Ingrese a que grupo pertenece "); //muestro texto para que ingrese su grupo
    scanf("%i",&grupo);// lee el grupo
    if (grupo==1)// pongo la condicion de grupo
    {
        printf ("Ingrese horas trabajadas ");//muestro texto para que ingrese las horas
        scanf("%i",&horas);// lee las horas
        printf ("Ingrese su edad ");//muestro texto para que ingrese las edad
        scanf("%i",&edad);// lee la edad
        printf ("Ingrese 1 si su genero es femenino ");//muestro texto para que ingrese el Genero
        scanf("%i",&Genero);// lee el Genero
        printf ("Ingrese el timepo en la empresa ");//muestro texto para que ingrese eltiempo en la empresa
        scanf("%i",&Tiempo);// lee el Tiempo
        if (horas>40)// pongo la condicion de horas
          printf ("sueldo incrementa 50$");//muestro texto del incremento del sueldo
        else if (edad>25 || Genero==1 && Tiempo >30)// pongo la condicion del Genero
          printf ("sueldo incrementa 800$");//muestro texto del incremento del sueldo
        else// pongo la condicion resultante
          printf ("sueldo incrementa 100$");//muestro texto del incremento del sueldo
    }  
    else// pongo la condicion resultante del grupo
        printf ("Ingrese su edad ");//muestro texto para que ingrese las edad
        scanf("%i",&edad);// lee la edad
        printf ("Ingrese su Puntaje ");//muestro texto para que ingrese el Puntaje
        scanf("%i",&Puntaje);// lee el Puntaje
        if (edad>=18&Puntaje>85)// pongo la condicion de Puntaje
          printf ("Esta contratado"); //muestro el reslutado
        else // pongo la condicion contraria
          printf ("No esta contratado");//muestro el reslutado
}


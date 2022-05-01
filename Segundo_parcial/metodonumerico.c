/*
Autor:        Abel Hernández
fecha:        Sat Apr 30 15:18:15 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o metodonumerico.out metodonumerico.c -lm
Librerias:    stdio
resumen:      
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototipos de funciones
float f(float x);
float df(float x);
void NewtonRaphson(float x0, float tol, int maxiter, int *antiter, float *sol);

void main (void)
{
    //definir variables
    float x_inicial, tolerancia, xSolucionGeneral;
    int iteraciones, Aiteracion;
    
    //obtener datos del usuario
    printf("Ingrese el valor aproximado de x: ");
    scanf("%f",&x_inicial);
    printf("Ingrese el valor de tolerancia: ");
    scanf("%f",&tolerancia);
    printf("Ingrese el valor maximo de iteraciones: ");
    scanf("%d",&iteraciones);

    //Solución del problema
    NewtonRaphson(x_inicial, tolerancia, iteraciones, &Aiteracion, &xSolucionGeneral);
    
    //Verifica si la iteracion anterior es igual a 
    if (Aiteracion == iteraciones)
        printf("\n No hay solucion despues de %d iteraciones\n",iteraciones);
    else
    {
        printf("\n Luego de %d iteraciones la solucion es %.4f\n",Aiteracion,xSolucionGeneral);
    }
}
//Empieza la solución del problema
void NewtonRaphson(float x0, float tol, int maxiter, int *antiter, float *sol)
{
    //Variables locales
    float xant, x, dif;
    int i=1;
    xant=x0;
    
    //Solución de la primera iteración
    x=xant-f(xant)/df(xant);

    //Verificamos si la resta es menor a cero
    dif = x-xant;
    (dif<0)?dif=-dif:dif;
    printf("%f\n",dif);
    
    //Realizar todas las iteraciones
    while (dif>tol && i<maxiter)
    {        
        xant=x;
        x=xant-f(xant)/df(xant);
        i++;
        dif = x-xant;
        
        (dif<0)?dif=-dif:dif; 
        printf("%f\n",dif);
    }
    //Apuntar a la memoria para la respuesta
    *sol=x;
    *antiter = i;
}

//Ecuación 
float f(float x)
{
    float res =0;
    res = 0.1*x*x + x*log(x) ;
    return res;
}

//Primera derivada
float df(float x)
{
    float res =0;
    res=0.2*(x) + 1;
    return res;
}

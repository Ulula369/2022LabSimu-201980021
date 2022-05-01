/*
Autor:        Abel Hernández
fecha:        Tue Apr 26 18:03:33 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o newtonraphson.out newtonraphson.c -lm
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
void NewtonRaphson(float x0, float tol, int maxiter, int *actiter, float *sol);

void main (void)
{
    //definir variables
    float x_inicial, tolerancia, xS;
    int iteraciones, Aiteracion;
    
    //obtener datos
    printf("Ingrese el valor aproximado de x: ");
    scanf("%f",&x_inicial);
    printf("Ingrese el valor de tolerancia: ");
    scanf("%f",&tolerancia);
    printf("Ingrese el valor maximo de iteraciones: ");
    scanf("%d",&iteraciones);
    NewtonRaphson(x_inicial, tolerancia, iteraciones, &Aiteracion, &xS);
    if (Aiteracion == iteraciones)
        printf("\nNo hay solucion despues de %d iteraciones\n",iteraciones);
    else
    {
        printf("\nLuego de %d iteraciones la solucion es %.4f\n",Aiteracion,xS);
    }
}

void NewtonRaphson(float x0, float tol, int maxiter, int *actiter, float *sol)
{
    float xant, x, dif;
    int i=1;
    xant=x0;
    x=xant-f(xant)/df(xant);
    dif = x-xant;
    (dif<0)?dif=-dif:dif;
    printf("%f\n",dif);
    while (dif>tol && i<maxiter)
    {        
        xant=x;
        x=xant-f(xant)/df(xant);
        i++;
        dif = x-xant;
        (dif<0)?dif=-dif:dif; 
        printf("%f\n",dif);
    }
    *sol=x;
    *actiter = i;
}

float f(float x)
{
    float res =0;
    res = x*x*x-x-1;
    return res;
}

float df(float x)
{
    float res =0;
    res=3*(x*x)-1;
    return res;
}
/*
Autor:        Abel Hernández
fecha:        Sat Apr 30 15:18:15 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o metodonumerico.out metodonumerico.c -lm
Librerias:    stdio, stdlib, math 
resumen:      En este programa se encuntra la raín de la función 0.1*x*x + x*log(x)
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Se prototipan las siguientes funciones

// Función original
float f(float x); 

// La primera derivada de la función 
float df(float x); 

//Función del Metodo de Newton Raphson 
void NewtonRaphson(float x0, float tol, int maxiter, int *antiter, float *sol); 

//Se inicia la función principal
void main (void)
{
    //definir variables
    // x_inicial es el primer valor que debe ingresar el usuaurio
    //Tolerancia es el margen de error que debe ingresar el usuario
    //xSolucionGeneral es la variable para la solucion general 
    float x_inicial, tolerancia, xSolucionGeneral;

    // iteraciones es la variable para que el usuario ingrese el numero d
    // iteraciones que desea que el programa ejecute
    //Aiteracion es la iteracion anterior
    int iteraciones, Aiteracion;
    
    //Obtener datos del usuario
    printf("Ingrese el valor aproximado de x: ");
    scanf("%f",&x_inicial);
    printf("Ingrese el valor de tolerancia: ");
    scanf("%f",&tolerancia);
    printf("Ingrese el valor maximo de iteraciones: ");
    scanf("%d",&iteraciones);

    //Solución del problema 
    NewtonRaphson(x_inicial, tolerancia, iteraciones, &Aiteracion, &xSolucionGeneral);
    
    //Verifica si la iteracion anterior es igual al numero de iteraciones que
    //ingreso el usuario
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
    //Si la diferencia es menor que cero entonces imprime el valor absoluto
    (dif<0)?dif=-dif:dif;
    printf("%f\n",dif);
    
    //Realizar todas las iteraciones
    // El ciclo while permite que se ejecute mientras la diferencia sea 
    // sea mayor que el total y menor que el número máximo de iteracciones
    while (dif>tol && i<maxiter)
    {        
        xant=x;
        x=xant-f(xant)/df(xant);
        i++;
        dif = x-xant;
        
        // Si la diferencia es menor que cero entonces la diferencia
        //es igual al negativo pero con su valor absoluto
        (dif<0)?dif=-dif:dif; 
        printf("%f\n",dif);
    }
    //Apuntar a la memoria para la respuesta
    *sol=x;
    *antiter = i;
}
// Genera la gráfica de la función 
system("gnuplot graficametodonumerico.gp");


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

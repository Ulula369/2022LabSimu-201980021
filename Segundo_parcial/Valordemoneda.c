/*
Autor:        Abel Hernández
fecha:        Thu Apr 28 16:53:58 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o Valordemoneda.out Valordemoneda.c -lm
Librerias:    stdio, math 
resumen:      gráfica y recta de mejor aproximación del valor del dolar estadounidense
*/

//librerias
#include <stdio.h>
#include <math.h>
//Se define una constante para el tamaño del vector 
#define NUM 14

//Se declaran las variables
float tiempo[] = {2006,2007,2008,2009,2010,2011,2012,2013,2014,2015,2016,2017,2018,2019};
float euros[] = {1.003,0.981,0.968,0.923,0.880,0.856,0.847,0.826,0.804,0.783,0.792,0.750,0.726,0.738};

//Se mide el tamaño del vector por medio del tamaño de los bytes que ocupa cada elemento
int n = sizeof(tiempo)/sizeof(tiempo[0]);


// Prototipar funciones
float suma(float datos[]);
float sumaMulti(float datos1[], float datos2[]);


void main () 
{
    // Se declaran las variables del problema 
    float b, m, r, y, e;
    int x, f = 0;

    //Se imprimen las etiquetas y los valores para que el usuario sepa la información 
    puts("Comportamiento de dolar estadounidense ante el euro\n"); 
    puts("Año \t Euros");
    int i = 0;
    for (i = 0; i < NUM; i++)
    {
        printf("%.0f \t %.3f\n", tiempo[i], euros[i]);
    }
    

    // Realiza la suma de los elementos del vector ingresado
    float suma(float datos[])
    {
        float resp = 0;
        for (int i = 0; i < n; i++)
        {
            resp += datos[i];
        }
        return resp;
    }

    // Realiza la suma y multiplicación de los elementos de dos vectores ingresados
    float sumaMulti(float datos1[], float datos2[])
    {
        float resp = 0;
        for (int i = 0; i < n; i++ )
        {
            resp += datos1[i]*datos2[i];
        }
        return resp;
    }

    //Se calculan los valores de ecuación lineal, por medio de mínimos cuadrados
    m = (n*sumaMulti(tiempo,euros)-(suma(tiempo)*suma(euros)))/(n*sumaMulti(tiempo,tiempo)-(suma(tiempo)*suma(tiempo)));
    b = (suma(euros)-m*suma(tiempo))/n;
    r = (n*sumaMulti(tiempo,euros)-(suma(tiempo)*suma(euros)))/sqrt((n*sumaMulti(tiempo,tiempo)-(suma(tiempo)*suma(tiempo)))*(n*sumaMulti(euros,euros)-(suma(euros)*suma(euros))));
    
    //Imprime la ecuación lineal 
    printf("y = %.5fx + %.5f \n",m,b);
    
    //Imprime coeficiente de determinación r cuadrado 
    printf("Coeficiente de determinación: %.5f \n\n",r*r); 

    //Se pregunta al usuario el año que desea aproximar 
    printf("Ingrese el año que desea aproximar:");
    //Se declara la variable local y se le pide al usuario que ingrese el año que desea aproximar
    //int x = 0;
    scanf("%i", &x);
    
    //Se calcular el valor del dolar según el año que ingresó el usario
    y = (m*x + b);

    //Se imprime el valor con cinco cifras decimales
    printf("y = %.5f*%i + %.5f\n",m,x,b);  
    printf("El valor aproximado del dolar es de: %.3f \n\n", y);

    // Estimación del año en el que el dolar no tendrá valor
    f = (-b/m);
    printf("Se estima que el año en el que el dolar no tendrá valor será en: %i \n", f);
    //float e; 
    e = (m*f + b);
    printf("Su valor en este año será de: %.3f \n\n", e);
}    
    
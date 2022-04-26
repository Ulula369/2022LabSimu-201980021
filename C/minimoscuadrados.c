/*
Autor:        Abel Hernández
fecha:        Tue Apr 26 12:20:12 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o minimoscuadrados.out minimoscuadrados.c -lm
Librerias:    stdio, math 
resumen:      Ejemplo básico para aproximación numérica de minimos cuadrados
*/

//librerias
#include <stdio.h>
#include <math.h>

// Declaro e inicializo variables globales
float x[]={1,2,3,4,5,6}, y[]={60,100,150,210,260,290};

//Medimos el tamaño del vector por medio del tamaño de los bytes que ocupa cada elemento 
int n = sizeof(x)/sizeof(x[0]);

// Prototipar funciones
void imprimir(float datos[]);
float suma(float datos[]);
float sumaMulti(float datos1[], float datos2[]);


void main(){
    // Se declaran las variables del problema 
    float b, m, r;

    // Imprimo los valores para que el usuario sepa la información 
    imprimir(x);
    imprimir(y);

    //Los valores de ecuación lineal, por medio de mínimos cuadrados
    m = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/(n*sumaMulti(x,x)-(suma(x)*suma(x)));
    b = (suma(y)-m*suma(x))/n;
    r = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/sqrt((n*sumaMulti(x,x)-(suma(x)*suma(x)))*(n*sumaMulti(y,y)-(suma(y)*suma(y))));

    //Imprime la ecuación lineal 
    printf("y = %fx + %f\n",m,b);

    //Imprime coeficiente de determinación r cuadrado 
    printf("Coeficiente de determinación: %f\n",r*r);    
}

// Imprimir los datos que ingresen a la función 
void imprimir(float datos []){
    puts("Valor de los datos");
    for (int i = 0; i < n; i++)
    {
        printf("%f", datos[i]);
    }
    puts("\n");
}

// Realiza la suma de los elementos de un vector ingresado
float suma(float datos[]){
    float resp = 0;
    for (int i = 0; i < n; i++)
    {
        resp += datos[i];
    }
    return resp;
}

// Realiza la suma de los elementos de dos vectores ingresados
float sumaMulti(float datos1[], float datos2[]){
    float resp = 0;
    for (int i = 0; i < n; i++ )
    {
        resp += datos1[i]*datos2[i];
    }
    return resp;
}

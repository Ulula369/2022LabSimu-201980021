/*
Autor:        Abel Hernández
fecha:        Thu Apr 14 22:15:33 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o arreglo2d.out arreglo2d.c
Librerias:    stdio
resumen:      
*/

//librerias
#include <stdio.h>
//definicion de variables para una matrix de 2x4
#define CM 4
#define FM 2

int main(){
    //declaramos una variable para el vector y dos variables para conteo
    float discos[FM][CM];
    int fila, col;

    //utilizar un ciclo for para ingresar informacion por fila
    for ( fila = 0; fila < FM; fila++)
    {
        //utilizo otro for para moverme en la columas
        for (col = 0; col < CM; col++)
        {
            puts("Ingrese un valor");
            scanf("%f", &discos[fila][col]);
        }
    }
    
    //imprimmir la informacion dentro de la matriz
    //un for para manejar la informacion de las filas
    for ( fila = 0; fila < FM; fila++)
    {
        //utilizo otro for para moverme en la columas
        for (col = 0; col < CM; col++)
        {
            printf("\nvalores: %.1f \n", discos[fila][col]);
        }
    }
    
    return 0;
}
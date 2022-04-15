/*
Autor:        Abel Hernández
fecha:        Thu Apr 14 20:41:11 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o operadores.out operadores.c
Librerias:    stdio
resumen:      
*/

//librerias
#include <stdio.h>

//Definicion de constantes enumeradas.
enum Boolean { False, True};
//Declaro variables globales
int res, x, y;

int main(){
    //inicializar los valores
    x = 2;
    y = 3;
    printf("El valor de x = %d, El valor de y = %d \n",x,y);

    //operaciones + - * /
    res = x + y;
    printf("resultado = %d \n",res);
    //la suma en la misma variable
    x += y;
    printf("resultado = %d \n",x);
    x=2;
    //multiplica la misma variable
    x *= x;
    printf("resultado = %d \n",x);
    x=2;
    //modulo de la division
    x %= y;
    printf("resultado = %d \n",x);
    return 0;
}
/*
Autor:        Abel Hernández
fecha:        Tue Apr 19 12:38:44 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o ejemplopuntero.out ejemplopuntero.c
Librerias:    stdio
resumen:      
*/

//librerias
#include <stdio.h>

void main () {
    // Declarar una variable y un lugar 
    int n = 70;
    //Declaro una variable tipo puntero la cual voy a igualar a la dirección de la variable 
    int* p=&n;
    //Imprimir diferentes formas de presentación 
    puts("Diversas formas del puntero");
    //Se imprime variables y punteros de diversas formas
    printf("n=%d, &=%p, p=%p, &=%p \n", n, &n, p, &p);

    // Variable tipo caracter
    char c;
    // Puntero del caracter, esto es porque se inicializa despues de declarar
    char *pc;
    c = '0';
    pc=&c;
    printf("%c dirección %c \n", c, *pc);
    for (c = 'A'; c <= 'z'; c++)
    {
        printf("El valor es %c, en la dirección %p \n",*pc,&c);
    }
}

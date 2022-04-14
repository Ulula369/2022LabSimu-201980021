/*
Autor:        Abel Hernández
fecha:        Thu Apr 14 12:18:52 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o funcionesbasicas.out funcionesbasicas.c
Librerias:    stdio
resumen:      
*/

//librerias
#include <stdio.h>

//librerias
#include <stdio.h>
int v1, v2;
//escribir una funcion con todo su contenido, esta debe de ir antes del main
//una funcion que devuelve el mayor valor de los ingresados
int max(int x, int y){
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    } 
}

//para prototipar una funcion se debe de hacer se la siguiente forma
//siempre debe de llevar punto y coma al final
int min(int x, int y);

int main(){
    v1=10;
    v2=5;
    printf("valor maximo: %d\n",max(v1,v2));
    printf("valor maximo: %d\n",max(50,100));
    printf("valor maximo: %d\n",min(50,100));
    printf("valor maximo: %d\n",min(v1,v2));
    return 0;
}

//el conido de la funcion prototipada
int min(int x, int y){
    if (x<y)
    {
        return x;
    }
    else
    {
        return y;
    } 
}
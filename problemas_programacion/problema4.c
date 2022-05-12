/*
Autor:        Abel Hernández
fecha:        Wed May 11 18:28:40 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema4.out problema4.c
Librerias:    stdio
resumen:      Este programa lee un número mayor que 1 y determina si es un número primo
*/

//librerias
#include <stdio.h>

//Se declaran las variables
int n=0;

//El primer número primo es 2
int i=2;

//El residuo es la unidad
int primo=1;

//Se inicializa la función principal
int main()
{
    //Se imprime en pantalla la siguiente solicitud para que el usuario ingrese un número
    printf("Ingrese un número mayor a 1 para determinar si es un número primo o no: "); 

    //Lee el valor que ingresó el usuario
    scanf("%d", &n);

        //Se inicializa en ciclo while
        while (i<(n-1) && primo ==1 ) 
        {
            //Se incia el condicional en el cual se tiene que cumplir que el residuo del
            //número ingresado es cero
            if ((n%i) == 0)      
            {
                //Si lo anterior se cumple entonces la variable primo es igual a cero    
                primo = 0;
            }
            else
            {
                //Sino se cumple entonces i incrementa
                i++;        
            }      
        }
            //Iniciamos un nuevo condicional para evaluar si la variable primo es cero 
            //entonces el número no es primo
            if (primo==0)           
            {
                //Si la variable primo es 0 entonces se imprime que el número no es primo 
                puts("**********************************");
                printf("El número no es primo"); 
                puts("\n**********************************");
            }
            else
            {
                //Caso contrario si lo es
                puts("**********************************");
                printf("El numero si es primo");
                puts("\n**********************************");
            }
return 0;
}
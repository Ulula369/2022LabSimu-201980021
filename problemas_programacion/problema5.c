/*
Autor:        Abel Hernández
fecha:        Wed May 11 18:35:39 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema5.out problema5.c
Librerias:    stdio
resumen:      Este programa lee dos números enteros para genera un rango y que
              muestra todos los números primos en ese rango
*/

//librerias
#include <stdio.h>

//Se declaran las variables
int n1, n2, primo, i, j;

//Se prototipan las funciones
int esPrimo(int i, int j); 

//Se incializa la función principal
int main() 
{
    //Le pedimos al usuario que ingrese el valor del primer número 
    printf("Ingrese el primer número, mayor a 1, para el rango: "); 
    //Se lee el valor ingresado en la variable n1
    scanf("%d", &n1);

    //Le pedimos al usuario que ingrese el valor del segundo número 
    printf("Ingrese el segundo número, mayor al número anterior, para el rango: "); 
    //Se lee el segundo valor ingresado en la variabel n2
    scanf("%d", &n2);

    puts("\n***********************************\n");
    puts("Los números primos que se encuentran en el rango entre el primer y segundo número ingresado son \n");
    //Se declara la variable i igual al primer valor ingresado
    i=n1;

    //Se inicia el ciclo while, mientras i sea menor al segundo numero este se cumple
    while (i<=n2)       
    {
        //Iniciamos la función prototipada al inicio 
        esPrimo( i, j);

        //Se inicializa un condicional if para evaluar si la variable primo es igual a 1
        //entonces se imprimirá el número i que es igual al primer valor ingresado  
        if (primo==1)
        {
            printf("%d  \n", i);
        }
        //Al terminar esto no importa si fue primo o no i se incrementa.
        i++; 
    }

return 0;
}

//Hacemos uso de la función 

int esPrimo(int i, int j)
{ 
    // Ejecutamos la funcion esPrimo en la cual 
    //como en el problema anterior nos muestra si el numero es primo
    //Se declaran las variables     
    j=2;
    primo=1;

    //Se inicializa el ciclo while 
    
    while ( j<i && primo==1 )
    {
        if (i%j==0)
        {
            primo=0;
        }  
        j++;
    }
    
}

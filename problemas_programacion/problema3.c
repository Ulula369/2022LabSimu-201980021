/*
Autor:        Abel Hernández
fecha:        Wed May 11 18:26:47 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema3.out problema3.c -lm
Librerias:    stdio, math 
resumen:      Este programa calcula la raiz entera de un número positivo N
*/

//librerias
#include <stdio.h>
#include <math.h>

//Declaramos las variables
int N;
int R; 

//Inciamos la función principal
int main(){ 

    //Se le solicita al usuario que ingrese un número
    printf("Ingrese el valor del número N positivo:  ");
    puts("\n********************************************"); 

    //Lee el valor que ingresó el usuario y lo guarda en la variable n
    scanf("%i", &N);
    
    //Inicia el condicional if en el cual n tiene que ser mayor a cero
    if (N >= 0) 
    {
        //Como tiene que ser un número posito entonces R tiene que ser mayor que cero
        if (R >= 0) 
        {
            //Mientras R^2 sea menor o igual a N se cumple el ciclo     
            while (R*R <= N) 
            {
                //R aumenta durante el ciclo se cumple
                R++; 
            }

            //Se le da un nuevo valor a la variable R y se imprime la respuesta
            R=R-1; 
            printf("La raíz cuadrada entera del número N es: %i \n", R);
            puts("********************************************");
            printf("FIN \n");
            puts("********************************************");
        }
    }
    else
    {
    //Si el usuario ingreas un número negativo, entonces imprime en pantalla el siguiente mensaje     
    printf("Solo debe ingresar números positivos"); 
    } 

return 0;
}
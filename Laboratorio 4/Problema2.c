/*
Autor:        Abel Hernández
fecha:        Wed May 11 10:31:37 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o Problema2.out Problema2.c
Librerias:    stdio, stdlib
resumen:      Este programa solicita al usuario ingresar cinco valores enteros
              una vez ingresados los almacena y luego los ordena en forma ascendente  
*/

//librerias
#include <stdio.h>
#include <stdlib.h>

//Se inicializa la función principal 
int main ()

{

//Se declaran las variables
// Inicializar el vector en el cual se almacenaran cinco valores
int n=5;
int numero[n];
int i;
    
    printf("Ingrese cinco números enteros a guardar\n");
    for (int i = 0; i < 5; i++)
    {
       //Se leen y muestran los valores ingresados al vector
       printf("No: ");     
       scanf("%d", &numero[i]);
    }

    //Se coloca una etiqueta para que el usuario tenga conocimiento del proceso
    //que se ejecutó, se usa el ordenamiento por burbuja
    puts("\nOrdenando el valor del vector");

    //Se declaran las variables 
    
    //El interruptor hace un parar acá cuando está en 1 = verdadero
    int interruptor = 1;

    //Variable de pasada de cada iteracción 
    int pasada, j;

    //Bucle que controla la cantidad de pasadas en el vector 
    //Si pasada es menro que n-1 y tambien el interruptor sea verdadero
    for (pasada = 0; pasada < n-1 && interruptor; pasada++)
    {
        //Se coloca igual a cero para que las pasadas sean primero por el vector escaneado
        interruptor = 0;

        //Escanea todas la variables j que corresponden a una posición i en el vector
        //que maneja el paso por el vector, n menos la pasada menos 1 porque el método de
        //burbujas así lo establece >>>> El for maneja el paso por el vector 
        for (j = 0; j < n-pasada-1; j++)
        {
            //validando que el valor seleccionado sea mayor al siguiente hasta terminar de pasar
            //por todo el vector 
            if (numero[j] > numero[j+1])
            {
                //Se declara una variable local llamada auxiliar porque cuando se hace el cambio el valor se
                //pierde y necesitamos guardar el valor anterior de manera momentanea
                int aux;

                //Imprime los primeros cambios, el valor del vector a en la posición j a la
                //posición del vector a j+1
                printf("cambio %d %d a ",numero[j],numero[j+1]);
                
                //En la variable auxiliar se almacena la posición del vector j en la 
                //que se está actualmente 
                aux = numero[j];

                //Ahora el valor del vector número que tiene la posición j se convierte en la posicón j+1
                numero[j] = numero[j+1];

                //La posición de j+1 pasa a ser ahora la posición de la variable auxiliar
                numero[j+1] = aux;

                //Se imprime las nuevas posiciones de los valores del vector 
                printf("%d %d \n", numero[j], numero[j+1]);
            }
            //El interruptor se pasa a 1 es decir verdadero, significa que lo anterior se
            //valido y así vuelva a hacer la siguiente pasada.
            interruptor = 1;
        }   
    }

    //Mostramos en pantalla los valores del vector ordenado en forma ascendente
    puts("\nVector Ordenado en forma ascendente");

    //Se muestra nuevamente los valores del vector 
    for (int i = 0; i < n; i++)
    {
        //Imprime el valor del vector ya ordenado en forma ascendente
        printf("%d ", numero[i]);
    }
    //Fin del programa
    puts("\n*************************************");
    puts("Gracias por participar");
    puts("*************************************\n");
}
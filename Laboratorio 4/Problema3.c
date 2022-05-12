/*
Autor:        Abel Hernández
fecha:        Wed May 11 12:25:30 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o Problema3.out Problema3.c -lm
Librerias:    stdio, stdlib, math 
resumen:      Este programa solicita al usuario que ingrese las compoentes de dos vectores
              a partir de estos datos se calcula la magnitud de cada vector, la suma de los
              dos vectores, el producto escalar y vectorial
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Se inicia la función principal
int main () {

//Se declaran las variables y la longitud de los dos vectores
int v1[3];
int v2[3];
int i;    

    //Se muestra la siguiente etiqueta en pantalla para que el usuario sepa lo que 
    //se le pide
    printf("Ingrese las coordenadas (x,y,z) del vector 1\n");

    //Se inicia el ciclo for para el primer vector v1
    for (int i = 0; i < 3; i++)
    {
       //Se leen y muestran los valores ingresados al vector
       printf(" ");     
       scanf("%i", &v1[i]);
    }  
        //Se imprime el primer corchete para el vector 1
        printf("\nV1 = ["); 
        
        //Este ciclo for es para imprimir el valor del vector 1 así
        //como las comas en el respectivo vector
        for (int i = 0; i < 3; i++)
        {   
            if (i > 0)
            {
                printf(",");    
            }
            
            //Imprime el valor del vector 
            printf("%i", v1[i]);
        }
        //Se imprime el último corchete para cerrar los valores del vector 1
        printf("]");
        //Se imprime un salto de línea    
        puts("\n");
    
    //Se realiza el mismo procedimiento que se realizó para el vector 1
    printf("Ingrese las coordenadas (x,y,z) del vector 2\n");
    for (int i = 0; i < 3; i++)
    {
       //Se leen y muestran los valores ingresados al vector
       printf(" ");     
       scanf("%i", &v2[i]);
    }  
        printf("\nV2 = ["); 
        
        for (int i = 0; i < 3; i++)
        {   
            if (i > 0)
            {
                printf(",");    
            }
           
            //Imprime el valor del vector 2
            printf("%i", v2[i]);
        }
        //Se cierra el corchete del vector 2
        printf("]");
        //Se imprime un salto de línea
        puts("\n**************************\n");

    //Se calcula la magnitud del vector 1
    //Se declaran las variables para la suma y la magnitud del vector
    float sum, mag;
    
    //La magnitud es la raíz cuadrada de cada componente elevado al cuadrado
    sum = v1[0]*v1[0] + v1[1]*v1[1] + v1[2]*v1[2];
    mag = sqrt(sum);  

    //Se imprime el valor de la magnitud
    printf("La magnitud del vector 1 es %.2f \n", mag);
    puts("\n**************************\n");    

    //Se calcula la magnitud del vector 2
    sum = v2[0]*v2[0] + v2[1]*v2[1] + v2[2]*v2[2];
    mag = sqrt(sum);  
    printf("La magnitud del vector 2 es %.2f \n", mag);
    puts("\n**************************\n");

    //Se declaran las variables x, y,z como componentes
    int x,y,z;
    
    //Se calcula la suma de los dos vectores sumando componente a componente
    x = v1[0] + v2[0];
    y=  v1[1] + v2[1];
    z = v1[2] + v2[2];

    //Se imprime el valor 
    printf("La suma de los dos vectores es el V3 = [%i, %i, %i]", x,y,z);
    puts("\n**************************\n");
    
    //Se calcula el producto punto o escalar de los dos vectores
    //Se declara la variable para el producto escalar. Este se calcula multiplicando coordenada
    //a coordenada y luego se suman para obtener un escalar o sea un número
    int productoescalar; 
    //Se realiza las respectivas multiplicaciones de las componentes
    x = v1[0]*v2[0];
    y=  v1[1]*v2[1];
    z = v1[2]*v2[2];

    //Se suman el producto de las componentes
    productoescalar = x + y + z;
    //Se imprime el respectivo valor del escalar 
    printf("El producto escalar de los dos vectores es = %i", productoescalar);
    puts("\n**************************\n");

    //Se calcula el producto vectorial o cruz de los dos vectores siguiendo la 
    //respectiva regla matemática de determinante  
    x = v1[1]*v2[2] - v1[2]*v2[1];
    y = v1[2]*v2[0] - v1[0]*v2[2];
    z = v1[0]*v2[1] - v1[1]*v2[0];
    //Se imprime el valor del producto vectorial que tiene como resultado otro
    //vector
    printf("El producto vectorial de los dos vectores es =[%i, %i, %i]", x,y,z);
    puts("\n**************************\n");

return 0; 
}
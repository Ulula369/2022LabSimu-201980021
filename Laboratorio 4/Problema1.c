/*
Autor:        Abel Hernández
fecha:        Mon May 9 23:43:04 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o Problema1.out Problema1.c
Librerias:    stdio, 
resumen:      Se ingresará un vector con diez elementos y el programa deberá mostrar
              la salida en orden ascendente o descendente según lo elija el usuario       
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Se declaran las variables y se almcena en el vector los valores a utilizar  
char letra;
int i;
int numero[10]={2,4,6,8,10,12,14,16,18,20}; 

//Inicializamos el programa
int main ()
{  
    //Se muestran en pantalla las siguientes etiquetas, opciones a elegir
    printf("¿Cómo desea visualizar los números? \n");
    printf("a) Verlos de forma ascedente \n");
    printf("b) Verlos de forma descedente \n");
    printf("c) Salir \n");  
    printf("Ingrese su elección: \n");
    //fflush(stdin);    

    //Se inicializa el ciclo do while el cual se mantendrá en funcionamiento siempre y cuando
    //el usuario ingrese una letra distinta a: a, b, c.
    do
    {

    //Lee el valor que el usuario ingresa en una variable caracter
    scanf("%c", &letra);    
    
        //Se inicializa los condicionales if, donde se evaluará cada valor
        //ingresado por el usuario
        if (letra=='a')
        {
            //Se muestra en pantalla la opción que el usuario eligío    
            printf("Usted seleccionó la opción a \n");

            //Se muestra en pantalla la etiqueta que muestra el orden en que
            //se presentarán los datos
            printf("Datos en forma ascendente \n");

                //Se inicia el ciclo for para mostrar los valores del vector en forma 
                //ascendente 
                for (i = 0; i < 10; i++)
                {
                    //Mostramos el contenido del vector en forma ascendente
                    printf("numero[%d] = %d \n\n", i, numero[i]);  
                }
                //Al terminar de mostrar los valores ordenados, sale del programa
                exit(-1);     

        }

        //Se inicializa los condicionales if, donde se evaluará cada valor
        //ingresado por el usuario
        if (letra=='b')
        {
            //Se muestra en pantalla la opción que el usuario eligío    
            printf("Usted seleccionó la opción b \n");
            printf("Datos en forma descendente \n");

                //Se inicia el ciclo for para mostrar los valores del vector en forma 
                //descendente 
                for (i = 9; i >= 0; i--)
                {
                    printf("numero[%d] = %d \n\n", i,numero[i]); 
                }
                exit(-1);          
        }

        //Se inicializa los condicionales if, donde se evaluará cada valor
        //ingresado por el usuario
        if (letra=='c')
        {
            //Se muestran en pantalla de agradecimiento
            printf("Gracias por participar, saludos cordiales \n\n");
            //Sale del programa 
            exit(-1);
        }

    //Cada vez que el usuario ingrese una opción distinta de a, b, c entonces
    //aparecerá la siguiente etiqueta
    

    //Mientras los valores ingresados sean distintos de a,b,c el programa se
    //estará ejecutando
    printf("Usted ingresó una letra incorrecta \n");
    
    }
    while (letra!='a' || letra!='b' || letra!='c');
    
//Regresa al inicio de ciclo do  
return 0;

}
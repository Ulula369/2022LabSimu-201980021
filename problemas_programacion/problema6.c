/*
Autor:        Abel Hernández
fecha:        Wed May 11 18:37:54 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o problema6.out problema6.c
Librerias:    stdio
resumen:      Este programa solicita al usuario el número de vértices de un poligono y apartir
              de esto el programa devuelve el área del poligono cuestión 
*/

//librerias
#include <stdio.h>

//Se declaran las variables
int nV, nSum;
int cont=0;
float sumatoria=0;
float A;

//Se inicializa la función principal
int main()
{
    //Se le solicita al usuario que ingrese el número de vértices, como en un poligono el 
    //menor número de vértices es tres entonces se lo recordamos al usuario
    printf("\n**********************************\n");
    printf("Ingrese el número de vertices, este debe ser mayor o igual a tres, de un poligono::: "); 
    

    //Lee el valor ingresado
    scanf("%d", &nV);

    //Se define una matriz la cual tiene dimensiones de el número de vertices por dos
    int matrizXY[nV][2]; 

        //Se inicia el condicional para evaluar que el número de vértices sea en efecto mayor
        //o igual a 3
        if (nV>=3)
        {
            //Se inicia el ciclo for 
            for (cont = 0; cont < nV; cont++)
            {
                //Se solicita al usuario las coordenadas de los vertices
                printf("Ingrese la componente en x: ");   
            
                //Se captura el valor ingresado
                scanf("%d", &matrizXY[cont][0]);
            
                printf("Ingrese la componente en y: ");
                scanf("%d", &matrizXY[cont][1]);
            }
            //Se imprime un salto de línea 
            //printf("\n");

            //Se imprime en pantalla la siguiente etiqueta z
            printf("\n**********************************\n");
            printf("Los vértices del poligono que usted ingresó son \n");
            

                //Se inicia un ciclo for 
                for (cont = 0; cont < nV; cont++)
                {
                    //Se imprimen las coordenadas de la matriz
                    printf("(%d, %d) \n", matrizXY[cont][0],matrizXY[cont][1]);
                }

                    //nSuma debe ser igual al número de vértices menos 1
                    nSum=nV-1;

                        //Se inicializa el ciclo for para hacer la sumatoria
                        for (int i = 0; i < nSum; i++)  
                        {
                            //Se calcula la sumatoria
                            sumatoria += (matrizXY[i][0]*matrizXY[i+1][1]) - (matrizXY[i+1][0]*matrizXY[i][1]);
                        }

                        //Se calcula el área del poligono
                        A += (matrizXY[nSum][0]*matrizXY[0][1])-(matrizXY[0][0]*matrizXY[nSum][1]);
                        A=A/2;

                        //Se imprime el valor del área con tres cifras decimales 
                        //del poligono en cuestión
                        printf("**********************************\n");
                        printf("El área del poligono es: %0.1f \n" , A); 
        }

}
/*
Autor:        Abel Hernández
fecha:        Tue Apr 19 13:05:18 CST 2022
compilador:   gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:     gcc -o ejemploarchivos.out ejemploarchivos.c
Librerias:    stdio
resumen:      
*/

//librerias
#include <stdio.h>

int main ()
{
    //Declarando un caracter para el ingreso de datos
    int c;
    //Declaramos una variable de conteo
    int dato=0;
    //Inicializo el puntero de archivo
    FILE* pf;
    //La forma mas sencilla de escribir el nombre del archivo es por medio de un puntero
    char *salida="salida .txt"
    //Ahora abrir la comunicación pero antes validar si hay espacio de memnoria
    if((pf=fopen(salida,"wt"))==NULL)
    {
        puts("Error de escritura");
        return 1;
    }
    puts("Escribir algo");
    //Obtener desde la terminal 10 caracteres o EDF para terminar
    while((c=getchar())!=EOF&&dato<10)
    {
        //Validar que se ingrese un caracter pero no identifique enter (\n) como un caracter más
        if((c)!='\n'))
        {
            putc(c,pf);
            dato++;

            printf("Caracter %d \n",dato);
        }
        
    }
    //MUY IMPORTANTE CERRAR LA COMUNICACIÓN
    fclose(pf);
    return 0;
    
}

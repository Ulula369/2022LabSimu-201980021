/*
Autor:		abel
Compilador:	 gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado:	 gcc problema2.c -o problema2
Fecha: 		 03/18/22
Librerias: 	studio
Resumen: 	 El programa va a recibir n numeros de altura y termina de obtener datos al ingresar una negativa, por último este da el valor del promedio máximo  y mínimo de los datos ingresados
Entrada: 	 
Salida: 	 
*/


//Librerias
# include <studio.h>
//Numerar los pasos del pseudocódigo

// Declaracion e inicilización de variables 
int x=0, n=0, max=0, min=0;
float med=0;

int main(){
    //1. leer los datos ingresados
    puts("bienvenido ingrese valores enteros de alturas, para finalizar ingrese un valor negativo");
    puts("Ingrese una altura: ");
    scanf("%d", &x);
    //2. almacenar el primer valor de altura en min y max
    max=x;
    min=x;
    //3. validar si la altura es mayor o igual a 0
    while (x>=0)
    {
        //4. acumular los datos de conteo y media para su uso al final
        n++;
        med+=x;
        // 5.Valuar si el valor ingresado es mayor al valor máximo por el momento   
          if (x>max)
        {
            max=x;
        }
        // 6.Valuar si el valor ingresado es menor al valor mínimo por el momento   
        if (x<min)
        {
            min=x;
        }
        // 7. Se leen los nuevos valores ingresados
        puts("Ingrese otra altura: ");
        scanf("%d", &x);
    }
    // 8. 
    if (n==0)
    {
        puts("No ingreso alturas validas");
    }
    else
    {
        med=med/n;
        printf("%f\n",med);
        printf("De los valores ingresados: La media es: %f, \n El valor maximo es: %d \n El valor minimo es: %d\n",med,max,min);
    }
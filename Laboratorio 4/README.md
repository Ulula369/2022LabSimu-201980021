# Segundo Parcial 
## Descripción
Dentro de esta carpeta se documenta y muestra el código de los problemas del laboratorio 4

## Requirimientos 
Requirimos de un compilador para C utilizando Linux

### Instalación
```
$ Sudo apt install build-essential 
``` 
## Licencia
[MIT](LICENCE)


## Problema 1: 

### Enunciado
|[problema1](2022LabSimu-201980021/../Imagenes/PRO1.jpg)


## Metodología
Para resolver este problema se ingresó un vector con 10 números pares ya fijos por el programador, se empezó por el número dos hasta llegar al 20. $[2,4,6,8,10,12,14,16,18,20]$. Al inicio del programa se le muestra al usuario un menú de dos opciones, yo decidí ingresar una tercera opción, a) Orden ascendente, d) Orden descendente, c) Salir. El usuario elige una opción y dependiendo de la que elija así se muestran los datos, para el menú se usó un ciclo do while, para ordenar los datos se evalúan la letra ingresa por el usuario mediante un if y los datos del vector se ordena con un ciclo for. Si el usuario ingresa una letra distinta a las que se le presentan en el menú, entonces se muestra en pantalla un mensaje de que ingresó una letra incorrecta y de esta manera el ciclo se mantiene abierto, caso contrario muestra el orden solicitado y termina el programa.

## Diagrama de flujo



## Código
|[Problema1](2022LabSimu-201980021/../Problema1.c)

## Compilación y ejecución
```
$ gcc -o Problema1.out Problema1.c

$ ./Problema1

``` 

## Problema 2: 

### Enunciado
|[problema2]
(2022LabSimu-201980021/../Imagenes/PRO2.jpg)

## Metodología
Este programa le solicita al usuario cinco númeo enteros los cuales se deben guardar en un vector. Una vez que los valores se han guardado en el vector el programa los debe ordenar en forma ascendete y mostrar el vector ordenado, para esto se empleó el método de ordenamiento por burbujas, el cual consiste en pasar revisando los valores que estan guradados en el vector e ir comparando los valores. Para esto se empleó un ciclo for anidado y un condicional if anidado en el for anidado. 
El primer ciclo for recibe los cinco valores y los guarda en un vector, el siguiente ciclo for pasa revisión de los valores guardados empezando por la primer pasada en la posición 0 del vector que corresponde al primer valor hasta llegar al penultimo valor del vector. 
El siguiente for escanea el valor de la posicón y va aumentando las posiciones hasta llegar al penultimo valor, seguidamente se abre el condicional if que evalua si el valor del vector en la posición j es mayor que el valor del vector en la posición j+1 si esto es cierto entonces se almacena el valor de la posición en una variable auxiliar, luego ese valor se iguala a posición j+1 y se imprimen las nuevas posiciones de los vectores, esto se repite hasta alcanzar el ordenamiento solcitado

## Diagrama de flujo


## Código
[Problema2](2022LabSimu-201980021/../Problema2.c)

## Compilación y ejecución
```
$ gcc -o Problema2.out Problema2.c

$ ./Problema2.c

``` 

## Problema 3: 

### Enunciado
|[problema3]
(2022LabSimu-201980021/../Imagenes/PRO3.jpg)

## Metodología
Este programa le solicita al usuario cinco númeo enteros los cuales se deben guardar en un vector. Una vez que los valores se han guardado en el vector el programa los debe ordenar en forma ascendete y mostrar el vector ordenado, para esto se empleó el método de ordenamiento por burbujas, el cual consiste en pasar revisando los valores que estan guradados en el vector e ir comparando los valores. Para esto se empleó un ciclo for anidado y un condicional if anidado en el for anidado. 
El primer ciclo for recibe los cinco valores y los guarda en un vector, el siguiente ciclo for pasa revisión de los valores guardados empezando por la primer pasada en la posición 0 del vector que corresponde al primer valor hasta llegar al penultimo valor del vector. 
El siguiente for escanea el valor de la posicón y va aumentando las posiciones hasta llegar al penultimo valor, seguidamente se abre el condicional if que evalua si el valor del vector en la posición j es mayor que el valor del vector en la posición j+1 si esto es cierto entonces se almacena el valor de la posición en una variable auxiliar, luego ese valor se iguala a posición j+1 y se imprimen las nuevas posiciones de los vectores, esto se repite hasta alcanzar el ordenamiento solcitado

## Diagrama de flujo


## Código
[Problema2](2022LabSimu-201980021/../Problema2.c)

## Compilación y ejecución
```
$ gcc -o Problema2.out Problema2.c

$ ./Problema2.c

``` 
# Segundo Parcial 
## Descripción
Dentro de esta carpeta se documenta y muestra el código de los dos problemas del segundo parcial

## Tabla de contenido
Problema 1: Valor de la moneda del dolar estadounidense ante el euro.

Problema 2: Método numérico Newton-Raphson 

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
![P 1](/ejercicio_docker/2022LabSimu-201980021/Imagenes/P%201.jpg)

## Metodología
Para resolver este problema se partió de los datos proporcionados. Primero se declaron dos vectores tiempo y euros, en estos vectores se guardaron los valores proporcinados. Seguidamente se imprimieron en pantalla y luego se procedió a efectuar el cálculo de la regresión lineal de mínimos cuadrados para así obtener la ecuación de la recta que mejor se ajusta a los datos proporcionados... 

Con GNUPLOT se realizó la gráfica y también se realizó el fit de la función, se comparó con la ecuación obtenida en el programa y son casi idénticas. 

Se pedía que se estimará el año en que el dolar no tendrá valor. La estimación es que en el año 2051 el dolar no tendrá valor. 

## Diagrama de flujo

![Diagrama 1](/ejercicio_docker/2022LabSimu-201980021/Imagenes/Diagrama%201.jpg)

## Código
Comportamiento del dolar estadounidense ante el euro [valordemoneda](Segundo_parcial/../Valordemoneda.c)

## Gráfica
![valoresdemoneda](/ejercicio_docker/2022LabSimu-201980021/Segundo_parcial/valoresdemoneda.jpg)    

## Compilación y ejecución
```
$ gcc -o Valordemoneda.out Valordemoneda.c -lm

$ ./Valordemoneda.c 

$ gnuplot grafica.gp
``` 

## Problema 2: 

### Enunciado
![P 2](/ejercicio_docker/2022LabSimu-201980021/Imagenes/P%202.jpg)

## Metodología
Para resolver este problema primero se calculó a mano la primera derivada de la función dada, pues la primera derivada es parte de la ecuación. Luego se escribió el código el cual consiste en prototipar las funciones a utilizar, declarar variables, solicitar al usuario que ingrese un valor aproximado de la raíz, el nivel de tolerancia, el número de iteraciones que desea realizar. Posteriormente con esta información se aplica Newton-Raphson y se calcula la raíz de la función a partir de los datos ingresados. 

Con GNUPLOT se realizó la gráfica de la función, se comparó con la raíz obtenida en el programa y la raíz obtenida concuerda con el intecepto en x de la función que está aproximadamente en 0.8

Se pedía que se estimará el año en que el dolar no tendrá valor. La estimación es que en el año 2051 el dolar no tendrá valor. 

## Diagrama de flujo

![Diagrama 2](/ejercicio_docker/2022LabSimu-201980021/Imagenes/Diagrama%202.jpg)

## Código
Método numérico: Newton-Raphson [metodonumerico](Segundo_parcial/../metodonumerico.c)

## Gráfica 
![graficametodonumerico](/ejercicio_docker/2022LabSimu-201980021/Segundo_parcial/graficametodonumerico.jpg)

## Compilación y ejecución
```
$ gcc -o metodonumerico.out metodonumerico.c -lm

$ ./metodonumerico.c 

$ graficametodonumerico.gp

``` 
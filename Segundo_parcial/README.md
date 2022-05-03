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
<p align="center">
<img src="https://github.com/Ulula369/2022LabSimu-201980021/blob/cbdaa2802bf78a2fee82ef384b14935a0b2b0c95/Segundo_parcial/P%201.jpg" alt="Enunciado problema 1" width="800"/>
</p>


## Metodología
Para resolver este problema se partió de los datos proporcionados. Primero se declaron dos vectores tiempo y euros, en estos vectores se guardaron los valores proporcinados. Seguidamente se imprimieron en pantalla para que el usuario visualizara los datos, para estos se utilizó un ciclo for para que mostrara en pantalla los datos de los dos vectores, luego se procedió a efectuar el cálculo de la regresión lineal de mínimos cuadrados para así obtener la ecuación de la recta que mejor se ajusta a los datos proporcionados, para ello se prototiparon dos funciones una para la suma de los datos de los vectores y otra para la suma multiplicación. Al final el programa ejecuta el archivo gráfica.gp para mostrar la gráfica solicitada. 

Con GNUPLOT se realizó la gráfica y también se realizó el fit de la función, se comparó con la ecuación obtenida en el programa y son casi idénticas. 

Se pedía que se estimará el año en que el dolar no tendrá valor. La estimación es que en el año 2051 el dolar no tendrá valor. 

## Diagrama de flujo
<p align="center">
<img src="https://github.com/Ulula369/2022LabSimu-201980021/blob/cbdaa2802bf78a2fee82ef384b14935a0b2b0c95/Segundo_parcial/Diagrama%201.jpg" alt="Diagrama de flujo 1" width="800"/>
</p>


## Código
Comportamiento del dolar estadounidense ante el euro [valordemoneda](Segundo_parcial/../Valordemoneda.c)

## Gráfica
<p align="center">
<img src="https://github.com/Ulula369/2022LabSimu-201980021/blob/cbdaa2802bf78a2fee82ef384b14935a0b2b0c95/Segundo_parcial/valoresdemoneda.jpg" alt="Gráfica problema 1" width="800"/>
</p>

## Compilación y ejecución
```
$ gcc -o Valordemoneda.out Valordemoneda.c -lm

$ ./Valordemoneda.c 

$ gnuplot grafica.gp
``` 

## Problema 2: 

### Enunciado
<p align="center">
<img src="https://github.com/Ulula369/2022LabSimu-201980021/blob/cbdaa2802bf78a2fee82ef384b14935a0b2b0c95/Segundo_parcial/P%202.jpg" alt="Enunciado problema 2" width="800"/>
</p>

## Metodología
Para resolver este problema primero se calculó a mano la primera derivada de la función dada, pues la primera derivada es parte de la ecuación. Luego se escribió el código el cual consiste en prototipar las funciones a utilizar, declarar variables, solicitar al usuario que ingrese un valor aproximado de la raíz, el nivel de tolerancia, el número de iteraciones que desea realizar. Posteriormente con esta información se aplica Newton-Raphson y se calcula la raíz de la función a partir de los datos ingresados. 

Con GNUPLOT se realizó la gráfica de la función, se comparó con la raíz obtenida en el programa y la raíz obtenida concuerda con el intecepto en x de la función que está aproximadamente en 0.8

Se pedía que se estimará el año en que el dolar no tendrá valor. La estimación es que en el año 2051 el dolar no tendrá valor. 

## Diagrama de flujo
<p align="center">
<img src="https://github.com/Ulula369/2022LabSimu-201980021/blob/cbdaa2802bf78a2fee82ef384b14935a0b2b0c95/Segundo_parcial/Diagrama%202.jpg" alt="Diagrama problema 2" width="800"/>
</p>

## Código
Método numérico: Newton-Raphson [metodonumerico](Segundo_parcial/../metodonumerico.c)

## Gráfica 
<p align="center">
<img src="https://github.com/Ulula369/2022LabSimu-201980021/blob/cbdaa2802bf78a2fee82ef384b14935a0b2b0c95/Segundo_parcial/graficametodonumerico.jpg" alt="Gráfica problema 2" width="800"/>
</p>

## Compilación y ejecución
```
$ gcc -o metodonumerico.out metodonumerico.c -lm

$ ./metodonumerico.c 

$ graficametodonumerico.gp

``` 

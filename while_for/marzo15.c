#!/bin/bash

: << 'Header'
Autor:              Abel Hernández
Fecha:              08/03/2022
Tipo de archivo:    Script de bash
Ejecución:          ./marzo8.sh
Resumén:            Genera header para archviso de programación en lenguaje C
Header

// un do while simple el cual valida por medio de la bandera contador, imprime hasta que se cumple +1
contador = 10;
do 
{
    printf ("id", contador);
    contador++;
}
while (contador<10);
printf("*\n");

// loops infinito
// un loops 
for (;;;)
{
    printf("dentro del loops");
    contador=contador*2
    if (contador > 1500) break;  
    
}

// Loop infinito por medio de while 
    while(1){}  

return 0;
}


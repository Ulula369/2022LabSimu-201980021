#!/bin/bash
# Inicio de etiqueta 
: << 'Header'
Autor:              abel
Compilador:         (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado:          gcc programarenc.c
Tipo de archivo:    Script de bash
Ejecución:          ./programarenc
fecha:              05 de marzo de 2022
librerias:          studio
Resumen:            Script que crea automáticamente un archivo para programar en C              
# fin de la etiqueta
Header

# Se imprimirá en pantalla la siguiente pregunta 
echo ¿Qué nombre desea darle al archivo?
# Con el comando read la terminal lee el resultado y asigna dicha entrada a la variable nomnbredelarchivo
read nombredelarchivo
# Con la bandera -n en el condicional se verifica si se ha ingresado un caracter a la variable nombredelarchivo
# Si se ha ingresado uno o más caracteres entonces ejecuta las ordenes que se le dan
if [ -n "$nombredelarchivo" ]; then   
    # Inserta el inicio del comentario de párrafo
    echo "/*" >> $nombredelarchivo.c

    # Inserta el nomnbre de usuario 
    echo -e "Autor:\t\t$USER" > $nombredelarchivo.c

    # Se obtiene la versión del gcc y se guarda en un archivo temporal versiont
    gcc --version > versiont
    # Se declara la variable version la cual leerá la primera línea del archivo temporal versiont
    version=$(head versiont --lines=1) 
    # Indica la version del compilador 
    echo -e "Compilador:\t $version" >> $nombredelarchivo.c
    # Elimina el archivo temporal creado 
    rm versiont

    # Indica la forma en que se podrá compilar el programa creado
    echo -e "Compilado:\t gcc $nombredelarchivo.c -o $nombredelarchivo" >> $nombredelarchivo.c
    
    # Se obtiene la fecha del sistema y se guarda en un archivo temporal fechaactual
    date +%D > fechaactual
    # Se declara la variable fecha y se obtiene el valor que posee 
    fecha=$(cat fechaactual)
    # Muestra la fecha del sistema en la que fue creado el archivo
    echo -e "Fecha: \t\t $fecha" >> $nombredelarchivo.c
    # Se elimina el archvio temporal
    rm fechaactual
    
    # Imprime las librerias que se usaron
    echo -e "Librerias: \tstudio" >> $nombredelarchivo.c
    
    # Solicita al ejecutor el resumen del programa
    echo -e "Resumen del programa:"
    # Lee y gurada el valor que se ingresa
    read Resumen
    # Imprime el valor de la variable Resumen 
    echo -e "Resumen: \t $Resumen" >> $nombredelarchivo.c
    
     # Solicita al ejecutor la entrada del programa
    echo -e "Entrada del programa:"
    # Lee y guarda el valor que se ingresa
    read Entrada
    # Imprime el valor de la variable Entrada 
    echo -e "Entrada: \t $Entrada" >> $nombredelarchivo.c
    
     # Solicita al ejecutor la entrada del programa
    echo -e "Salida del programa:"
    # Lee y guarda el valor que se ingresa
    read Salida
    # Imprime el valor de la variable Salida 
    echo -e "Salida: \t $Salida" >> $nombredelarchivo.c
    
    # Imprime el final del comentario del parráfo 
    echo -e "/*" >> $nombredelarchivo.c

    # Imprime doble salto  
    echo -e "\n" >> $nombredelarchivo.c
    
    # Imprime dos barras seguido de Librerias
    echo -e "//Librerias" >> $nombredelarchivo.c 
    
    # Imprime #include <studio.h> 
    echo -e "#include <studio.h>" >> $nombredelarchivo.c
    
    #Imprime el siguiente texto: //Numerar los pasos del pseudocódigo
    echo -e "//Numerar los pasos del pseudocódigo" >> $nombredelarchivo.c

     # Se dan los permisos para que el archivo pueda ser ejecutado   
    chmod +x $nombredelarchivo.c
    
# Con este condicional se evalúa si no ingresó ningún caracter entonces solicita lo siguiente    
elif [ -z "$nombredelarchivo" ]; then
    # Imprime en pantalla el mensaje y pregunta si desea continuar o no.
    echo "Debe nombrar el archivo. ¿Desea continuar Y/N?"
    #Lee la respuesta y guadar el valor en la variable respuesta
    read respuesta
         #Si la respuesta es si entonces repite nuevamente el proceso    
        if [ "$respuesta" == 'Y' ] || [ "$respuesta" == 'y' ] || [ "$respuesta" == 's' ] || [ "$respuesta" == 'S' ]; then
            echo ¿Qué nombre desea darle al archivo?
            read nombredelarchivo
            if [ -n "$nombredelarchivo" ]; then
                echo "/*" > $nombredelarchivo.c

                echo -e "Autor:\t\t\t$USER" >> $nombredelarchivo.c

                gcc --version > versiont
                version=$(head versiont --lines=1) 
                echo -e "Compilador:\t $version" >> $nombredelarchivo.c
                rm versiont

                echo -e "Compilado:\t gcc $nombredelarchivo.c -o $nombredelarchivo" >> $nombredelarchivo.c
    
                date +%D > fechaactual
                fecha=$(cat fechaactual)
                echo -e "Fecha: \t\t\t $fecha" >> $nombredelarchivo.c
                rm fechaactual
    
                echo -e "Librerias: \t\t\t studio" >> $nombredelarchivo.c
    
                echo -e "Resumen del programa:"
                read Resumen
                echo -e "Resumen: \t\t\t $Resumen" >> $nombredelarchivo.c
    
                echo -e "Entrada del programa:"
                read Entrada
                 echo -e "Entrada: \t\t\t $Entrada" >> $nombredelarchivo.c
    
                echo -e "Salida del programa:"
                read Salida
                echo -e "Salida: \t\t\t $Salida" >> $nombredelarchivo.c
    
                echo -e "/*" >> $nombredelarchivo.c
 
                echo -e "\n" >> $nombredelarchivo.c
    
                echo -e "//Librerias" >> $nombredelarchivo.c 
    
                echo -e "#include <studio.h>" >> $nombredelarchivo.c
    
                echo -e "//Numerar los pasos del pseudocódigo" >> $nombredelarchivo.c

                chmod +x $nombredelarchivo.c
            # Si nuevamente el ejecutor insiste en no colocar nombres entonces automáticamente el programa se cierra             
            elif [ -z "$nombredelarchivo" ]; then
                echo "Nuevamente no ha nombrado el archivo. Lo sentimos mucho no puede continuar. Gracias por participar. ¡Adiós!"
                exit
        #Si la respuesta del ejecutor es N entonces el programa se cierra
        elif [ "$respuesta" == 'N'  ] || [ "$respuesta" == 'n' ] ; then
            #Imprime el siguiente mensaje 
            echo "Gracias por participar. ¡Adiós!"
            #Cierra el programa
            exit             
         #Se cierra el ciclo if
         fi   
#Se cierra el ciclo if
fi
#Se cierra el ciclo if
fi 
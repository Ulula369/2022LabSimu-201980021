#!/bin/bash

: << 'Header'
Autor:              Abel Hernández
Fecha:              08/03/2022
Tipo de archivo:    Script de bash
Ejecución:          ./marzo8.sh
Resumén:            Genera header para archviso de programación en lenguaje C
Header

#Bienvenida
echo "******* Generador de archivos de C *******"
# Obtener y validar el nombre del archivo
read -p "Ingrese el nombre del archivo" nombre
if [ -z $nombre ]; then 
    echo "No ingresó un nombre válido"
    exit 2 # Error no de compilación ni de sintaxis sino de variable de usuario
fi
fnombre=$nombre".c" 
if [ -e $nombre ]; then 
    echo "El archivo ya existe"
    exit 2 # Error no de compilación ni de sintaxis sino de variable de usuario
fi

salida=$nombre".out"
fecha=$(date)
version=$(gcc --version | head -n 1)
#Crear contenido del header
echo "/*" > $fnombre # Crear el archivo con este nombre
# Llenar el contenido del archivo concatenandolo línae por línea
echo "Autor:              Abel" >>  $fnombre
echo "Fecha:             " $fecha >> $fnombre
echo "Compilador         "$version >> $fnombre
echo "Compilar:          " gcc -o $salida $fnombre >> $fnombre
echo "Librerias:         " studio >> $fnombre
echo "Resumen:           " >> $fnombre
echo "*/" >> $fnombre
echo "" >> $fnombre
echo "// Librerias" >> $fnombre
echo "#incluide <studio.h>" >> $fnombre
echo "Archivo realizado con éxito"
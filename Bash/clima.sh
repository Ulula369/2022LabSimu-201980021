#!/bin/bash
alumno="Abel Hernández" #Declaración de variable alumno igualandola al nombre del estudiante
carnet="201980021" #Declaración de variable carnet igualandola al número de carnet del estudiante
echo "Estudiante $alumno" # Se escribe Estudiante seguido del valor de la variable alumno
echo "Carnet $carnet" # Se escribe carnet seguido del valor de la variable carnet 
date # Imprime la fecha y hora actual
curl -# wttr.in/Guatemala > clima # Obtiene el clima, con la bandera -# se muestra una
# barra de progreso hasta que carga la informacion del clima la cual se guarda en el fichero clima 
head -n7 clima # Lee las primeras siete líneas del fichero
rm clima # Elimina el fichero temporal clima
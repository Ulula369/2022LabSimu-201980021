unset label
clear 
set terminal epslatex 
set output "Ej4.tex"
set title "Prueba gráfico"
set xlabel "x"
set ylabel "datos"
set grid
set style data linespoint 
plot "datos" using 2:3
#coment 
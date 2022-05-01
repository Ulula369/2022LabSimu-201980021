unset label
clear 
#set terminal postscript enhanced color
#set output "| ps2pdf - valoresdemoneda.pdf"
set terminal jpeg
set output "valoresdemoneda.jpg"
set title "Comportamiento del dolar estadounidense ante el euro"
set xlabel "Años"
set ylabel "valor de la moneda"
set xrange [2006:2020]
set grid
set style data linespoints   
f(x) = m*x + b
fit f(x) "valoresdemoneda" via m, b
plot "valoresdemoneda", f(x) title "funcion", f(x) title sprintf("%2f*x + %2f", m,b) 
 
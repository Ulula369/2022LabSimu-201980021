unset label
clear 
set title "Raices de la ecuacion f(x)= 0.1*x^2 +x*log(x)"
set terminal jpeg
set output "graficametodonumerico.jpg"
#set terminal postscript enhanced color
#set output "| ps2pdf - graficametodonumerico.pdf"
set xlabel "x"
set ylabel "f(x)"
set xrange [0:7]
set yrange [-2:15]
set grid
f(x)=0.1*x*x +x*log(x)
plot f(x) with linespoints
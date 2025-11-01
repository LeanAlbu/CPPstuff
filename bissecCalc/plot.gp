set title "Método da Bisseção"
set xlabel "x"
set ylabel "f(x)"
set grid

# Eixos como plano cartesiano
set xzeroaxis lw 1 lc rgb "black"
set yzeroaxis lw 1 lc rgb "black"

# Intervalo mais aberto
set xrange [-5:5]
set yrange [-10:10]

# Estilo dos pontos das iterações
set style line 1 lc rgb "blue" pt 7 ps 1.2   # pontos azuis

# Estilo da função
set style line 2 lc rgb "red" lw 2           # linha vermelha

# Estilo do ponto final
set style line 4 lc rgb "orange" pt 9 ps 2   # estrela laranja grande

# Pega estatísticas da coluna 4 (ponto médio)
stats 'table.dat' using 4 nooutput
raiz_aprox = STATS_max
linha_final = STATS_records

plot 'table.dat' using 4:5 with points ls 1 title "Iterações", \
     (x**2 - 3) with lines ls 2 title "f(x)", \
     'table.dat' every ::(linha_final-1)::(linha_final-1) using 4:5 \
         with points ls 4 title "Ponto final"

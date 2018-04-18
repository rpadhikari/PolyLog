set term postscript enhanced color 'Helvetica-Bold,20'
set output 'polylog.ps'
set xr [-7:7]
set yr [0.001:10]
set log y
set style line 1 lt 1 lw 2 lc rgb 'black'
set style line 2 lt 2 lw 2 lc rgb 'black'
set xl '{/Symbol n}'
set yl 'Fermi-Dirac integral(F_{1/2})' offset 1
set grid
plot './data.out' u 1:2 w l ti 'polylog' ls 1,\
'./data.out' u 1:3 w l ti 'exp' ls 2
set output
! ps2pdf polylog.ps
! rm polylog.ps



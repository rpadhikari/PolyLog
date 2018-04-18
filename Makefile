FC=gcc -c
LD=gcc
SRC=fx.c simp.c fd.c main.c
OBJ=fx.o simp.o fd.o main.o
simp:
	$(FC) $(SRC)
	$(LD) $(OBJ) -o fd.x -lm
	rm -rf *.o
clean:
	rm -rf fd.x conv.x


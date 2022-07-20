main:conjuntos.o principal.o
	gcc -o main conjuntos.o principal.o

principal.o:principal.c conjuntos.h

conjuntos.o:conjuntos.c conjuntos.h
	gcc -c conjuntos.c

clean:
	rm *.o main


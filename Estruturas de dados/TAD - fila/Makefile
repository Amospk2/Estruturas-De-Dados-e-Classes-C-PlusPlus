objects = fila.o main.o

main : $(objects)
	g++ -o main $(objects)

fila.o : fila.h
main.o : fila.h

clean:
	rm *.o main
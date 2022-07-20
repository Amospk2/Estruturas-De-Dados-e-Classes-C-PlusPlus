p:p.o f.o
	gcc -o p p.o f.o

p.o: p.c f.h
	gcc -c p.c

f.o:f.c f.h
	gcc -c f.c

clean:
	rm *.o principal
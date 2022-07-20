principal: principal.o cadastro.o
		gcc -o principal principal.o cadastro.o

principal.o: principal.c cadastro.h
		gcc -c principal.c

cadastro.o:cadastro.c cadastro.h
		gcc -c cadastro.c
		
clean:
		rm *.o principal
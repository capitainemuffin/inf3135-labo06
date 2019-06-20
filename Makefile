options = -Wall -pedantic -std=c11


default : pile 

pile : main.o pile.o
	gcc -o pile main.o pile.o $(options)

main.o : main.c
	gcc -c -o main.o main.c $(options)

main.c : pile.o

pile.o : pile.c
	gcc -c -o pile.o pile.c $(options)

pile.c : pile.h

.PHONY : clean

clean : 
	rm -f *.o
	rm -f pile
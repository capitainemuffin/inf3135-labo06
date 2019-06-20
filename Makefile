default : pile 

pile : main.o pile.o
	gcc -o pile main.o pile.o

main.o : main.c
	gcc -c -o main.o main.c

main.c : pile.o

pile.o : pile.c
	gcc -c -o pile.o pile.c

pile.c : pile.h

.PHONY : clean

clean : 
	rm -f *.o
	rm -f pile
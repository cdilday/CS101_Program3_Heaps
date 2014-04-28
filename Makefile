# Makefile for heap module - Chris Dilday

#store : store.o heap.o
#	gcc -ansi -Wall -Wextra -pedantic -o store store.o heap.o

Heapdr : Heapdr.o heap.o
	gcc -ansi -Wall -Wextra -pedantic -o Heapdr Heapdr.o heap.o
	
heap.o : heap.h heap.c
	gcc -c -ansi -Wall -Wextra -pedantic heap.c

#store.o : heap.h store.c
#	gcc -c -ansi -Wall -Wextra -pedantic store.c

Heapdr.o : heap.h Heapdr.c
	gcc -c -ansi -Wall -Wextra -pedantic Heapdr.c	

clean :
	rm heap.o Heapdr Heapdr.o output.txt
	
#clean :
#	rm store store.o heap.o Heapdr Heapdr.o output.txt

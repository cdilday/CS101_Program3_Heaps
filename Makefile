# Makefile for heap module - Chris Dilday

#store : store.o heap.o
#	gcc -ansi -Wall -Wextra -pedantic -o store store.o heap.o

Heapdr : Heapdr.o heap.o insertionsort.o HeapSort.o
	gcc -ansi -Wall -Wextra -pedantic -o Heapdr Heapdr.o heap.o insertionsort.o HeapSort.o
	
heap.o : heap.h heap.c
	gcc -c -ansi -Wall -Wextra -pedantic heap.c
	
insertionsort.o : insertionsort.h insertionsort.c
	gcc -c -ansi -Wall -Wextra -pedantic insertionsort.c

HeapSort.o : HeapSort.h HeapSort.c
	gcc -c -ansi -Wall -Wextra -pedantic HeapSort.c


Heapdr.o : heap.h Heapdr.c
	gcc -c -ansi -Wall -Wextra -pedantic Heapdr.c	

clean :
	rm heap.o Heapdr Heapdr.o insertionsort.o HeapSort.o
	
#clean :
#	rm store store.o heap.o Heapdr Heapdr.o output.txt

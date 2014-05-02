# Makefile for heap module - Chris Dilday

sortPrint : sortPrint.o heap.o insertionsort.o HeapSort.o
	gcc -ansi -Wall -Wextra -pedantic -o sortPrint sortPrint.o heap.o insertionsort.o HeapSort.o

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

sortPrint.o: heap.h sortPrint.c
	gcc -c -ansi -Wall -Wextra -pedantic sortPrint.c	

clean :
	rm heap.o Heapdr Heapdr.o insertionsort.o HeapSort.o
	

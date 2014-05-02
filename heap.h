/* Here will go the prototype functions for the Heap ADT */
#include <stdio.h>


/*Declaration of the HeapHandle empty pointer. Set it to null
 *when you first use it! */
typedef struct HeapStruct * HeapHndl;

/* This function will allocate memory for a new Heap, returning
 *a POINTER to the thing allocated */
HeapHndl NewHeap ( int max);

/* This function ACCEPTS a pointer to a HeapHandle and will free
 * every Node in the Heap, as well as the Heap itself. */
void freeHeap (HeapHndl* H); /*Pre condition -> H was made with NewHeap*/

/* This checks to see whether the HeapStruct points to any struct nodes. 
 * If it points to anything NOT null, it will return 1. 
 * If it all it points to are NULL things, it will return 0. */
int isEmpty (HeapHndl H);

/* This checks to see if every leaf in the tree is at the same depth and
* their parents each have 2 nodes.*/
int isFull (HeapHndl H);

/* This will return the maximum value in the heap*/
int maxValue (HeapHndl H);

/*this will delete the maximum value in the heap*/
void deleteMax (HeapHndl H);

/*this will insert a value of priority priority into the heap*/
void insert (HeapHndl H, int priority);

/*debugging purposes only, prints the whole heap*/
void printHeap(HeapHndl H);

/*debugging purposes only, prints a single element of the heap*/
void printAt(HeapHndl H, int index);
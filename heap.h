/* Here will go the prototype functions for the Heap ADT */
#include <stdio.h>


/*Declaration of the HeapHandle empty pointer. Set it to null
 *when you first use it! */
typedef struct HeapStruct * HeapHndl;

/* This function will allocate memory for a new Heap, returning
 *a POINTER to the thing allocated */
HeapHndl NewHeap ( int max);

/* This function ACCEPTS a pointer to a HeapHandle and will free
 * the heap array pointer, and then the heap itself*/
void freeHeap (HeapHndl* H); /*Pre condition -> H was made with NewHeap*/

/* This checks to see whether the HeapStruct has any elements 
 * If it has elements, it will return 0 
 * If it has no elements it will return 1 */
int isEmpty (HeapHndl H); /*Pre condition -> H was made with NewHeap*/

/* This checks to see if the amount of elements is the maximum size of the heap
* If the current size is the maximum size, it returns 1
* If the current size is less than the maximum size, it returns 0*/
int isFull (HeapHndl H); /*Pre condition -> H was made with NewHeap*/

/* This will return the maximum value in the heap*/
int maxValue (HeapHndl H);/*Pre condition -> H was made with NewHeap*/

/*this will delete the maximum value in the heap*/
void deleteMax (HeapHndl H);/*Pre conditions -> H was made with NewHeap
* -> there was an element in the heap to be the maximum
* Post condition -> The heap now has the next highest value at max
* -> and still has the properties of a max heap*/

/*this will insert a value of priority priority into the heap*/
void insert (HeapHndl H, int priority);/*Pre conditions -> H was made with NewHeap
* -> the heap is not full
* Post condition -> The heap now contains an additional element and still
* -> has the properties of a max heap*/

/*debugging purposes only, prints the whole heap*/
void printHeap(HeapHndl H);

/*debugging purposes only, prints a single element of the heap*/
void printAt(HeapHndl H, int index);
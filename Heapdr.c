/* This will test the heap ADT */
#include "heap.h"
#include "insertionsort.h"
#include "myinclude.h"

int main ()
{
	HeapHndl theHeap;
	theHeap = NULL;
	int keys[] = { 4, 3, 5, 2, 1};
	printf("Insertion sorting Array: ");
	printKeys(keys, 5);
	insertionSort(keys, 5);
	printf("Array after insertion sort: ");
	printKeys(keys, 5);
	
	printf("next testing out the heap\n");
	theHeap = NewHeap( 6);
	if(isEmpty(theHeap))
	{
		printf("The heap is empty\n");
	}
	else
		printf("The heap is not empty\n");
	if(isFull(theHeap))
	{
		printf("The heap is full\n");
	}
	else
		printf("The heap is not full\n");
	insert(theHeap, 4);
	insert(theHeap, 5);
	insert(theHeap, 3);
	insert(theHeap, 6);
	insert(theHeap, 2);
	printHeap(theHeap);
	printHeap(theHeap);
	printHeap(theHeap);
	/*if(isFull(theHeap))
	{
		printf("The heap is full\n");
	}
	else
		printf("The heap is not full\n");
	if(isEmpty(theHeap))
	{
		printf("The heap is empty\n");
	}
	else
		printf("The heap is not empty\n");*/
	
	/*printf("deleting max...\n");
	deleteMax(theHeap);*/
	if(isFull(theHeap))
	{
		printf("The heap is full\n");
	}
	else
		printf("The heap is not full\n");

	return(0);
}

/* Here will go the implementation of the Heap ADT */

#include "heap.h"
#include "myinclude.h"
#include <assert.h>


typedef struct HeapStruct 
{
	int maxSize;
	int currSize;
	int (*heap);
} HeapStruct;

/* CONSTRUCTORS / DESTRUCTORS */

HeapHndl NewHeap ( int max) 
{
	HeapHndl tempHeap;
	tempHeap = malloc ( sizeof(HeapStruct) );
	printf(" New Heap created! \n ");
	tempHeap->maxSize = max;
	int temp [max];
	tempHeap->heap = temp;
	return tempHeap;
}

void freeHeap (HeapHndl * H)
{
	assert((*H) != NULL);
	free((*H));
	(*H) = NULL;
	(*H)->currSize = 0;
	printf( "Freed the heap! \n" );
}

int isEmpty(HeapHndl H) 
{
	assert (H != NULL);
	return (H->currSize == 0);
}

int maxValue(HeapHndl H)
{
	assert (H != NULL);
	int max;
	int i;
	max = 0;
	for( i = 1; i < H->currSize; i++)
	{
		if(H->heap[i] > max)
		{
			max = H->heap[i];
		}
	}
	return max;
}

void deleteMax(HeapHndl H)
{
	assert (H != NULL);
	int max;
	int maxIndex;
	int	i;
	max = 0;
	maxIndex = 0;
	for( i = 1; i < H->currSize; i++)
	{
		if(H->heap[i] > max)
		{
			maxIndex = i;
			max = H->heap[i];
		}
	}
	H->heap[maxIndex] = H->heap[H->currSize];
	H->heap[H->currSize] = NULL;
	H->currSize--;
	/*Heapify here*/
}

void insert(HeapHndl H, int priority)
{
	int index;
	int temp;
	assert (H != NULL);
	index = H->currSize + 1;
	H->heap[index] = priority;
	H->currSize++;
	while( index/2 != 0 && H->heap[(index / 2)] < H->heap[index])
	{
		temp = H->heap[(index / 2)];
		H->heap[(index / 2)] = H->heap[index];
		H->heap[index] = temp;
		index = index / 2;
	}

}

void printHeap(HeapHndl H)
{
	int i;
	for (i = 1; i <= H->currSize; i++) 
	{
		printf("%d ", H->heap[i]);
	}
	printf("\n");
}
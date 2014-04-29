/* Here will go the implementation of the Heap ADT */

#include "heap.h"
#include "myinclude.h"
#include <assert.h>


typedef struct HeapStruct 
{
	int maxSize = 1000;
	int currSize = 0;
	int (*heap)[maxSize];
} HeapStruct;

/* CONSTRUCTORS / DESTRUCTORS */

HeapHndl NewHeap () 
{
	HeapHndl tempHeap;
	tempHeap = malloc ( sizeof(HeapStruct) );
	printf(" New Heap created! \n ");
	return tempHeap;
}

void freeHeap (HeapHndl * H)
{
	assert((*H) != NULL);
	free((*H));
	(*H) = NULL;
	(*H).currSize = 0;
	printf( "Freed the heap! \n" );
}

Boolean isEmpty(HeapHndl H) 
{
	assert (H != NULL);
	return (H.currSize == 0);
}

Boolean isEmpty(HeapHndl H) 
{
	assert (H != NULL);
	return (H.currSize == H.maxSize );
}

int maxValue(HeapHandl H)
{
//can be optimized once sorted
	assert (H != NULL);
	int max  = 0;
	for( int i = 1; i < H.currSize; i++)
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
	int max  = 0;
	int maxIndex = 0;
	for( int i = 1; i < H.currSize; i++)
	{
		if(H->heap[i] > max)
		{
			maxIndex = i;
			max = H->heap[i];
		}
	}
	H->heap[maxIndex] = H->heap[H.currSize];
	H->heap[H.currSize] = NULL;
	H.currSize--;
	//Max Heapify here
}

void insert(HeapHndl H, int priority)
{
	assert (H != NULL);
	H->heap[currsize+1] = priority;
	H.currsize++;
	// Max heapify here
	
}

void MaxHeapify();
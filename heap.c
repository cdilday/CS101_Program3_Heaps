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

HeapHndl NewHeap ( int max) 
{
	HeapHndl tempHeap;
	tempHeap = malloc ( sizeof(HeapStruct) );
	printf(" New Heap created! \n ");
	tempHeap->maxSize = max;
	int temp [max + 1];
	tempHeap->currSize = 0;
	tempHeap->heap = malloc (sizeof(temp));
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
	if (H->currSize == 0)
		return 1;
	else
		return 0;
}

int isFull(HeapHndl H) 
{
	assert (H != NULL);
	if (H->currSize == H->maxSize)
		return 1;
	else
		return 0;
}

int maxValue(HeapHndl H)
{
	assert (H != NULL);
	return H->heap[1];
}

void deleteMax(HeapHndl H)
{
	int index;
	int curr;
	int tempMax;
	int lorr;
	assert (H != NULL);
	H->heap[1] = H->heap[H->currSize];
	H->heap[H->currSize] = NULL;
	H->currSize--;
	curr = H->heap[1];
	index = 1;
	while( (index * 2 <= H->currSize && (H->heap[2*index] > curr)) || ((index * 2) + 1 <= H->currSize && (H->heap[2*index + 1] > curr)))
	{
		tempMax = curr;
		if (H->heap[2*index] > tempMax)
		{
			lorr = 1;
			tempMax = H->heap[2*index];
		}
		if ((index * 2) + 1 <= H->currSize && H->heap[2*index + 1] > tempMax)
		{
			lorr = 2;
			tempMax = H->heap[2*index + 1];
		}
		if (tempMax != curr)
		{
			if(lorr == 1)
			{
				H->heap[index] = tempMax;
				H->heap[2*index] = curr;
				index = 2*index;
			}
			else if(lorr == 1)
			{
				H->heap[index] = tempMax;
				H->heap[2*index + 1] = curr;
				index = 2*index + 1;
			}
		}
	}
	
}

void insert(HeapHndl H, int priority)
{
	int index;
	int temp;
	assert (H != NULL);
	assert (H->currSize != H-> maxSize);
	index = H->currSize + 1;
	H->heap[index] = priority;
	H->currSize += 1;
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
	printf(" \n");
}

void printAt(HeapHndl H, int index)
{
	printf("%d ", H->heap[index]);
}
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
	MaxHeapify(H, 1);
}

void insert(HeapHndl H, int priority)
{
	assert (H != NULL);
	H->heap[H->currSize + 1] = priority;
	H->currSize++;
	MaxHeapify(H, 1);
	
}

void MaxHeapify(HeapHndl H, int index)
{
	int l;
	int r;
	int maxLeft;
	int maxRight;
	int max;
	int temp;
	l = 2 * index;
	r = 2 * index + 1;
	maxLeft = FALSE;
	maxRight = FALSE;
	if( l > H->currSize || (H->heap[l] == NULL && H->heap[r] == NULL))
	{
		return;
	}
	else
	{
		max = H->heap[index];
		if( H->heap[l] != NULL && H->heap[l] > max)
		{
			max = H->heap[l];
			maxLeft = TRUE;
		}
		if( H->heap[r] != NULL && H->heap[r] > max)
		{
			max = H->heap[r];
			maxRight = TRUE;
			maxLeft = FALSE;
		}
		if (max == H->heap[index])
		{
			return;
		}
		else
		{
			temp = H->heap[index];
			if(maxRight)
			{
					H->heap[index] = H->heap[r];
					H->heap[r] = temp;
					MaxHeapify(H, r);
			}
			else if(maxLeft)
			{
					H->heap[index] = H->heap[l];
					H->heap[l] = temp;
					MaxHeapify(H, l);
			}
		}
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
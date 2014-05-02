#include "HeapSort.h"
#include "heap.h"
#include "myinclude.h"
#include <assert.h>


void heapSort(int keys[], int numKeys)
{
	int i;
	HeapHndl H;
	/*int sorted[numKeys];*/
	H = NewHeap( numKeys);
	for (i = 0 ; i < numKeys; i++) 
	{
		insert(H, keys[i]);
	}
	printf("During Heapsort: ");
	printHeap(H);
	for ( i = numKeys - 1; i >= 0; i--)
	{
		keys[i] = maxValue(H);
		deleteMax(H);
	}
	/*keys = sorted;*/
}
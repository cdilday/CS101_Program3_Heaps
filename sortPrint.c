#include "heap.h"
#include "insertionsort.h"
#include "HeapSort.h"
#include "myinclude.h"

int isSorted(int keys[], int numKeys)
{
	int i;
	for( i = 0; i + 1 < numKeys; i++)
	{
		if(keys[i] > keys[i + 1])
			return 0;
	}
	return 1;
}

int main (int argc, char *argv[])
{
	int numKeys;
	char buffer[100000];
	char *pbuff;
	int i;
	FILE *file;
	char fileName[1000];
	argc = argc;
	
	file = fopen (argv[1], "r");
	fgets(buffer, sizeof buffer, file);
	pbuff = buffer;
	numKeys = atoi(pbuff);
	int keys[numKeys];
	/*printf("%d \n", numKeys);*/
	 
	for(i = 0; i < numKeys && fgets(buffer, sizeof buffer, file); i++) 
	{
		pbuff = buffer;
		keys[i] = atoi(pbuff);
	}
	
	printf("Here's the array: ");
	for (i = 0; i < numKeys; i++) 
	{
		printf("%d ", keys[i]);
	}
	int heapKeys[numKeys];
	int insertionKeys[numKeys];
	memcpy(heapKeys, keys, sizeof(keys));
	memcpy(insertionKeys, keys, sizeof(keys));
	
	printf("\nInsertion sort: ");
	insertionSort(insertionKeys, numKeys);
	printKeys(insertionKeys, numKeys);
	printf("\nHeap sort: ");
	heapSort(heapKeys, numKeys);
	printKeys(heapKeys, numKeys);
	printf("\n");
	if(isSorted(heapKeys, numKeys) == 1)
	{
		printf("Heap is sorted \n");
	}
	else
	{
		printf("Heap is not sorted \n");
	}
	
	if(isSorted(insertionKeys, numKeys) == 1)
	{
		printf("Insertion Sort is sorted \n");
	}
	else
	{
		printf("Insertion Sort is not sorted \n");
	}
	return 0;
}


#include "heap.h"
#include "insertionsort.h"
#include "HeapSort.h"
#include "myinclude.h"
#include <time.h>


int main (int argc, char *argv[])
{
	int numKeys;
	char buffer[100000];
	char *pbuff;
	int i;
	FILE *file;
	char fileName[1000];
	argc = argc;
	clock_t startTime, duration;
	
	file = fopen (argv[1], "r");
	fgets(buffer, sizeof buffer, file);
	pbuff = buffer;
	numKeys = atoi(pbuff);
	int keys[numKeys];
	 
	for(i = 0; i < numKeys && fgets(buffer, sizeof buffer, file); i++) 
	{
		pbuff = buffer;
		keys[i] = atoi(pbuff);
	}
	
	int heapKeys[numKeys];
	int insertionKeys[numKeys];
	memcpy(heapKeys, keys, sizeof(keys));
	memcpy(insertionKeys, keys, sizeof(keys));
	startTime = clock();
	insertionSort(insertionKeys, numKeys);
	duration = clock() - startTime;
	printf ("Insertion Sort algorithm took %f seconds.\n", ((float) duration ) / CLOCKS_PER_SEC);

	startTime = clock();
	heapSort(heapKeys, numKeys);
	duration = clock() - startTime;
	printf ("Heap Sort algorithm took %f seconds.\n", ((float) duration ) / CLOCKS_PER_SEC);
	return 0;
}

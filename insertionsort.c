/* Here will go the implementation of the Heap ADT */

#include "inseertionsort.h"
#include "myinclude.h"
#include <assert.h>


void insertionSort(int keys[], int numKeys)
{
	int temp;
	for (i = 1 ; i <= numkeys - 1; i++) 
	{
		j = i;

		while ( j > 0 && keys[j] < keys[j-1]) 
		{
			temp= keys[j];
			keys[j] = keys[j-1];
			keys[j-1] = temp;
			j--;
		}
	}
}

void printKeys(int keys[], int numKeys)
{
	for (i = 0; i <= numkeys - 1; i++) 
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}
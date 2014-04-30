/* Here will go the implementation of the Heap ADT */

#include "insertionsort.h"
#include "myinclude.h"
#include <assert.h>


void insertionSort(int keys[], int numKeys)
{
	int temp;
	int i;
	int j;
	for (i = 1 ; i <= numKeys - 1; i++) 
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
	int i;
	for (i = 0; i <= numKeys - 1; i++) 
	{
		printf("%d ", keys[i]);
	}
	printf("\n");
}
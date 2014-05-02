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
	insert(theHeap, 4);
	insert(theHeap, 5);
	insert(theHeap, 3);
	printHeap(theHeap);
	
	/*ListHndl TheList;
	TheList = NULL;
	TheList = NewList();
	
	if(isEmpty(TheList)) printf("The list is empty \n");

	insertAtFront(TheList, testData);
	insertAtBack(TheList, testData2);
	insertAtBack(TheList, testData3);
	insertAtBack(TheList, testData2);
	insertAtFront(TheList, testData);
	insertAtBack(TheList, testData2);
	insertAtFront(TheList, testData);
	insertAtFront(TheList, testData3);
	
	printf("Current is %lu\n", getCurrent(TheList));
	moveLast(TheList);
	printf("Current is %lu\n", getCurrent(TheList));
	moveFirst(TheList);
	printf("Current is %lu\n", getCurrent(TheList));
	moveNext(TheList);
	printf("Current is %lu\n", getCurrent(TheList));
	movePrev(TheList);
	printf("Current is %lu\n", getCurrent(TheList));

	insertBeforeCurrent(TheList, testData2);
	printf("Inserted %lu before %lu, which means %lu is before %lu\n", testData2, testData3, getFirst(TheList), getCurrent(TheList));
	
	printf("Printing the entire list.. ");
	printList(TheList);
	
	deleteFirst(TheList);
	deleteLast(TheList);
	printf("Printing the entire list after deleting first & last.. ");
	printList(TheList);
	moveNext(TheList);
	moveNext(TheList);
	moveNext(TheList);
	movePrev(TheList);
	printf("Printing the entire list after deleting current: %lu.. ", getCurrent(TheList));
	deleteCurrent(TheList);
	printList(TheList);
	
	moveFirst(TheList);
	if(isEmpty(TheList)) 
		printf("The list is empty \n");
	else
		printf("The list is NOT empty \n"); 
	
	printf("Printing FIRST, CURRENT, LAST... ");
	printf("%lu, %lu, %lu \n", getFirst(TheList), getCurrent(TheList), getLast(TheList));
	
	
	printf("Printing the entire list.. ");
	printList(TheList);
	
	if(isEmpty(TheList)) 
		printf("The list is empty \n");
	else
		printf("The list is NOT empty \n"); 
	
	makeEmpty(TheList);
	
	if(isEmpty(TheList)) 
		printf("The list is empty \n");
	else
		printf("The list is NOT empty \n"); 

	freeList(&TheList);
	*/
	return(0);
}

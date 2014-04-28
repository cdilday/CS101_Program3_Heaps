/* This will test the heap ADT */
#include "heap.h"
#include "myinclude.h"

int main ()
{
	int testData = 98;
	testData2 = 97;
	testData3 = 99;

	ListHndl TheList;
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
	
	return(0);*/
}
/*4:53 PM - C7 the Out-of-Date Tutorial: okay so for insertion sort you take the values in keys[] and insert them sorted one-by-one into a new array right?
4:54 PM - ClassicEvil: nope
4:54 PM - C7 the Out-of-Date Tutorial: Yessssssss I'm good at this
4:54 PM - ClassicEvil: you sort the items in the array
4:55 PM - C7 the Out-of-Date Tutorial: I thought insertion sort was essentially just treating the unsorted array like input, and then going down and inserting it into a new array in a sorted fashion
4:55 PM - ClassicEvil: true, and that's how you can do it. however, he wants to treat the smaller side of the array as the sorted part
4:56 PM - C7 the Out-of-Date Tutorial: the smaller side?
4:56 PM - ClassicEvil: like the indexes closer to 0
4:56 PM - ClassicEvil: essentially, you take the first element, compare it to every element after it. the second it becomes less than an element, insert before that element it's smaller than
4:57 PM - ClassicEvil: then instead of going back to the first element, take the second element and repeat
4:57 PM - ClassicEvil: it's a while loops inside of a for loop
4:57 PM - ClassicEvil: while loop

http://www.programmingsimplified.com/c/source-code/c-program-insertion-sort*/


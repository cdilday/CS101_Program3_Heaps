This program was created by Christopher Dilday ID#1377751. I had no partners, and while I did ask for help from Alex Vincent, we did not share code.

The make file makes all 3 programs Heapdr, sortPrint, and sortComp but you may have to type "make <program name>" rather than just make for each program specifically

Heapdr is the Heap Driver which tests both all of the heap ADT and insertion sort. the ADT and insertion sort .c files contain print functions I used for debugging. 

sortPrint reads in a file given in the command line that's formatted like the samples given in the resources on ecommons. 
It prints the array keys before sorting, a different array after insertion sort, and yet another array that was heap sorted. 
After this, it checks to make sure both arrays are fully sorted.

sortComp reads in the file and sorts similar to sortPrint but instead of printing it calculates the time taken for the 
insertion sort and then the Heap Sort. Unfortunately since the Unix timeshare is so fast it's impossible to get accurate time until you get into the thousands
of numbers.
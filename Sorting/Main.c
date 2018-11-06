/*	Program for bubble sort and array	*/
/*	File inclusion	*/
#include<stdio.h>
#include <stdlib.h>

#include "Misc.c"
#include "Sort.h"

//driver function
int main()
{
	int size;
	
	//letting user enter size
	printf("Enter size for Array : ");
	scanf("%d", &size);
	int *ptrArray = (int *) malloc(size * sizeof (int));		//dynamically allocating array
	int *newArray = (int *) malloc(size * sizeof (int));
	printf("\nEnter Array : ");
	
	setArray(ptrArray, size);
	
//	bubbleSort(ptrArray, size);
	
//	insertionSort(ptrArray, size);

//	selectionSort(ptrArray, size);
	
//	quickSort(ptrArray, 0, size);
	
//	counting(ptrArray, newArray, size);
	
//	heapSort(ptrArray, size);
	
//	mergeSort(ptrArray, 0, size-1);
	
	getArray(ptrArray, size);	
		
	return 0;				
}
/*	Code ends here	*/

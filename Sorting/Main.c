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
	
	printf("\nEnter Array : ");
	
	setArray(ptrArray, size);
	
	bubbleSort(ptrArray, size);
	
	getArray(ptrArray, size);	
		
	return 0;				
}
/*	Code ends here	*/

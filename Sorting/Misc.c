/*
 *	function to set values of an array
 *	@param arr[] array passed
 *	@param size array size
 *	@return void
 */
void setArray(int arr[], int size)
{	
	int i;
	for(i = 0; i < size; i++)
		scanf("%d", &arr[i]);
}

/*
 *	function to display values from an array
 *	@param arr[] array passed
 *	@param size array size
 *	@return void
 */		
void getArray(int arr[], int size)
{
	int i;
	
	printf("\n\nArray : ");
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

/*
 *	function to swap two integer
 *	@param *x address of first number
 *	@param *y address of second number
 *	@return void
 */
void swap(int *x, int *y)
{
	if( *x != *y)
	{
		int temp = *x;
		*x = *y;
		*y = temp;
	}
}

/*
 *	function to get max element from an array
 *	@param arr[] integer array passed
 *	@param size size of array passed
 *	@return max max elmenet if found
 */
int getMax(int arr[], int size)
{
    int i, max = arr[0];
    for(i = 0; i < size; i++)
        if( max < arr[i] )
            max = arr[i];

    return max;
}

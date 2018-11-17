/*
 *	function to sort an array using bubble sort algorithm
 *	@param arr[] array passed
 *	@param size size of array passed
 *	@return void
 */
void selectionSort(int arr[], int size)
{
	int i, j, min_indx;
	
	for(i = 0; i < size; i++)
	{
		min_indx = i;
		
		for(j = i+1; j < size; j++)
		{
			if(arr[min_indx] > arr[j])
				min_indx = j;
		}
		
		swap(&arr[i], &arr[min_indx]);
	}
}

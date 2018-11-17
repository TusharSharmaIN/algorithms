/*
 *	function to part the sub-array with respect to the right most pivot
 *	@param arr[] array passed
 *	@param left left most index of sub-array passed
 *	@param right right most index of sub-aray passed
 *	@return i+1 index upto which partition is done
 */
int partition(int arr[], int left, int right)
{
	int i, j;
	int pivot = arr[right];
	
	i = left - 1;
	
	for(j = left; j <= right-1; j++)
	{
		if(arr[j] <= pivot)
		{
			i++;
			if(arr[i] != arr[j])
				swap(&arr[i], &arr[j]);
		}
	}
	
	swap(&arr[i+1], &arr[j]);
	
	return (i+1);
}

/*
 *	function to sort an array using bubble sort algorithm
 *	@param arr[] array passed
 *	@param left left most index of passed array
 *	@param right right most index of passed array
 *	@return void
 */
void quickSort(int arr[], int left, int right)
{
	if(left < right)
	{
		int pivot = partition(arr, left, right);
		
		quickSort(arr, left, pivot - 1);
		quickSort(arr, pivot + 1, right);
	}
}

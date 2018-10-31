
/*	use while calling in main
 *	quickSort(ptrArray, 0, size);
 *	size is size of array
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

void quickSort(int arr[], int left, int right)
{
	if(left < right)
	{
		int pivot = partition(arr, left, right);
		
		quickSort(arr, left, pivot - 1);
		quickSort(arr, pivot + 1, right);
	}
}

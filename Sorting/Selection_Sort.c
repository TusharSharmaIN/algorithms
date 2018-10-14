//function to implement selection sort
//arr[] is the array passed, size is the size of array passed
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

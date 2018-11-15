/*
 *	merge function to merge two sub arrays
 *	@param arr[] to be merged into
 *	@param p first index of subarray
 *	@param q middle index of subarray
 *	@param r last index of subarray
 *	@return void
 */
void merge(int arr[], int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;

	int leftArr[n1], rightArr[n2];
	
	int i, j, k;
	
	for( i = 0; i < n1; i++ )
		leftArr[i] = arr[p + i];
	
	for( j = 0; j < n2; j++ )
		rightArr[j] = arr[q + j + 1];

	i = j = 0;
	k = p;
	
	while (i < n1 && j < n2) 
	{ 
		if (leftArr[i] <= rightArr[j]) 
		{ 
		    arr[k] = leftArr[i++];
		} 
		else
		{ 
		    arr[k] = rightArr[j++];
		} 
		k++; 
	} 

    	while (i < n1) 
    	{ 
        	arr[k++] = leftArr[i++];
    	} 

    	while (j < n2) 
    	{ 
        	arr[k++] = rightArr[j++];
    	}
}

/*
 *	function to sort an array using merge sort algorithm
 *	@param arr[] array need to be sorted
 *	@param p first index
 *	@param r last index
 *	@return void
 */
void mergeSort(int arr[], int p, int r)
{	
	if(p < r)
	{
		int q = (p + r)/2;
		mergeSort(arr, p, q);
		mergeSort(arr, q+1, r);
		merge(arr, p, q, r);
	}
}


//function to bubble sort an array
void bubbleSort(int arr[], int size)
{
	int i,j;
	int swp;
	
	for(i=0;i<size-1;i++)
	{	
		swp = 0;
	
		for(j=0;j<size-i-1;j++)
		{	
			if(arr[j]>arr[j+1])
			{	
				swap(&arr[j], &arr[j+1]);
				swp = 1;
			}
		}
		
		if(!swp)
			break;
	}
	
}

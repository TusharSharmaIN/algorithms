//function to bubble sort an array
void bubbleSort(int arr[], int size)
{
  int i,j;
	int swap;
	
	for(i=0;i<size-1;i++)
	{	
		swap = 0;
	
		for(j=0;j<size-i-1;j++)
		{	
			if(arr[j]>arr[j+1])
			{	
				swap(&arr[j], &arr[j+1]);
				swap = 1;
			}
		}
		
		if(!swap)
			break;
	}
}

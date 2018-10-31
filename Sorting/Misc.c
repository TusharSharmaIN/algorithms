void setArray(int arr[], int size)
{	
	int i;
	for(i = 0; i < size; i++)
		scanf("%d", &arr[i]);
}

void getArray(int arr[], int size)
{
	int i;
	
	printf("\n\nArray : ");
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

void swap(int *x, int *y)
{
	if( *x != *y)
	{
		int temp = *x;
		*x = *y;
		*y = temp;
	}
}

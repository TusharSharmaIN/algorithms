//function to set array values
void setArray(int arr[], int size)
{	
	int i=0;
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
}

//function to print array
void getArray(int arr[], int size)
{
	int i=0;
	printf("\n\nArray : ");
	for(i=0; i<size; i++)
		printf("%d ",arr[i]);
}

//function to swap two int
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

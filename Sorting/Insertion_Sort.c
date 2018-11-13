/*
 *	function to sort and array
 *	@param array to be sorted
 *	@param size size of an array
 *	@return void
 */
void insertionSort(int arr[], int size)
{
	int j;
	int temp, pos;
	for(j = 1; j<size; j++)
	{
		temp = arr[j];
		pos = j-1;
		while(pos >= 0 && arr[pos] > temp)
		{
			arr[pos+1] = arr[pos];
			pos--;
		}
		arr[pos+1] = temp;
	}
}

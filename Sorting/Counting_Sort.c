/*
 *	function to sort an array using counting sort algorithm
 *	@param arr[] array to be sorted
 *	@param newArr[] new array that is sorted from the passed array
 *	@param size size of array passed
 *	@return void
 */
void countingSort(int arr[], int newArr[], int size)
{
    int key = getMax(arr, size);
    
    int countArr[key+1];
    int i, j;
    
    for(i = 0; i <= key; i++)
    {
        countArr[i] = 0;
    }
    
    for(j = 0; j < size; j++)
    {
        countArr[arr[j]] = countArr[arr[j]] + 1;
    }

    for(i = 1; i <= key; i++)
    {
            countArr[i] = countArr[i] + countArr[i-1];
    }

    for(j = size-1; j >= 0; j--)
    {
        newArr[countArr[arr[j]] - 1] = arr[j];
        countArr[arr[j]] = countArr[arr[j]] - 1;
    }
}

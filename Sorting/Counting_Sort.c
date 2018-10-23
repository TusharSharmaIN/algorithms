

int getMax(int arr[], int size)
{
    int i, max = arr[1];
    for(i = 1; i <= size; i++)
        if( max < arr[i] )
            max = arr[i];

    return max;
}

/*
 *	countingSort(A,B,size)
 *	A is transmiting matrix and B is the recieving matrix
 */
void countingSort(int arr[], int newArr[], int size)
{
    int key = getMax(arr, size);
    
    int countArr[key + 1];
    int i, j;
    
    for(i = 0; i < key; i++)
    {
        countArr[i] = 0;
    }
    
    for(j = 1; j <= size; j++)
    {
        countArr[arr[j]] = countArr[arr[j]] + 1;
    }
    
    for(i = 1; i <= key; i++)
    {
        countArr[i] = countArr[i] + countArr[i-1];
    }
    
    for(j = size; j > 0; j--)
    {
        newArr[countArr[arr[j]]] = arr[j];
        countArr[arr[j]] = countArr[arr[j]] - 1;
    }
}

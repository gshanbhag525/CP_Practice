
//Given an array A[] of size n. The task is to find the largest element in it.

class Compute {
    
    public int largest(int arr[], int arraySize)
    {   int inputIndex=0;
        int largestElement = arr[inputIndex];
        for (; inputIndex<arraySize-1; inputIndex++) {
            if(arr[inputIndex+1] > arr[inputIndex])
                largestElement = arr[inputIndex+1];
        }
        return largestElement;           
    }
}

// Array rotation

#include <iostream>

using namespace std;

void rotateArray(int arr[], int n, int d){
    int temp[d];
    for(int i =0; i<d; i++){
        temp[i] = arr[i];
    }

    for(int i=0; i<n-d; i++){
        arr[i] = arr[i+d];
    }    
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }    
    

}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=7, d=2;
    rotateArray(arr, n, d);
    return 0;
}
#include<stdio.h>
 
int linearSearch(int arr[], int size, int element){
	int i;
    for ( i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
 
int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}
 
int main(){
    // Unsorted array for linear search
     int arr[] = {1,3,5,56,444,3,23,5,44,54634,56,34};
     int size1 = sizeof(arr)/sizeof(int);
 
    // Sorted array for binary search
    int arr1[] = {1,3,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);
    int element = 444;
    int search= linearSearch(arr,size1,element);
    int searchindex = binarySearch(arr1, size, element);
    printf("The element %d was found at index %d \n", element, searchindex);
    printf("The element %d was found at index %d \n", element, search);
    return 0;
}

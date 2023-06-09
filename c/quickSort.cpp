#include<stdio.h>
void printarray(int *arr,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
int partition(int *arr,int low, int high){
	int pivot= arr[low];
	int b[100];
	int i=low+1;
	int j= high;
	int temp;
	do{
		while(arr[i]<pivot){
			i++;
		}
		while(arr[j]>pivot){
			j--;
		}
		if(i<j){
			temp=arr[j];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}while(i<j);
	temp= arr[low];
	arr[low]=arr[j];
	arr[j]=temp;
	return j;
}
void QuickSort(int *arr,int low, int high){
	int partitionindex;
	if(low<high){
		partitionindex=partition(arr, low,high);
		QuickSort(arr, low, partitionindex-1);
		QuickSort(arr, partitionindex+1, high);
	}
}
int main(){
	int n,i, arr[n];
	printf("Enter the size");
	scanf("%d",&n);
	printf("Enter the array");
	for( i=0;i< n;i++){
		scanf("%d",&arr[i]);
	}
	QuickSort(arr, 0,n-1);
	printarray(arr,n);
}

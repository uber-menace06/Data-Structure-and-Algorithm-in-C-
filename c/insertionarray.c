#include<stdio.h>
void display(int arr[],int n){
	//traversal
	int i;
	for( i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
}
int intInsertion(int arr[],int size,int element, int capacity, int index){
	if(size>=capacity){
		return -1;
	}
	else{
		int i;
		for( i=size-1;i>=index;i--){
			arr[i+1]=arr[i];
		}
		arr[index]=element;
		return 1;
	}
}
int main(){
	int arr[100]={ 7,12,88,90,32};
	int size=5;
	int capacity=100;
	int element=45;
	int index=3;
	display(arr,size);
	intInsertion(arr,size,element,capacity,index);
	size+=1;
	display(arr,size);
}

#include<stdio.h>
void display(int arr[],int n){
	//traversal
	int i;
	for( i=0;i<n;i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
}
void intdeletation(int arr[],int size,int index){
		int i;
		for( i=index;i<size-1;i++){
			arr[i]=arr[i+1];
		}
}
void main(){
	int arr[100]={ 7,12,88,90,32};
	int size=5;
	int index=3;
	display(arr,size);
	intdeletation(arr,size,index);
	size-=1;
	display(arr,size);
	getch();
}

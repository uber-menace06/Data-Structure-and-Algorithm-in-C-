#include<stdio.h>
int main(){
	int a[100],n,i,j,k;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array");
	for(i =0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]=a[j]){
				for(k=j;k<n;k++){
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for(i =0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}

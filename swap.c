#include <stdio.h>
#include <limits.h>
void swap_max(int arr[], int l, int n){
	int temp = arr[n];
	int lar=INT_MIN;
	int larIndex=0;
	for (int i=n;i<l;i++){
		if (arr[i]>lar){
			lar=arr[i];
			larIndex=i;
		}
	}
	arr[n]=arr[larIndex];
	arr[larIndex]=temp;
}

void ssort(int arr[], int l){
	for(int n=0;n<l;n++){
		swap_max(arr,l,n);
	}
}
#include<stdio.h>
#include<stdlib.h>


void merge(int a[], int low, int high, int mid);
void mergeSort(int a[], int low, int high);

void mergeSort(int a[], int low, int high){
	int mid;
	if(low<high){
		mid=(low+high)/2;
		mergeSort(a, low, mid);
		mergeSort(a, mid, high);
		merge(a, low, high, mid);
	}else{
		return;
	}
}	

void merge(int a[], int low, int high, int mid){
	int i,j,k, temp[50];
	i=low;
	j=mid+1;
	k=low;
	while((i<=mid) && (j<=high)){
		if(a[i]<a[j]){
			temp [k++]= a[i];
		}else
			temp[k++]=a[j];
	}
	while(i<=mid){
		temp[k++]=a[i];
	}
	while(j<=high){
		temp[k++]=a[j];
	}
	for(i=low; i<k; i++)
		a[i]= temp[i];

}

void main(){
	int a[20], i,n;
	scanf("%d", &n);

	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	mergeSort(a,0,n-1);
}
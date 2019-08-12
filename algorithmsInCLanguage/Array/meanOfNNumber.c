#include<stdio.h>

int main(){
	int i, n, sum=0, mean=0;
	printf("Enter number of input: \n");
	scanf("%d", &n);
	int arr[n];

	for(i=1; i<=n; i++){
		printf("Enter number:%d \n", i);
		scanf("%d",&arr[i]);
	}

	printf("\n");
	for (i=1; i<=n; i++){
		sum += arr[i] ;
	}
	mean = sum/n;
	// takecare	
	printf("Mean of %d number :%d\n",n,mean );
return mean;
}
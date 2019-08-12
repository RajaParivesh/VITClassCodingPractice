#include <stdio.h>

void main(){
	int n,i;
	printf("Enter number of input: \n ");
	scanf("%d", &n);
	int arr[n];
	for(i=1; i<=n; i++){
		printf("Enter number:%d \n", i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for (i=1; i<=n; i++){
		printf("%d\n", arr[i] );
	}
}
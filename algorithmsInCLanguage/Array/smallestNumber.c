#include<stdio.h>

void main(){
	int i, n, smallest;
	printf("Enter number of input \n");
	scanf("%d",&n);  // takecare & // we can't use \n in scanf
	int arr[n];

	for(i=1; i<=n; i++){
		printf("Enter a number%d\n: ", i);
		scanf("%d", &arr[i]);
	}
	smallest = arr[1];

	for(i=1; i<=n ; i++){

		if(smallest>arr[i]){
			smallest = arr[i];
		}
	}
	printf("The smallest number is: %d\n", smallest);
	

}
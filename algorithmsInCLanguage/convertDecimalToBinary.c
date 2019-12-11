#include<stdio.h>
#include<string.h>

void decToBinary(int n) 
{ 
	 
	int binaryNum[32]; 

	int i = 0; 

	while (n > 0) { 

		// storing remainder in binary array 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 

	// printing binary array in reverse order 
	for (int j = i - 1; j >= 0; j--) 
		printf("%d", binaryNum[j]); 
} 


// Driver program to test above function 
int main() 
{ 
	int n; 
	scanf("%d", &n);
	decToBinary(n); 
	printf("\n");
	return 0; 
} 

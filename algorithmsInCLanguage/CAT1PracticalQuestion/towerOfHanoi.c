// // Tower of hanoi
#include<stdio.h>

void towerOfHanoi(int n, char from_rod , char to_rod, char aux_rod){
	//where
	// n= no. of disk to be moved
	// from_rod = rod where the disk is present
	// to_rod  = rod where the disk to be moved
	// aux_rod = auxilary rod, the remaining rod

	//base case
	if(n==1){
		printf("\nMove disk %d from rod %c to rod %c", n, from_rod, to_rod );
		return;
	}
	//recursive case
	towerOfHanoi(n-1,from_rod, aux_rod, to_rod); 
	printf("\nMove disk %d from rod %c to rod %c", n, from_rod, to_rod);
	towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
} 

void main()
{	
	int n;
	printf("Input the no. of disk; \n");
	scanf("%d",&n);
	towerOfHanoi(n,'A', 'C','B');
}



// trick printf same both the time
// recursive call is in cyclic order i.e f,a,t  
//                                   i.e   a,t,f
#include<stdio.h>

void toh(int n, char f,char t,char a){
	//base case
	if(n==1){
		printf("\nMove dice %c to %c", f,t);
		return; // break;
	}
	// recursive case
	toh(n-1, f, a, t);
	printf("\nMove dice %c to %c", f,t);
	toh(n-1,a,t,f);
}
void main(){
	int n;
	printf("Input a value");
	scanf("%d", &n);
	toh(n, 'A', 'C', 'B');
}
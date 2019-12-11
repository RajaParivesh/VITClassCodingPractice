#include<stdlib.h>
#include<stdio.h>

int second=1;
int fib(int n){  //2
	if(n<=0){ 
		return 0;  //0 
	}else if(n==1){
		return 1;
	}else{
		second = fib(n-1)+ fib(n-2);
	}
}

void main(){
	int n;
	scanf("%d", &n);
	printf("%d ", fib(n));
}
		

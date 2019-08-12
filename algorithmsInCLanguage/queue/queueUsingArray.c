#include<stdio.h>
#include<stdlib.h>

int front = -1, rear = -1, i, n=10, x;
int queue[100];

void is_empty();
void is_full();
void enqueue(int data);
int dequeue();

void main(){

	int element, choice;

	for(;;){
	printf("1. To enqueue\n");
	printf("2. To dequeue\n");
	printf("3 To display\n");
	printf("4. To exit\n");

	scanf("%d", &i);
	}

	Switch(choice){
		case 1:
		if(is_full()){
			printf("Error: Overflow\n");
		}else{
			printf("Enter the value: \n");
			scanf("%d", &element)
			enqueue(element);
		}
		break;

		case 2: 
		if(is_empty()){
			printf("Error: Underflow\n");
		}else{
			element = dequeue();
			printf("element removed from the queue is %d\n", element);
		}
		break;
		
		case 3: 
		if(is_empty(){
			printf("Queue is empty");
		}else{
			traverse();
		}
		break;
		
		case 4:
		exit(0);



void is_empty(){
	if(rear == rear == -1){
		printf("Queue is empty\n");
	}
}

void is_full(){
	if(rear == n-1){
		printf("Queue is full\n");
	}
}

void enqueue(int data){
	if(!is_full){
		if (is_empty)
		{
			front = rear = 0;
		}
	}else{
		rear++;
		queue[rear] = data;  // front
	}
}

int dequeue(){
	if(!is_empty){
		x=queue[front];
		if (front == n-1)		
		{
			front =
		}
		front++;
		return x;
	}
}

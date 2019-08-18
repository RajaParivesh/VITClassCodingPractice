#include<stdio.h>
#include<stdlib.h>

int front = -1, rear = -1, i, n=10, x;
int queue[100];

int is_empty();
int is_full();
void enqueue(int data);
int dequeue();
void traverse();

void main (){

    int choice = 0;     
    printf("\n*********Queue operations using Array*********\n");  
    printf("\n----------------------------------------------\n");  
    
    while(choice != 4){  

        printf("\n\nChoose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        
        switch(choice){  

            case 1:  
            {   
                enqueue();  
                break;  
            }  
            case 2:  
            {  
                dequeue(); 
                break;  
            }  
            case 3:  
            {  
                traverse();
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
       }  
    }  
}  


int is_empty(){
	if(front == rear == -1){
		printf("Queue is empty\n");
		return 1;
	}else{
		return 0;
	}
}

int is_full(){
	if(rear == n-1){
		printf("Queue is full\n");
	return 1;
	}else{
		return 0;
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
		x = queue[front];
		if (front == n-1)		
		{
			front = rear = -1;   // takecare
		}else{
			front++;
		}
		return x;
	}
}

void traverse(){
	
    int i;
    printf("\nThe Modified Queue is: \n\n");
 
    for(i=0; i <= sizeof(queue); i++){
        printf("%d",queue[i]);
    }
}

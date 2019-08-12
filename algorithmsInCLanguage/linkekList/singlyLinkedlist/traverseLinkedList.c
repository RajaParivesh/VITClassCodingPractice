#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

void printlist(struct Node* n){
	while(n != NULL){
		printf("%d\n", n->data);
		n = n->next;
	}
}

int main(){
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;


head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));

printf("Input number: \n");
scanf("%d",&(head -> data));
head -> next = second;

printf("Input number: \n");
scanf("%d",&(second -> data));
second -> next = third;

printf("Input number: \n");
scanf("%d",&(third -> data));
third -> next = NULL;
printf("\n");
printlist(head);

return 0;
}
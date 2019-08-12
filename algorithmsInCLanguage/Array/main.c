#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
#include<conio.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void create()
{
    struct node *new_node, *ptr;
    int num,i,n;
    printf("Enter The Size:");
    scanf("%d",&n);
      for(i=1;i<=n;i++)
    {
        printf("\nEnter The Data:");
        scanf("%d",&num);
        //printf("%d", num);
        //printf("Creating new node");
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=num;
        if(head==NULL)
        {
            new_node->next=NULL;
            head=new_node;
            //printf("First node created");
        }
        else{
            ptr = head;
            while(ptr->next!=NULL)
            {
                ptr=ptr->next;
            }
                ptr->next=new_node;
                new_node->next=NULL;

               // printf("Next node created");
        }
    }
}
void insert_beg()
{
    struct node *new_node;
    int num, i;
    printf("\n Enter The Value:");
    scanf("%d",&num);
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=num;
    new_node->next=head;
    head=new_node;

}
void insert_end()
{
    struct node *new_node , *ptr;
    int num;
    printf("Enter the Node:");
    scanf("%d",&num);
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=num;
    ptr = head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    new_node->next=ptr->next;
    ptr->next=new_node;
}
void display()
{    printf("\nThis is Display Function");
     struct node *next, *ptr;
     ptr = head;
      if(head==NULL)
      {
          printf("\nLinked List Is Empty");
      }
     while(ptr!=NULL)
     {
         printf("\n%d",ptr->data);
         ptr=ptr->next;
     }
     printf("\n");
}

void main()
{
    int n;
    char a = 'y';
    while(a=='y'){
            printf("\n 1.Create the List");
            printf("\n 2. Insert At beginning");
            printf("\n 3. Insert At End");
            printf("\n 4. Display The list");
            printf("\n Enter The Choice:");
            scanf("%d",&n);
            switch(n)
            {
                case 1: create();
                        display();
                break;
                case 2: insert_beg();
                         display();
                break;
                case 3: insert_end();
                break;
                case 4: display();
                break;
                default: printf("Enter The Valid Options");
            }
            printf("\n Do you Want To Enter The More (y/n): ");
            scanf("%c",&a);
            if(a=='n')
            {
                exit(0);
            }
            fflush(stdin);
        }
    getch();
}



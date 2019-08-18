#include <stdio.h>
#include <stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

create()
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
insert_mid()
{
    struct node *head,*ptr;
    int accno,pno,val;
    char name[10];
    printf("Enter the Name:");
    scanf("%s",&name);
    printf("Enter The Account no");
    scanf("%d",&accno);
    printf("Enter The Phone number:");
    scanf("%d",&pno);
    ptr=head;
struct node  *new_node=(struct node *)malloc(sizeof(struct node));
    printf("Enter The Name where new node need to be inserted:");
    scanf("%d",&val);
    while(ptr->name!=val)
    {
        ptr=ptr->next;
        if(ptr!=NULL)
        {

            printf("Data Not Found");
            exit(0);
        }

    }
    new_node->accno=accno;
    strcpy(new_node->name, name);
    new_node->pno=pno;
    new_node->next=ptr->next;
    ptr->next=new_node;
    ptr=new_node;
}

insert_end()
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
display()
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
del_beg()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("List is Empty");
    }
    ptr=head;
    head=head->next;
    free(ptr);
}
del_mid()
{
    printf("Enter the value after which you want to delete the node:");
    scanf("%d",&val);
    while(preptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
}
del_end()
{
    struct node *ptr, *preptr;
    while(preptr->next!=NULL)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
}
void main()
{
    int n;
    char a = 'y';
    while(a=='y'){
            printf("\n 1.Create the List");
            printf("\n 2. Insert At beginning");
            printf("\n 3. Insert At middle Position");
            printf("\n 4. Insert At End");
            printf("\n 5. Display The list");
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
                case 3: insert_mid();
                        display();
                break;
                case 4: insert_end();
                        display();
                break;
                case 6: del_beg();
                break;
                case 7: del_mid();
                break;
                case 8: del_end();
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



#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *head, *prev;
    int data;
};
struct node *head;
insert_beg()
{
    printf("Enter The Data:");
    scnaf("%d",&num);
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=num;
    head->prev=new_node;
    new_node->next=head;
    return head;
}
insert_end()
{   struct node *ptr, *new_node;
    int num;
    printf("Enter the Data:");
    scanf("%d",num);
    head=ptr;
    new_node=(struct node *) malloc(sizeof(struct node));
    new_node->data=num;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=new_node;
    new_node->prev=ptr;
    new_node->next=NULL;

}
insert_mid()
{
    struct node *ptr, *new_node;
    int num;
    printf("Enter The Data:");
    scanf("%d",&num);
    new_node=(struct node *)malloc(sizeof(struct node));
    head=ptr;
    printf("Enter The Value after which the node has to be inserted:");
    scanf("%d",&val);
    while(temp->next!=val)
    {
        temp=temp->next;
    }
    new_node->data=num;
    new_node->next=ptr->next;
    ptr->next->prev=new_node;
    ptr->next=new_node->next;
    new_node->prev=ptr;

}

del_beg()
{
    struct node *ptr;
    head=ptr;
    ptr->prev=NULL;
    ptr=ptr->next;
    free(ptr);
}
del_mid()
{
    struct node *ptr;
    int val;
    printf("Enter The node which you want to delete:");
    scanf("%d",&val);
    ptr=head;
    while(ptr->data!=val && ptr->next==NULL)
    {
        ptr=ptr->next;
    }

    ptr->next->prev=ptr->prev;
    ptr->prev->next=ptr->next;
    free(ptr);
}
del_end()
{
    struct node *ptr;
    head=ptr;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;
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
            printf("\n 5. Delete The 1st Node");
            printf("\n 6. Delete The Middle Node");
            printf("\n &. Delete The End Node");
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
                case 5: del_beg();
                break;
                case 6: del_mid();
                break;
                case 7: del_end();
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

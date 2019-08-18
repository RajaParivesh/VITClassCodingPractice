//  circular linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next, * ;
};
struct node *head;
int insert_beg(int num)
{
    struct node *new_node;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=num;
    while(last->next!=head)
    {
        new_node->next=last->next;
        last->next=new_node;
    }
    return (last);
}
int insert_middle()
{
    struct node *new_node, *ptr;
    int num,val;
    printf("Enter The Data:");
    scanf("%d",&num);
    printf("Enter The Position after which you want to enter");
    scanf("%d",&val);
    ptr=head;
    new_node=(new_node *)malloc(sizeof(struct node));
    while(ptr->next!=val)
    {
        ptr=ptr->next;
    }
     new_node->next=ptr->next;
     ptr->next=new_node;
     ptr=new_node;
}
insert_end()
{
    struct node *new_node;
    int num;
    printf("Enter The Data:");
    scanf("%d",&num);
    ptr=head;
    new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=num;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
    }
    ptr->next=new_node;
    new_node->next=head;
    return head;
}
del_beg()
{
    struct node *ptr;
    if(head==NULL)
    {
        printf("\nList Is Empty");
    }
    head=ptr;
    last->next=ptr->next;
    free(head);
    head=ptr->next;
}
del_mid()
{
    struct node *ptr, *preptr;
    int val;
    printf("Enter The node after which the data has to be deleted:");
    scanf("%d",&val);
    ptr=head;
    while(ptr->data!=val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    free(ptr);
del_end()
    {
        struct node *ptr, *preptr;
        if(head==NULL)
        {
            printf("\nList is empty");
        }
        ptr=head;
        while(ptr->next!=head)
        {
            preptr=ptr;
            ptr=ptr->next
        }
        preptr->next=ptr->next;
        free(ptr);
    }

}
void main()
{{
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

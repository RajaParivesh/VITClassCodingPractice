struct stack
{
	int top;
	int data[100];
}s1;
bool isEmpty();
bool isFull();

int main()
{
    //clrscr();
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                 
        }
    }
    while(choice!=4);
    return 0;
}


bool isEmpty(top == -1)
{
	printf("Stack is Empty! \n");
	return true;
}
bool isFull(top == n-1)
{
	printf("Stack is Full! \n");
	return true;
}
int pop(){
	if(!isEmpty()){
		int x = top;
		top = top-1;
		return x;
	}
}
void push(){
	int y;
	scanf("\n%d", &y);
	if(!isFull){
		top = top+1;
		data[top]= y;
	}
}


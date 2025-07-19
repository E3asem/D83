#include <stdio.h>
#include "stack.h"

#define max   8

int stack[max];
int top = -1;

char stack_isFull(void)
{
	if(top == max-1 )
		return 1; // is full
	else
		return 0; // not full
	
}
char stack_isEmpty(void)
{
    if(top == -1 )
    	return 1; // is empty
    else
    	return 0; // not empty
	
}
void stack_push(int element)
{
	//if( stack_isFull() == 0)
	if( !stack_isFull())
	{
		//top++;
		stack[++top]=element;
	}
	else
	{
		printf("\n**STACK OVER_FLOW**\n");
	}
	
}
void stack_pop(void)
{
	//if( stack_isEmpty() == 0)
	if( !stack_isEmpty())
	{
	    top--;
	}
	else
	{
		printf("\n**STACK UNDER_FLOW**\n");
	}
	
}
void stack_display(void)
{
int i=0;	
	if( !stack_isEmpty())
	{
		printf("your stack : ");
		for(i = top ; i > -1 ; i--)
			printf("%d \t",stack[i]);
		printf("\n");

	}
	else
	{
		printf("\n**STACK UNDER_FLOW**\n");
	}
	
	
}




void STACK_APP(void)
{
	
	
int choice,element;

while(1){
printf("\
1-push\n\
2-pop\n\
3-isEmpty\n\
4-isFull\n\
5-Display\n\
6-exit\n -->");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	printf ("-Enter element: \n -->");
	scanf("%d",&element);
	stack_push(element);
	break;
	case 2:
	stack_pop();
	break;
	case 3:
	if(stack_isEmpty())
		printf("***stack is empty***\n");
	else
		printf("***stack not empty***\n");

	break;
		case 4:
			if(stack_isFull())
		printf("***stack is full***\n");
	else
		printf("***stack not full***\n");
	break;
	case 5:
	stack_display();
	break;
	case 6:
	return;
    default:	printf ("-Try again\n "); break;
    }

}
	
}
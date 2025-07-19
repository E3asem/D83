#include <stdio.h>
#include "queue.h"

#define max   8
int queue[max];
int front=-1,rear=-1;


char queue_isFull(void)
{
	if(rear==max-1)
		return 1;
	else 
		return 0;
}
char queue_isEmpty(void)
{
	if(front == -1 || front > rear )
		return 1;
	else 
		return 0;
}
void queue_enqueue(int element)
{
	if(!queue_isFull())
	{
		if(front == -1)
			front++;
		rear++;
	    queue[rear]=element;
	}
	else
	{
		printf("\n**queue is full**\n");
	}
	
}
void queue_dequeue(void)
{
	if(!queue_isEmpty())
		front++;
	else
		printf("\n**queue is empty**\n");
}
void queue_display(void)
{
int i=0;	
	if( !queue_isEmpty())
	{
		printf("your queue : ");
		for(i = front ; i <= rear ; i++)
			printf("%d \t",queue[i]);
		printf("\n");

	}
	else
	{
		printf("\n**Queue is empty**\n");
	}
	
}
void QUEUE_APP(void)
{
	
	
	
int choice,element;

while(1){
printf("\
1-enqueue\n\
2-dequeue\n\
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
	queue_enqueue(element);
	break;
	case 2:
	queue_dequeue();
	break;
	case 3:
	if(queue_isEmpty())
		printf("***queue is empty***\n");
	else
		printf("***queue not empty***\n");

	break;
		case 4:
			if(queue_isFull())
		printf("***queue is full***\n");
	else
		printf("***queue not full***\n");
	break;
	case 5:
	queue_display();
	break;
	case 6:
	return;
    default:	printf ("-Try again\n "); break;
    }

}
	
	
	
}
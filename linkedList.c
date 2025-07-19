#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


myNode * head=NULL;


void createNode(int id, float salary)
{

 myNode * temp=head;

 
 myNode * newNode = (myNode*)malloc(sizeof(myNode));
 newNode->id=id;
 newNode->salary=salary;
 newNode->next=NULL;
 if(head == NULL)
	 head=newNode;
 else
 {
	 while(temp->next != NULL)
	 {
		 temp=temp->next;
	 }
	 temp->next=newNode;
 
 }
 
 
}
void displayNode(void)
{
 myNode * temp=head;
	 while(temp != NULL)
 {
	 printf(" Node : ID = %d  SALARY = %f \n",temp->id,temp->salary);
	 temp=temp->next;
 }
}
void searchNode(int id)
{
  myNode * temp=head;
	while(temp != NULL)
 {
if(temp->id == id)
{
		 printf(" SALARY = %f \n",temp->salary);
		 return;
}
	 temp=temp->next;
 }
 printf("**** your id not found ****\n");
	
}
void editNode(int id)
{
	 myNode * temp=head;
	while(temp != NULL)
 {
if(temp->id == id)
{
	
		 printf(" Enter the new SALARY : ");
		 scanf("%f",&temp->salary);
		 return;
}
	 temp=temp->next;
 }
 printf("**** your id not found ****\n");
	
}
void deleteNode(int id)
{
	myNode* curr=head;
	myNode* prev=head;

	while(curr != NULL)
 {
            if(curr->id == id)
            {
				if(curr == prev)
				{
					head=curr->next;
					free(curr);
					return;
				}
				else
				{
					prev->next=curr->next;
					return;
				}
				
				
            }
			
		 prev=curr;
	     curr=curr->next;
 }
 printf("**** your id not found ****\n");
	
	
}


void LINKED_LIST_APP(void)
{
	
	
int choice,id;
float salary;
while(1){
printf("\
1-create Node\n\
2-search Node\n\
3-edit Node\n\
4-delete Node\n\
5-Display\n\
6-exit\n -->");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	printf ("-Enter ID: \n -->");
	scanf("%d",&id);
	printf ("-Enter salary: \n -->");
	scanf("%f",&salary);
	createNode(id,salary);
	break;
	case 2:
	printf ("-Enter ID: \n -->");
	scanf("%d",&id);
	searchNode(id);
	break;
	case 3:
		printf ("-Enter ID: \n -->");
	scanf("%d",&id);
	editNode(id);
	break;
		case 4:
		printf ("-Enter ID: \n --> ");
	scanf("%d",&id);
	deleteNode(id);
	break;
	case 5:
	displayNode();
	break;
	case 6:
	return;
default:	printf ("-Try again\n "); break;
}

}
	
}
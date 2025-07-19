#ifndef LINKED_LIST_HEADER
#define LINKED_LIST_HEADER

typedef struct node
{
	int id;
	float salary;
	struct node * next;
	
}myNode;


void createNode(int id, float salary);
void displayNode(void);
void searchNode(int id);
void editNode(int id);
void deleteNode(int id);
void LINKED_LIST_APP(void);

#endif
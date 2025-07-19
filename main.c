#include <stdio.h>
//version2

#define linked_list 0
#define stack       1
#define queue       0

#if queue == 1

#include"queue.h"


int main ()
{ 
QUEUE_APP();

	return 0;
}
#elif stack == 1

#include "stack.h"

int main ()
{ 
STACK_APP();
	return 0;
}
#elif linked_list == 1
#include "linkedList.h"


int main ()
{ 

LINKED_LIST_APP();

	return 0;
}
#else
	#error "please set the code number"
#endif

 

#include <stdio.h>
#include <stdlib.h>

//define our node
typedef struct node
{
	//item value
	int value{}; // 4 bytes x 25 = 100 bytes

	//the next node that is connected
	struct node *next;
};

//Save us some typing
typedef struct node node_t;

//print out our nodes
void printList(node_t *head)
{
	node_t *tempPtr = head;

	while (tempPtr != NULL)
	{
		//display the value of each node - starting from the head
		printf("{%d} ->", tempPtr->value);
		//
		tempPtr = tempPtr->next;
	}
	printf("/n");
}

int main()
{

	//instantiate our 3 nodes and our head node
	node_t node1, node2, node3;
	node_t node4, node5;
	node_t *list_head;

	//Assign their values
	node1.value = 23;
	node2.value = 44;
	node3.value = 14;

	//adding two new nodes
	node4.value = 4;
	node5.value = 5;

	//link up all the nodes
	list_head = &node1;
	node1.next = &node2;
	node2.next = &node3;
	node3.next = &node4;
	node4.next = &node5;
	node5.next = NULL; //tail - NULL indicates where to stop

	//Display it
	printList(list_head);

	return 0;
}
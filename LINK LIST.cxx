#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
//structure for node of data and address

int main()
{
	int choice;
	struct node *newnode, *temp, *head;
	//head for store first node address
	//newnode for storing new generated address
	//temp for traversing the list
	while (choice == 0)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		printf("enter datafor node ");
		scanf("%d", &newnode->data);

		head = 0;
		if (head == 0)
		{
			head = temp = newnode;
 //same address in both
		}
		else
		{
			temp->next = newnode; 
//address storing in next part of temp variable
			temp = newnode;		 
 //storing address of newnode as value in temp
		}
		newnode->next = 0;
		printf("do u want to continue");
		scanf("%d", &choice);
	}
	temp = head;
	while (temp = 0)
	{
		printf("%d", temp->next);
		temp = temp->next;
	}
	return 0;
}

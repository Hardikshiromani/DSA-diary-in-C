#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct  node*next;
	struct node*prev;
}*head,*temp;

void create(){
	struct node *newnode;
	
	
	for(int i=0; i<3; i++){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter values for node");
	scanf("%d",&newnode->data);
	if(head==NULL){
head=temp=newnode;
	}
	else {
		temp->next=newnode;
		newnode->prev=temp;
		temp=newnode;
	}
	}
}
	
int main(){
	create();
	return 0;
}
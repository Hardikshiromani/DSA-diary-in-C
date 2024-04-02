#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
void insertat_end(){
	int a;
	node *head=0,*temp,*newnode;
	for(a=0; a<5; a++){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter values");
	scanf("%d",&newnode->data);}
	
	if(head==0){
	head=newnode;
	}
	else{
		temp=head;
	while(temp->next!=0){
		temp=temp->next;

	}
			temp->next=newnode;
	}
	
}
void insertbegin(){
	int a,ch;
	node *head,*newnode;
	do{
	newnode=(struct node*)malloc(sizeof(struct node*));
	printf("Enter values ");
	scanf("%d",&newnode->data );
	}
	while(newnode->data<=5);
};
int main(){
//	insertbegin();
	insertat_end();
	return 0;
};
	
	
	

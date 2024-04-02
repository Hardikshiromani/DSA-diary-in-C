#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
	};
	struct node*front=0;
		struct node*rear=0;
		
void enqueue(int d){
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=d;
	newnode->next=0;
	if(rear==0){
		front=rear=newnode;
		newnode->next=rear;
		}
		else{
			rear->next=newnode;
			rear=newnode;
	rear->next=front;
			}
			}
			
void dequeue(){
	struct node *temp=front;
	if(front==0&&rear==0){
		printf("Empty stack");
		}
		else if(front==rear){
			front=front->next;
			front=rear=0;
			free(temp);
			}
		else{
	front=front->next;
	rear->next=front;
	free(temp);
	}
}
void display(){
 struct node*temp=front;
if(front==rear){
printf("Empty stack");
}
else{
while(temp->next!=front){
  printf("Elements :%d\n",temp->data);
temp=temp->next;
}
printf("Elements:%d\n",temp->data);
}
}
void peek(){
	if(front==rear){
printf("Empty stack");
}
else{
	printf("Top is %d\n",front->data);
	}
	}
	int main(){
	enqueue(4);
	enqueue(13);
	enqueue(45);
	enqueue(10);
	enqueue(89);
	enqueue(540);
//	dequeue();
	display();
	peek();
				return 0;
				}
			
	
	
	
	
	
	
	
	
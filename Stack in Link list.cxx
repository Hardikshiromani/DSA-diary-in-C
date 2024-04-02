#include<stdio.h>
#include <stdlib.h>
#define Max 5;

struct node{
   int data;
   struct node*next;
};
struct node *top=0;
void push(int d){
 struct node*newnode;
  
    newnode=(struct node*) malloc(sizeof(struct node)) ;
    newnode->data=d;
    newnode->next=top;
    top=newnode;
    printf("pushed sucess: %d\n",d) ;
    
}
void display () {
 struct node *temp;
 temp=top;
 while(temp!=0){
  printf("Element : %d\n",temp->data);
  temp=temp->next;
 }
}
void pop(){
	struct node *temp=top;
	if(top==0){
		printf("Empty stack");
	}
	else{
		printf("Element freed : %d\n",temp->data);
		top=temp->next;
	free(temp);
	}
	
}
void peek(){
	if(top==0){
		printf("Empty stack");
	}
	else{
		printf("Tol element is :%d",top->data);
	}
}
int main() {
    push(43);
    push(52);
    push(45);
    push(12);
    pop();
    display();
    return 0;
    }
    
 
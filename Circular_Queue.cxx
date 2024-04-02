#include <stdio.h>
#define N 5
int queue[5];
int front =-1;
int rear=-1;
void enqueue(int d){
	if(front==-1&&rear==-1){
		front=rear=0;
		printf("added to queue :%d\n",d);
		queue[rear]=d;
	}
	else if((rear+1)%N==front){
		printf("Queue is full");
	}
	else{
		rear=rear+1%N;
		printf("added to queue :%d\n",d);
		queue[rear]=d;
	}
}
void dequeue(){
	if(front==-1){
		printf("Empty Queue");
	}
	else if(front==rear){
		printf("Itm deleted :%d\n",queue[front]);
		front=rear=-1;
	}
	else{
		printf("Item deleted : %d\n",queue[front]);
		front=front+1%N;
		
	}
	
}
void display(){
	int i=front;
	if(front==rear){
		printf("Empty");
	}
	else{
		while(i !=rear){
			printf("Elements ->%d\n",queue[i]);
			i=(i+1)%N;
		}
		printf("Elements ->%d\n",queue[rear]);
	}			
}

int main (){
 enqueue(4);
 enqueue(5);
  enqueue(15);
   enqueue(6);
  dequeue();
  enqueue(10);
 display();
 return 0;
 }





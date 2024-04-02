#include <stdio.h>
#define N 5
int deque[N];
int front = -1;
int rear = -1;
void insatfront(int d)
{
	if ((front == 0 && rear == N - 1) || (front == rear + 1))
	{
		printf("Queue is full");
	}
	else if (front == -1 && rear == -1)
	{
		front = rear = 0;
		deque[front] = d;
	}
	else if (front == 0)
	{
		front = N - 1;
		deque[front] = d;
	}
	else
	{
		front--;
		deque[front] = d;
		
	}
}
void insatrear(int d)
{
	if ((front == 0 && rear == N - 1) || (front == rear + 1))
	{
		printf("Queue is full");
	}
	else if (front == -1 && rear == -1)
	{
		front = rear = 0;
		deque[rear] = d;
	}
	else if (rear == N - 1)
	{
		rear++;
		deque[rear] = d;
	}
	else
	
	{ rear++;
		deque[rear] = d;
	
	}
}
void display()
{
		int i = front;
	if (front == -1 && rear == -1)
	{
		printf("Queue is empty\n");
		return;
	}

	while (i != rear)
	{
			printf("%d\n", deque[i]);
		i = (i + 1) % N;
	}
	printf("%d\n", deque[rear]);
}
void dequefront(){
		if (front == -1 && rear == -1)
	{
		printf("Queue is empty\n");
		return;
	}
	else if(front==rear){
		front=rear=-1;
	}
	else if(front==N-1){
			printf("deleted :%d\n",deque[front]);
		front=0;
		
	}
	else {
			printf("deleted :%d\n",deque[front]);
	front++;

	}
}
void dequerear(){
			if (front == -1 && rear == -1)
	{
		printf("Queue is empty\n");
		return;
	}
	else if(front==rear){
		front=rear=-1;
	}
	else if(rear==0){
		printf("deleted :%d\n",deque[rear]);
	}
	else {
		printf("deleted :%d\n",deque[rear]);
		rear--;
	}
		
	
	
}
/*void display() {
  
    int i = front;
    do {
        printf("Element: %d\n", deque[i]);
        i = (i + 1) % N;
    } while (i != (rear + 1) % N);
}*/
int main()
{
	insatfront(11);
	insatfront(12);
    insatrear(14);
    insatrear(346);
    insatrear(78);
    insatrear(20);
   dequefront();
   dequerear();
   dequerear();
     dequefront();
        dequerear();
	display();

	return 0;
}
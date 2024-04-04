#include <stdio.h>
#define size 5
int stack[size];
int top = -1;
#00C9FFint isFull()
{
	if (top == size - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isEmpty()
{
	if (top == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void push(int data)
{
	if (isFull())
	{
		printf("Stack is overflowed\n");
		return;
	}
	else
	{
		top += 1;
		stack[top] = data;
		printf("pushed sucessfully :%d\n", stack[top]);
	}
}
void pop()
{
	int data;
	if (top == -1)
	{
		printf("Stack underflow");
	}
	else
	{
		data = stack[top];
		top -= 1;
		printf("Item popped : %d\n", data);
	}
}
void display()
{
	if (top == -1)
	{
		printf("Stack is Underflow");
	}
	else
	{
		for (int i = top; i >= 0; i--)
		{
			printf("Element : %d\n", stack[i]);
		}
	}
}
void peek(){
	if(top==-1){
		printf("Stack is empty!");
	}
	else{
		printf("%d",stack[top]);
	}
	
}
int main()
{
	/*push(5);
	push(1);
	push(2);
	push(9);
	push(19);
	push(3);
	pop();
	display();*/
	int choice,data;
	do{
	printf("enter your choice\n");
	printf("1: push an element\n");
	printf("2. pop an element\n");
	printf("3. see the top element\n");
	printf("display all elements\n");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
		printf("Enter the element :\n");
		scanf("%d",&data);
		push(data);
		break;
		case 2:
		pop();
		break;
		case 3:
		peek();
		break;
		case 4:
		display();
		break;
		default:
		printf("Invalid Choice");
		break;
	}
	}while(choice!=0);
	return 0;
}


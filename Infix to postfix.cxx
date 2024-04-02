#include <stdio.h>
#include <string.h>
#define MAX 50
int top = -1;
char infix[MAX], postfix[MAX];
char stack[MAX];
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
int precedence(char sign)
{
	switch (sign)
	{
	case '^':
		return 3;
	case '/':
	case '*':
		return 2;
	case '-':
	case '+':
		return 1;
	default:
		return 0;
	}
}

void push(char data)
{
	if (top == MAX - 1)
	{
		printf("Stack is overflow");
	}
/*	else
	{
		stack[top++] = data;
	}*/
	else {
	       top++;
        stack[top] = data; // Fixed to push onto the stack instead of postfix array
    }
}
char pop()
{
	char c;

	if (top == -1)
	{
		printf("Stack is Underflow ");
		return '\0';
	}
	else
	{
		c=stack[top];
		top=top-1;
		return c;
		
	}
}

void intopost()
{
	int j = 0;
	int symbol, next;
	for (int i = 0; i < strlen(infix); i++)
	{
		symbol = infix[i];
		switch (symbol)
		{
		case '(':
			push(symbol);
			break;
		case ')':
			while ((next = pop()) != '('){
				postfix[j++] = next;
			}
			break;
		case '+':
		case '-':
		case '*':
		case '/':
	/*		while (!isEmpty() && precedence(stack[top]) >= precedence(symbol))*/
			while (!isEmpty() && precedence(stack[top]) >= precedence(symbol)) 
			{
				postfix[j++] = pop();
			}
				push(symbol);
				break;
		default:
			postfix[j++] = symbol;
			break;
		}
	}

	while (!isEmpty())
	{
		postfix[j++] = pop();
	}
		postfix[j] = '\0';
}

int main()
{
	printf("Enter a Infix expression for postfix Conversion :\n");
	gets(infix);
	intopost();
	printf("%s\n", postfix);
	return 0;
}

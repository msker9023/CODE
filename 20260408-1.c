#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
//栈
typedef int Elemtype;
typedef struct
{
	Elemtype data[MAXSIZE];
	int top;
}Stack;
Stack* initStack()
{
	Stack* s = (Stack*)malloc(sizeof(Stack));
	s->top = -1;
	return s;
}
int push(Stack* s, Elemtype e)
{
	if (s->top >= MAXSIZE - 1)
	{
		printf("满了");
		return 0;
	}
	s->top++;
	s->data[s->top] = e;
	return 1;
}
Elemtype pop(Stack* s, Elemtype* e)
{
	if (s->top == -1)
	{
		printf("空的\n");
		return 0;
	}
	*e = s->data[s->top];
	s->top--;
	return 1;
}
int getTop(Stack* s, Elemtype* e)
{
	if (s->data[s->top] == NULL)
	{
		printf("空的\n");
		return 0;
	}
	*e = s->data[s->top];
	return 1;
}
void listStack(Stack* s)
{
	for (int i = 0; i <= s->top; i++)
	{
		printf("%d\n", s->data[i]);
	}
}
int main()
{
	Stack* s=initStack();
	Elemtype e;
	push(s, 1);
	push(s, 2);
	push(s, 3);
	getTop(s, &e);
	printf("%d\n", e);
	listStack(s);
	return 0;
}
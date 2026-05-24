#include<stdio.h>
#include<string.h>
#define MAXSIZE 10000
typedef struct Stack
{
	char stack[MAXSIZE];
	int top;
}Stack;
void initStack(Stack* p)
{
	p->top = -1;
}
void judge(Stack* p, char* q)
{
	int count = 0;
	int i = -1;
	while (q[i+1] != '\n')
	{
		if (p->top>=2)
		{
			if (p->stack[p->top] == '2' && p->stack[p->top - 1] == '0' && p->stack[p->top - 2] == '2')
			{
				if (q[i + 1] == '6')
				{
					count++;
					i++;
					p->top -= 3;
					continue;
				}
				else if (q[i + 1] == '2' && q[i + 2] == '0' && q[i + 3] == '2')
				{
					i += 3;
					p->top -= 3;
					count++;
					continue;
				}
			}
		}
		if (q[i+1] == '2' || q[i+1] == '0' || q[i+1] == '6')
		{
			p->stack[++p->top] = q[++i];
			continue;
		}
	}
	printf("%d", count);
}
int main()
{
	Stack p;
	initStack(&p);
	char arr[MAXSIZE];
	fgets(arr, MAXSIZE, stdin);
	judge(&p, arr);
	
	return 0;
}
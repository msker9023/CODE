#include <stdio.h>
#include<string.h>
#define MAXSIZE 10000000
typedef int ElemType;
typedef struct
{
    ElemType data[MAXSIZE];
    int top
}Stack;
void initStack(Stack* s)
{
    s->top = 0;
}
void push(Stack* s, ElemType a)
{
    s->data[s->top] = a;
    s->top++;
}
void pop(Stack* s)
{
    if (s->top == 0)
    {
        printf("Empty\n");
    }
    else
    {
        s->top--;
    }
}
void query(Stack* s)
{
    if (s->top == 0)
    {
        printf("Empty\n");
    }
    else
    {
        printf("%d\n", s->data[s->top - 1]);
    }
}
void size(Stack* s)
{
    printf("%d\n", s->top);
}
int main()
{
    Stack s;
    initStack(&s);
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char arr[10];
        scanf("%s", arr);
        if (!strcmp(arr, "push"))
        {
            int j;
            scanf("%d", &j);
            push(&s, j);
        }
        else if (!strcmp(arr, "pop"))
        {
            pop(&s);
        }
        else if (!strcmp(arr, "query"))
        {
            query(&s);
        }
        else if (!strcmp(arr, "size"))
        {
            size(&s);
        }
    }
    return 0;
}
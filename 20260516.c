#include<stdio.h>
#include<string.h>
#define MAXSIZE 10000
int main()
{
    char stack[MAXSIZE];
    char str[MAXSIZE];
    int top = -1;
    fgets(str, MAXSIZE, stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    for (int n = 0; n < len; n++)
    {
        if (top == -1)
        {
            stack[++top] = str[n];
            if (stack[top] == ']' || stack[top] == '}' || stack[top] == ')')
            {
                printf("false\n");
                return 0;
            }
        }
        else if (top >= 0)
        {

            if (str[n] == ')' && stack[top] == '(')
            {
                top--;
                continue;
            }
            else if (str[n] == ']' && stack[top] == '[')
            {
                top--;
                continue;
            }
            else if (str[n] == '}' && stack[top] == '{')
            {
                top--;
                continue;
            }
            else if (str[n] == '(' || str[n] == '[' || str[n] == '{')
            {
                stack[++top] = str[n];
            }
            else
            {
                printf("false\n");
                return 0;
            }
        }
    }
    printf("true\n");
    return 0;
}
#include <stdio.h>
#include<string.h>
#define MAXSIZE 10000
int main()
{
    int quene[MAXSIZE];
    int front = 0;
    int rear = 0;
    int n = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        scanf("%d", &j);
        if (j == 1)
        {
            int tmp;
            scanf("%d", &tmp);
            quene[rear++] = tmp;
        }
        else if (j == 2)
        {
            if (rear != front)
            {
                front++;
            }
            else
            {
                printf("ERR_CANNOT_POP\n");
            }
        }
        else if (j == 3)
        {
            if (rear != front)
            {
                printf("%d\n", quene[front]);
            }
            else
            {
                printf("ERR_CANNOT_QUERY\n");
            }
        }
        else if (j == 4)
        {
            int len = rear - front;
            printf("%d\n", len);
        }
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node* next;
}Node;
Node* creatNode(int file)
{
    Node* p = NULL;
    p = (Node*)malloc(sizeof(Node));
    p->data = file;
    p->next = NULL;
    return p;
}
Node* initheadNode(int file)
{
    Node* p = (Node*)malloc(sizeof(Node));
    p->data = file;
    p->next = NULL;
    return p;
}
int main()
{

    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Node* head = initheadNode(arr[0]);
    Node* current = head;
    for (int i = 1; i < n; i++)
    {
        Node* p = creatNode(arr[i]);
        current->next = p;
        current = p;
    }
    current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    free(arr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;
Node* creatNode(int file)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = file;
    newNode->next = NULL;
    return newNode;
}
Node* initNode(int file)
{
    Node* headNode = (Node*)malloc(sizeof(Node));
    headNode->data = file;
    headNode->next = NULL;
    return headNode;
}
void Exchange(Node** head)
{
    Node* first = (*head)->next;
    Node* last = *head;

    last->next = first->next;
    first->next = last;
    *head = first;
    last = *head;
    first = first->next;
    while (first->next != NULL)
    {
        first = first->next;
        last = last->next;
    }
    int tmp = last->data;
    last->data = first->data;
    first->data = tmp;

}
void print(Node* p)
{
    Node* current = p;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
}
int main()
{

    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Node* head = initNode(arr[0]);
    Node* current = head;
    for (int i = 1; i < n; i++)
    {
        Node* newNode = creatNode(arr[i]);
        current->next = newNode;
        current = newNode;
    }
    Exchange(&head);
    print(head);
    free(arr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;
Node* creatNode(int file)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = file;
    newNode->next = NULL;
    return newNode;
}
Node* initNode(int file)
{
    Node* headNode = (Node*)malloc(sizeof(Node));
    headNode->data = file;
    headNode->next = NULL;
    return headNode;
}
Node* delete(Node* head, int tag)
{
    while (head != NULL && head->data == tag)
    {
        Node* tmp = head;
        head = head->next;
        free(tmp);
    }
    Node* p = head;
    while (p->next != NULL)
    {
        if (p->next->data == tag)
        {
            Node* tmp = p->next;
            p->next = tmp->next;
            free(tmp);
        }
        else
        {
            p = p->next;
        }
    }
    return head;
}
void print(Node* p)
{
    Node* head = p;
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}
int main() {

    int n, x;
    scanf("%d%d", &n, &x);

    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    Node* head = initNode(arr[0]);
    Node* current = head;
    for (int i = 1; i < n; i++)
    {
        Node* newNode = creatNode(arr[i]);
        current->next = newNode;
        current = newNode;
    }
    head = delete(head, x);
    print(head);

    free(arr);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// write your code here......
typedef struct Node
{
    int data;
    struct Node* next;
}Node;
Node* creatNode(int file)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = file;
    newNode->next = NULL;
    return newNode;
}
Node* initNode(int file)
{
    Node* headNode = (Node*)malloc(sizeof(Node));
    headNode->data = file;
    headNode->next = NULL;
    return headNode;
}
void Add(Node* head, int pos)
{
    Node* p = head;
    for (int i = 0; i < pos - 1; i++)
    {
        p = p->next;
    }
    Node* q = creatNode(pos);
    q->next = p->next;
    p->next = q;
}
void print(Node* p)
{
    Node* head = p;
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}
int main()
{

    int n, idx;
    scanf("%d%d", &n, &idx);

    int* arr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    Node* head = initNode(arr[0]);
    Node* current = head;
    for (int i = 1; i < n; i++)
    {
        Node* newNode = creatNode(arr[i]);
        current->next = newNode;
        current = newNode;
    }
    Add(head, idx);
    print(head);

    free(arr);
    return 0;
}
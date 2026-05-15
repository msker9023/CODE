#include <stdio.h>
#include<string.h>
#define MAXSIZE 10000
void filter(char* str1, char* str2)
{
    int len = strlen(str2);
    int top = -1;
    for (int n = 0; n < len; n++)
    {
        if (top == -1)
        {
            str1[++top] = str2[n];
            continue;
        }
        else if (top >= 0 && str2[n] == 'o' && str1[top] == 'o')
        {
            str1[top] = 'O';
            if (top >= 1 && str1[top - 1] == 'O')
                top -= 2;
        }
        else if (top >= 0 && str2[n] == 'O' && str1[top] == 'O')
        {
            top--;
        }
        else
        {
            str1[++top] = str2[n];
        }
    }
    str1[top + 1] = '\0';
    printf("%s", str1);
}
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    for (int m = 0; m < n; m++)
    {
        char stack[MAXSIZE];
        char str[MAXSIZE];
        fgets(str, MAXSIZE, stdin);
        filter(stack, str);
    }

    return 0;
}
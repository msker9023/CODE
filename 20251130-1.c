#include<stdio.h>
int main()
{
    // int ch = getchar();
    // printf("%c\n",ch);
    // putchar(ch);
//     int ch = 0;
//     while((ch = getchar())!=EOF)
//     {
//         putchar(ch);
//     }
//     return 0;
//     char password[20]={0};
//     scanf("%s",password);
//     int ch = 0;
//     while((ch =getchar()) !='\n')
//     {
//         ;
//     }
//     int ret = getchar();
//     if (ret == 'Y')
//         printf("yes");
//     else
//         printf("no");
//     return 0;
    char ch = '\0';
    while ((ch=getchar())!=EOF)
    {
        if (ch<'0'||ch>'9')
            continue;
        putchar(ch);
        
    }
    return 0;
}
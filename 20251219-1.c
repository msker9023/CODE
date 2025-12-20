#include<stdio.h>
// void print(unsigned int i)
// {
//     if(i>9)
//     {
//         print(i/10);
//     }
//     printf("%d",i%10);
// }
// int main()
// {
//     unsigned int i=0;
//     scanf("%d",&i);
//     print(i);
//     return 0;
// }
// int my_strlen(char arr[])
// {
//     int length=0;
//     while(arr[length]!='\0')
//     {
//         length+=1;
//     }
//     return length;
// }
// int my_strlen(char* str)
// {
//     static int length=0;
//     if(*str !='\0')
//     {
//         length+=1;
//         str+=1;
//         my_strlen(str);
//     }
//     return length;
// }
int my_strlen(char* str)
{
    if(*str !='\0')
    {
        str+=1;
        return 1+my_strlen(str);
    }
    else 
        return 0;
}
int main()
{
    char arr[100]={0};
    int i=0;
    while((arr[i]=getchar())!='\n')
    {
        i+=1;
    }
    arr[i]='\0';
    int len=my_strlen(arr);
    printf("%d",len);
    return 0;
}
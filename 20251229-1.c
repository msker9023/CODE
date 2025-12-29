#include<stdio.h>
// int main()
// {
    //指针类型决定指针在被解引用时访问几个字节,决定了指针的步长,
    // int a=0;
    // int* pa=&a;
    // printf("%p",pa);
    // int *p;
    // *p=10;
    // 野指针
    // printf("%p",*p);
    // int a=0;
    // int *p=NULL;
    //p代表a的地址
    //*p表示对p解引用,访问p指向的内存空间
    //%p用来打印地址,
    // p=&a;
    // printf("%p",p);
    // int arr[10]={0};
    // int* p=arr;
    // int sz=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<sz;i+=1)
    // {
    //     *p=i;
    //     printf("%d",*p);
    //     p+=1;
    //     *(p+i)=i;
    //     printf("%d",*(p+i));
    // }
//     return 0;
// }
// int my_strlen(char* str)
// {
//     int count=0;
//     while(*str !='\0')
//     {
//         count+=1;
//         str+=1;
//     }
//     return count;
// }
//递归
// int my_strlen(char* str)
// {
//     static int count=0;
//     if(*(str+count) != '\0')
//     {
//         count+=1;
//         return 1 + my_strlen("abcdef");
//     }
//     else
//         return 0;
// }
//指针-指针
int my_strlen(char * str)
{
    char * start=str;
    while(*str !='\0')
    {
        str++;
    }
    return str-start;
}
int main()
{
    int len=my_strlen("abcedf");
    printf("%d",len);
    return 0;
}
#include<stdio.h>
// int main()
// {
//     int a=1;
//     int b=3;
//     b=++a;
//     printf("%d %d",a,b);
//     return 0;
// }
// int main()
// {
//     int arr[10]={0};
//     int a=10;
//     int b=20;
//     int c=30;
//     int* pa=&a;
//     int* pb=&b;
//     int* pc=&c;
//     //二级指针存放指针向量的地址
//     int** ppa=&pa;
//     //int*说明ppa指向的对象是指针int*类型
//     int* parr[10]={&a,&b,&c,};
//     for(int i=0;i<3;i+=1)
//     {
//         printf("%d ",*(parr[i]));
//     }
//     //printf("%p  %p  %p\n",(arr+2),pa,&a);
//     return 0;
// }
int main()
{
    int arr1[4]={0};
    int arr2[4]={0};
    int arr3[4]={0};
    int *parr[3]={arr1,arr2,arr3};
    for(int i=0;i<3;i+=1)
    {
        for(int j=0;j<4;j+=1)
        {
            printf("%d ",parr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
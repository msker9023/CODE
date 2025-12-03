#include<stdio.h>
// void bubble_sort(int arr1[],int sz)
// {
//     for (int i=0;i<sz;i+=1)
//     {
//         for(int j=0;j<sz-1-i;j+=1)
//         {
//             if(arr1[j]>arr1[j+1])
//             {
//                 int tmp=arr1[j];
//                 arr1[j]=arr1[j+1];
//                 arr1[j+1]=tmp;
//             }
//         }
//     }
// }
// int main()
// {
//     int arr1[]={9,8,7,6,5,4,3,2,1,0};
//     int sz =sizeof(arr1)/sizeof(arr1[0]);
//     int i =0;
//     bubble_sort(arr1,sz);
//     for (i=0;i<sz;i+=1)
//     {
//         printf("%d ",arr1[i]);
//     }
//     return 0;
// }
int main()
{
    int arr1[3][4]={0};
    printf("%d\n",sizeof(arr1) / sizeof(arr1[0]));
    printf("%d\n",sizeof(arr1[0]) / sizeof(arr1[0][0]));
    return 0;
}
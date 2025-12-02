#include<stdio.h>
// int main()
// {
//     int arr[10]={0};
//     int i=0;
//     int sz =sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i< sz ;i += 1)
//     {
        
//         arr[i]=i;
//         printf("&arr[%d]%p\n",i,&arr[i]);
//     }
//     return 0;
// }
// int main()
// {
//     int arr1 [3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
//     for(int i=0;i<3;i+=1)
//     {
//         for(int j=0;j<4;j+=1)
//         {
//             scanf("%d",&arr1[i][j]);
//         }
//     }
//     for(int i =0;i < 3;i += 1)
//     {
//         for(int j =0;j<4;j+=1)
//         {
//             printf("%d",arr1[i][j]);
            
//         }
//         printf("\n");
//     }  
//     return 0;
// }
int main()
{
    int arr1[4][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6},{4,5,6,7}};
    for (int i=0;i<4;i+=1)
    {
        for(int j=0;j<4;j+=1)
        {
            if(i>j)
            {
                arr1[i][j]=0;
                printf("%d",arr1[i][j]);
            }
            else
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}
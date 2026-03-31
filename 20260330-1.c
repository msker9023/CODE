// #include <stdio.h>
// #include<string.h>
// int main()
//  {
//     int n=0;
//     scanf("%d",&n);
//     char num1[10000]={0};
//     char num2[1000]={0};
//     for(int i=1;strlen(num1)<n;i++)
//     {
//         sprintf(num2,"%d",i);
//         strcat(num1,num2);
//     }
//     // printf("%c",num1[n-1]);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     char letter[5000] = {0};
//     fgets(letter, 5000, stdin);
//     int i = 0;
//     while (letter[i] != '\0') 
//     {
//         if (i == 0) {
//             if (letter[i] >= 'a')
//                 printf("%c", letter[i] - 32);
//             else
//                 printf("%c", letter[i]);
//         }
//         if (letter[i] == ' ') {
//             if (letter[i+1] >= 'a')
//                 printf("%c", letter[i+1] - 32);
//             else
//                 printf("%c", letter[i+1]);
//         }
//         i++;
//     }
//     return 0;
// }
// #include<stdio.h>
// #include<stdlib.h>
// //qsort(数组起始地址,排序个数,单个元素字节大小,排序函数)
// int cmp(const void*e1,const void*e2)
// {
//     return (*(char*)e1-*(char*)e2);
// }
// int main()
// {
//     // int a=10;
//     // char* pc = (char*)&a;
//     // printf("%d",*pc);
//     char arr[10]={0};
//     fgets(arr,10,stdin);
//     qsort(arr,10,sizeof(arr[0]),cmp);
//     for(int i=0;i<10;i++)
//     {
//         printf("%c",arr[i]);
//     }
//     return 0;
// }
#include <stdio.h>

int main()
 {
    int n,m;
    scanf("%d %d",&n,&m);
    char ch[n];
    scanf(" %s",ch);
    for(int i=0;i<m;i++)
    {
        int left=0,right=0;
        scanf(" %d %d",&left,&right);
        char rep1,rep2;
        scanf(" %c %c",&rep1,&rep2);
        for(;left<=right;left++)
        {
            if(ch[left]==rep1)
                ch[left]=rep2;

        }
    }
    printf("%s",ch);
    return 0;
}
// #include <stdio.h>

// int main() 
// {
//     int n,m;
//     scanf("%d %d",&n,&m);
//     char landmine[n+2][m+2];
//     for(int i=0;i<n+2;i++)
//     {
//         for(int j=0;j<m+2;j++)
//         {
//             landmine[i][j]='0';
//         }
//     }
//     for(int i=1;i<n+1;i++)
//     {
//         for(int j=1;j<m+1;j++)
//         {
//             scanf(" %c",&landmine[i][j]);
//         }
//     }
//     for(int i=1;i<n+1;i++)
//     {
//         for(int j=1;j<m+1;j++)
//         {
//             if(landmine[i][j]=='*')
//                 printf("%c",landmine[i][j]);
//             else
//             {
//                 int count=0;
//                 if(landmine[i-1][j-1]=='*')
//                     count++;
//                 if(landmine[i-1][j]=='*')
//                     count++;
//                 if(landmine[i-1][j+1]=='*')
//                     count++;
//                 if(landmine[i][j-1]=='*')
//                     count++;
//                 if(landmine[i][j+1]=='*')
//                     count++;
//                 if(landmine[i+1][j-1]=='*')
//                     count++;
//                 if(landmine[i+1][j]=='*')
//                     count++;
//                 if(landmine[i+1][j+1]=='*')
//                     count++;
//                 landmine[i][j]=count+48;
//                 printf("%c",landmine[i][j]);
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
// #include <stdio.h>

// int main() 
// {
//    char ch[1000000];
//    scanf("%s",ch);
//    for(int i=0;i<1000000;i++)
//    {
//         if(ch[i]=='5')
//             ch[i]='*';
//    }
//    printf("%s",ch);
//     return 0;
// }
// #include <stdio.h>
// #include<string.h>
// int main()
//  {
//     char s1[100],s2[100];
//     scanf("%s %s",s1,s2);
//     if(strcmp(s1,"elephant")==0&&strcmp(s2,"tiger")==0)
//         printf("win");
//     else if(strcmp(s1,"tiger")==0&&strcmp(s2,"cat")==0)
//         printf("win");
//     else if(strcmp(s1,"cat")==0&&strcmp(s2,"mouse")==0)
//         printf("win");
//     else if(strcmp(s1,"mouse")==0&&strcmp(s2,"elephant")==0)
//         printf("win");
//     else if(strcmp(s2,"elephant")==0&&strcmp(s1,"tiger")==0)
//         printf("lose");
//     else if(strcmp(s2,"tiger")==0&&strcmp(s1,"cat")==0)
//         printf("lose");
//     else if(strcmp(s2,"cat")==0&&strcmp(s1,"mouse")==0)
//         printf("lose");
//     else if(strcmp(s2,"mouse")==0&&strcmp(s1,"elephant")==0)
//         printf("lose");
//     else
//         printf("tie");
    
//     return 0;
// }
// #include <stdio.h>
// void douhao(int n)
// {
//     if(n<1000)
//         printf("%d",n);
//     else
//     {   douhao(n/1000);
//         printf(",%03d",n%1000);
//     }
// }
// int main()
// {
//     int n=0;
//     scanf("%d",&n);
//     douhao(n);
//     return 0;
// }
// #include <stdio.h>
// void search(char *ch,int sz)
// {
//     int i=0;
//     for(i=0;i<sz-2;i++)
//     {
//         if(ch[i]=='b'||ch[i]=='B')
//         {
//             if(ch[i+1]=='o'||ch[i+1]=='O')
//             {
//                 if(ch[i+2]=='b'||ch[i+2]=='B')
//                 {   
//                     printf("%d",i);
//                     return;
//                 }
//             }
//         }
//     }
//     printf("-1");
// }
// int main()
//  {
//     char ch[101];
//     scanf("%s",ch);
//     int sz=sizeof(ch);
//     search(ch,sz);
//     return 0;
// }
// #include <stdio.h>
// #include<string.h>
// int main() 
// {
//    int n=0;
//    scanf("%d",&n);
//    char ch[1000];
//    scanf("%s",ch);
//    int sz=strlen(ch);
//    for(int i=0;i<sz;i++)
//    {
//         ch[i]='a'+(ch[i]-'a'+n)%26;
//    }
//     printf("%s",ch);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int i=0;
    int arr[10];
    for(i=0;i<10;i++)
    {
        arr[i]=i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d",i);
    }
    
    // return 0;

    return 0;
}
#include <graphics.h>
#include <conio.h>

int main()
{
    initgraph(640, 480);
    circle(320, 240, 100);
    _getch();
    closegraph();
    return 0;
}
// void my_strcpy(char* arr2,char* arr1)
// {
//     assert(arr2);
//     assert(arr1);
//     int sz=strlen(arr1);
//     for(int i=0;i<=sz;i++)
//     {
//         arr2[i]=arr1[i];
//     }
// }
// int main()
// {
//     // struct stu
//     // {
//     //     int n1;
//     //     int n2;
//     // };
//     // struct stu p={1,2};
//     // printf("%p %p",&(p.n1),&(p.n2));
//     // char ch[100];
//     //fgets(ch,100,stdin);
//     // int sz=strlen(ch);
//     // printf("%d\n",sz);
//     //strcpy(ch,"sdadasld");
//     //printf("%s",ch);
//     // char arr1[]={"abcdef"};
//     // char arr2[20]={0};
//     // my_strcpy(arr2,arr1);
//     // printf("%s\n",arr2);
//     char ch[1000];
//     fgets(ch,1000,stdin);

//     return 0;
// }
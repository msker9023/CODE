#include<stdio.h>
//斐波那契数列
// int FIB(int n)
// {
//     if(n<=2)
//         return 1;
//     else 
//         return FIB(n-1)+FIB(n-2);
// }
int FIB(int n)
{
    int a=1;
    int b=1;
    int c=0;
    if(n<=2)
        return 1;
    while(n>=3)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
    
}
int main()
{
    int n=0;
    scanf("%d",&n);
    int ret = FIB(n);
    printf("%d",ret);
    

    return 0;
}
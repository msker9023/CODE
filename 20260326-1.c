#include <stdio.h>
#include<math.h>
int print(int n,int m)
{
    if(n==1&&m==1)
        return 1;
    else if(n>=2&&m==1)
        return print(n-1,m);
    else if(m>=2&&n==1)
        return print(n,m-1);
    else if(n>=2&&m>=2)
        return print(n-1,m)+print(n,m-1);
    return 0;
}

int main() 
{
    int n,m;
    scanf("%d %d",&n,&m);
    int num=print(n,m);
    printf("%d\n",num%(int)(pow(10,9)+7));

    return 0;
}
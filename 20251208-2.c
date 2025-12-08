#include<stdio.h>
//将整数转换为字符串输出
int main()
{
    int arr[10]={0};
    int a=0;
    int j=0;
    scanf("%d",&a);
    while(a!=0)
    {
        if(a<0)
        {
            a = -a;
            putchar('-');
        }
        arr[j]=a%10;
        j+=1;
        a /=10;
    }
    int m=0;
    for(m=j-1;m>=0;m-=1)
    {
        putchar(arr[m]+'0');
    }
    return 0;
}
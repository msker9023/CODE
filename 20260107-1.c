#include<stdio.h>
int Print(int x,int y)
{
    if(x<y)
    {
        int tmp=0;
        tmp=x;
        x=y;
        y=tmp;
    }
    if(x%y==0)
    {
        return y;
    }
    else
    {
        return Print(x%y,y);
    }
}
int main()
{
    int a=0;
    int b=0;
    int c=0;
    scanf("%d %d",&a,&b);
    c = Print(a,b);
    printf("%d",c);
    return 0;
}
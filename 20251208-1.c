#include<stdio.h>
#include<time.h>
//从系统中获取时间
int main()
{
    time_t current_time=time(NULL);
    int total_days=current_time/(60*60*24);
    int hour=(current_time%(60*60*24))/3600;
    int minute=(current_time%(60*60*24)%3600)/60;
    int second=(current_time%(60*60*24)%3600)%60;
    int year=1970;
    int month=0;
    int i=-1;
    int j=0;
    int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    while(total_days>0)
    {
        if((year%4==0&&year%100!=0)||(year%400==0))
            {
            year +=1;
            total_days -=366;
            i=1;
            }
        else
            {
            year +=1;
            total_days -=365;
            i=0;
            }
    }
    year -=1;
    if(i==1)
    {
        total_days+=366;
        arr[1]=29;
    }
    else if(i==0)
    {
        total_days+=365;
    }
    while (total_days>0)
    {
        total_days-=arr[j];
        j+=1;
    }
    total_days+=arr[j-1];
    month=j;
    total_days+=1;
    hour +=8; 
    if(hour>24)
        hour -=24;
    printf("%04d-%02d-%02d-%d-%02d-%02d",year,month,total_days,hour,minute,second);
    return 0;
}
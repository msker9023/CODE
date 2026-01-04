#include<stdio.h>
struct information
{
    char name[20];
    char tele[12];
    char sex[5];
    int high;

};
struct st
{
    struct information p;
    char str[10];
};
int main()
{
    struct information p1 = {"张三","12345678911","男",180};
    struct st s = {{"李四","98765432100","女",170},"qwerty"};
    printf("%s %s %s %d\n", p1.name , p1.tele , p1.sex , p1.high);
    printf("%s %s %s %d %s\n",s.p.name,s.p.tele,s.p.sex,s.p.high,s.str);
    return 0;
}
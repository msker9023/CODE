#include <stdio.h>
//输入一个字符串,以空格为间隔,判断每个单词有几个字母和数字
int main()
{
    char arr[100]={0};
    int i =0;
    int ch =0;
    int num=0;
    int letter=0;
    int word=0;
    int word_=0;

    while(1)
    {
        ch=getchar();
        if(ch>='0'&&ch<='9')
        {
            num +=1;
            putchar(ch);
        }

        else if(ch>='a'&&ch<='z')
        {
            letter +=1;
            putchar(ch);
        }
        else if(ch==' ')
        {
            word +=1;
            word_ +=1;
            printf("\n");
            printf("%d\n",num);
            printf("%d\n",letter);
            if(word_)
            {
                num = 0;
                letter = 0;
                word_ =0;
            }
            
        }    
        else if(ch == '\n')
            break;
    }
    
    printf("\n");
    printf("%d\n",word);

    return 0;
}
#include<stdio.h>
#include"game.c"
#include"game.h"
void menu()
{
    printf("*****************\n");
    printf("* 1.开始  2.退出 *\n");
    printf("*****************\n");
}
void game()
{
    char board[ROW][COL]={0};
    char ret=0;
    //初始化
    Initboard(board,ROW,COL);
    Displayboard(board,ROW,COL);
    while(1)
    {
        Playermove(board,ROW,COL);
        Displayboard(board,ROW,COL);
        //判断输赢
        ret = If_win(board,ROW,COL);
        if(ret != 'C')
        {
            break;
        }
        Computermove(board,ROW,COL);
        Displayboard(board,ROW,COL);
        //判断输赢
        ret = If_win(board,ROW,COL);
        if(ret != 'C')
        {
            break;
        }
    }
    if(ret == '*')
    {
        printf("玩家赢\n");
    }
    else if(ret == '#')
    {
        printf("电脑赢\n");
    }
}
int main()
{
    srand((unsigned int)time(NULL));
    int input=0;
    do{
        menu();
        printf("选择>");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 0:
            break;
        default:
            break;
        }
      }while(input);
    return 0;
}
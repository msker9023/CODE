#include"game.h"
void Initboard(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            board[i][j]=' ';
        }
    }
}
void Displayboard(char board[ROW][COL],int row,int col)
{
    int i=0;
    
    for(i=0;i<row;i++)
    {
        for(int j=0;j<col;j+=1)
        {
            printf(" %c ",board[i][j]);
            if(j<col-1)
                printf("|");
        }
        printf("\n");
        if(i<row-1)
        {
            int j=0;
            for(j=0;j<col;j+=1)
            {
                printf("---");
                if(j<col-1)
                    printf("|");
            }
            printf("\n");

        }
    }

}
void Playermove(char board[ROW][COL],int row,int col)
{
    printf("玩家下棋>\n");
    printf("输入坐标");
    while(1)
    {
        int x=0;
        int y=0;
        scanf("%d %d",&x,&y);
        if(x>=1 && x<=row && y>=1 && y<=col)
        {
            if(board[x-1][y-1]!=' ')
                printf("该位置已被占用,请重新输入");
            else
            {
                board[x-1][y-1]='*';
                break;
            }
        }
        else
            printf("该位置越界,请重新输入");
    }
}
void Computermove(char board[ROW][COL],int row,int col)
{
    printf("电脑下棋>\n");
    while(1)
    {
        int x=rand() % row;
        int y=rand() % col;
        if(board[x][y] == ' ')
        {
            board[x][y]='#';
            break;
        }
    }
}
int If_full(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i+=1)
    {
        for(j=0;j<col;j+=1)
        {
            if(board[i][j]==' ')
            {
                return 0;
            }
        }
    }
    return 1;
}
char If_win(char board[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    //检验行
    for(x=0;x<row;x+=1)
    {
        if(board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][0] != ' ')
        {
            return board[x][0];
        }
    }
    //检验列
     for(y=0;y<col;y+=1)
    {
        if(board[0][y] == board[1][y] && board[1][y] == board[2][y] && board[0][y] != ' ')
        {
            return board[0][y];
        }
    }
    //检验对角线
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
    {
        return board[0][0];
    }
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
    {
        return board[0][2];
    }
    if(If_full(board,ROW,COL))
    {
        printf("平局\n");
        return 'Q';
    }
    return 'C';
}
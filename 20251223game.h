#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu();
void game();
void Initboard(char board[ROW][COL],int row,int col);
void Displayboard(char board[ROW][COL],int row,int col);
void Playermove(char board[ROW][COL],int row,int col);
void Computermove(char board[ROW][COL],int row,int col);
char If_win(char board[ROW][COL],int row,int col);
int If_full(char board[ROW][COL],int row,int col);
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMover(char board[ROW][COL], int row, int col);
void ComputerMover(char board[ROW][COL], int row, int col);

//告诉我们四种状态
//玩家赢    --'*'
//电脑赢    --'0'
//平局      --'Q'
//继续      --'C'

char IsWin(char board[ROW][COL], int row, int col);
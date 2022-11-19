#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			board[i][j] = ' ';
		}
	}
}

//void DisplayBoard(char board[ROW][COL], int row, int col) {
//	for (int i = 0; i < ROW; i++) {
//		//打印一行数据
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		//打印分割行
//		if (i < ROW - 1) {
//			printf("---|---|---\n");
//		}
//	}
//}

//显示棋盘
void DisplayBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < ROW; i++) {
			//打印一行数据
		for (int j = 0; j < COL; j++) {
			printf(" %c ", board[i][j]);
			if(j<COL-1)
				printf("|");
		}
		printf("\n");
		//打印分割行
		if (i < ROW - 1) {
			//printf("---|---|---\n");
			for (int j = 0; j < COL; j++) {
				printf("---");
				if(j<COL-1)
					printf("|");
			}
			printf("\n");
		}
	}
}

//玩家下棋
void PlayerMover(char board[ROW][COL], int row, int col) {
	int x=0, y=0;
	printf("玩家走：\n");
	while (x<=ROW&&y<=COL) {
		printf("请输入你要下的坐标:>\n");
		scanf("%d%d", &x, &y);
		if (x <= ROW && y <= COL) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("该位置已被占用\n");
			}
		}
		else {
			printf("你输入的坐标不合法，请重新输入:>\n");
		}
	}
}

//电脑下棋
void ComputerMover(char board[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	printf("电脑走：\n");
	while (1) {
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ') {
			board[x][y] = '0';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (board[i][j] == ' ') {
				//没满
				return 0;
			}
		}
	}
	//满了
	return 1;
}



char IsWin(char board[ROW][COL], int row, int col) {
	//横三行
	for (int i = 0; i < ROW; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}
	//竖三行
	for (int i = 0; i < COL; i++) {
		if (board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=' ') {
			return board[0][i];
		}
	}
	//两个对角线
	if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]!=' ') {
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ') {
		return board[1][1];
	}
	//判断是否平局
	if (1 == IsFull(board,ROW,COL)) {
		return 'Q';
	}
	else {
		return 'C';
	}
}
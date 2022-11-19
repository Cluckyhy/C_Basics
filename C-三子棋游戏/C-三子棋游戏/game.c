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
//		//��ӡһ������
//		printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
//		//��ӡ�ָ���
//		if (i < ROW - 1) {
//			printf("---|---|---\n");
//		}
//	}
//}

//��ʾ����
void DisplayBoard(char board[ROW][COL], int row, int col) {
	for (int i = 0; i < ROW; i++) {
			//��ӡһ������
		for (int j = 0; j < COL; j++) {
			printf(" %c ", board[i][j]);
			if(j<COL-1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
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

//�������
void PlayerMover(char board[ROW][COL], int row, int col) {
	int x=0, y=0;
	printf("����ߣ�\n");
	while (x<=ROW&&y<=COL) {
		printf("��������Ҫ�µ�����:>\n");
		scanf("%d%d", &x, &y);
		if (x <= ROW && y <= COL) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("��λ���ѱ�ռ��\n");
			}
		}
		else {
			printf("����������겻�Ϸ�������������:>\n");
		}
	}
}

//��������
void ComputerMover(char board[ROW][COL], int row, int col) {
	int x = 0, y = 0;
	printf("�����ߣ�\n");
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
				//û��
				return 0;
			}
		}
	}
	//����
	return 1;
}



char IsWin(char board[ROW][COL], int row, int col) {
	//������
	for (int i = 0; i < ROW; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}
	//������
	for (int i = 0; i < COL; i++) {
		if (board[0][i]==board[1][i]&&board[1][i]==board[2][i]&&board[0][i]!=' ') {
			return board[0][i];
		}
	}
	//�����Խ���
	if (board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]!=' ') {
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ') {
		return board[1][1];
	}
	//�ж��Ƿ�ƽ��
	if (1 == IsFull(board,ROW,COL)) {
		return 'Q';
	}
	else {
		return 'C';
	}
}
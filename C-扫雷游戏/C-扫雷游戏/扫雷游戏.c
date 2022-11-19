#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu() {
	printf("*******************************\n");
	printf("****        1.play         ****\n");
	printf("****        0.exit         ****\n");
	printf("*******************************\n");
	printf("*******************************\n");
}
void game() {
	//printf("扫雷\n");
	//存雷信息
	char mine[ROWS][COLS] = { 0 };
	//排查雷信息
	char show[ROWS][COLS] = { 0 };
	//初始化存雷
	InitBoard(mine,ROWS,COLS,'0');
	//初始化排查雷
	InitBoard(show,ROWS,COLS,'*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//扫雷
	DisplayBoard(mine, ROW, COL);
	FindMine(mine,show,ROW,COL);

}



void test() {
	int input;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			//printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
	} while (input);
}


int main() {

	test();

	getchar();
	return 0;
}
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
	//printf("ɨ��\n");
	//������Ϣ
	char mine[ROWS][COLS] = { 0 };
	//�Ų�����Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(mine,ROWS,COLS,'0');
	//��ʼ���Ų���
	InitBoard(show,ROWS,COLS,'*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//ɨ��
	DisplayBoard(mine, ROW, COL);
	FindMine(mine,show,ROW,COL);

}



void test() {
	int input;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			//printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
	} while (input);
}


int main() {

	test();

	getchar();
	return 0;
}
//#include <stdio.h>
//
////ö������
//
////ö�����͵��ŵ�
////1�����Ӵ���Ŀɶ��ԺͿ�ά����
////2����#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ�
////3����ֹ��������Ⱦ����װ��
////4�����ڵ���
////5��ʹ�÷��㣬һ�ο��Զ���������
//
//
//
//enum Sex {
//	//ö�ٿ��ܵ�ȡֵ-����
//	//����������ʼֵ
//	MALE = 2,
//	FEMALE = 4,
//	SECRET
//};
//enum Color {
//	RED,		//0
//	GREEN,		//1
//	BLUE		//2
//};
//
//
//int main() {
//
//
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));	//4���ֽڣ���Ϊö������ʵ�ʴ�ŵ�������������
//	enum Color c = RED;
//	printf("%d\n", sizeof(c));	//4���ֽ�
//	//��ʵ�����ǲ��еģ���C++�������лᱨ�����ܰ�int�������ݸ���eume Color���͵�����
//	enum Color c1 = 2;	//int
//
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//
//
//
//	getchar();
//	return 0;
//}
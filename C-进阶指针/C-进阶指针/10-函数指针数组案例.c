//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void menu() {
//	printf("*****************************\n");
//	printf("***   1��Add    2��Sub    ***\n");
//	printf("***   3��Mul    4��Div    ***\n");
//	printf("***        0��Exit        ***\n");
//	printf("*****************************\n");
//}
//
//int Add(int x, int y) {
//	int z = x + y;
//	return z;
//}
//int Sub(int x, int y) {
//	int z = x - y;
//	return z;
//}
//int Mul(int x, int y) {
//	int z = x * y;
//	return z;
//}
//int Div(int x, int y) {
//	int z = x / y;
//	return z;
//}
//
////�ص�����
//void Calc(int (*pf)(int,int)) {
//	int num1 = 0, num2 = 0;
//	printf("������������������>");
//	scanf("%d%d", &num1, &num2);
//	printf("%d\n", pf(num1,num2));
//}
//
//
//int main() {
//
//
//	//��ͳ����
//	
//
//	//int input = 0;
//	//int num1 = 0, num2 = 0;
//	//int ret = 0;
//	//do {
//	//	menu();
//	//	printf("���������ѡ��>");
//	//	scanf("%d", &input);
//	//	switch (input) {
//	//	case 1:
//	//		printf("������������������>");
//	//		scanf("%d%d", &num1, &num2);
//	//		ret = Add(num1, num2);
//	//		printf("�������ĺ�Ϊ��%d\n", ret);
//	//		break;
//	//	case 2:
//	//		printf("������������������>");
//	//		scanf("%d%d", &num1, &num2);
//	//		ret = Sub(num1, num2);
//	//		printf("�������Ĳ�Ϊ��%d\n", ret);
//	//		break;
//	//	case 3:
//	//		printf("������������������>");
//	//		scanf("%d%d", &num1, &num2);
//	//		ret = Mul(num1, num2);
//	//		printf("�������Ļ�Ϊ��%d\n", ret);
//	//		break;
//	//	case 4:
//	//		printf("������������������>");
//	//		scanf("%d%d", &num1, &num2);
//	//		ret = Div(num1, num2);
//	//		printf("�������ĳ�Ϊ��%d\n", ret);
//	//		break;
//	//	case 0:
//	//		printf("�����˳�ϵͳ");
//	//		break;
//	//	default:
//	//		printf("��������������������\n");
//	//		break;
//	//	}
//	//} while (input);
//
//	//���ú���ָ������
//
//	//int input = 0;
//	//int num1 = 0, num2 = 0;
//	//int ret = 0;
//	//int (*pfarr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	//do {
//	//	menu();
//	//	printf("���������ѡ��>");
//	//	scanf("%d", &input);
//	//	if (input >= 1 && input <= 4) {
//	//		printf("������������������>");
//	//		scanf("%d%d", &num1, &num2);
//	//		ret = pfarr[input](num1,num2);
//	//		printf("����ǣ�%d\n", ret);
//	//	}
//	//	else if (input == 0) {
//	//		printf("�����˳�");
//	//		break;
//	//	}
//	//	else {
//	//		printf("��ѡ���������������\n");
//	//	}
//	//} while (input);
//
//
//	//���ûص�����
//	
//	int input = 0;
//	do {
//		menu();
//		printf("���������ѡ��>");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�����˳�ϵͳ");
//			break;
//		default:
//			printf("��������������������\n");
//			break;
//		}
//	} while (input);
//
//
//	getchar();
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void menu() {
//	printf("*****************************\n");
//	printf("***   1、Add    2、Sub    ***\n");
//	printf("***   3、Mul    4、Div    ***\n");
//	printf("***        0、Exit        ***\n");
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
////回调函数
//void Calc(int (*pf)(int,int)) {
//	int num1 = 0, num2 = 0;
//	printf("请输入两个操作数：>");
//	scanf("%d%d", &num1, &num2);
//	printf("%d\n", pf(num1,num2));
//}
//
//
//int main() {
//
//
//	//传统做法
//	
//
//	//int input = 0;
//	//int num1 = 0, num2 = 0;
//	//int ret = 0;
//	//do {
//	//	menu();
//	//	printf("请输入你的选择：>");
//	//	scanf("%d", &input);
//	//	switch (input) {
//	//	case 1:
//	//		printf("请输入两个操作数：>");
//	//		scanf("%d%d", &num1, &num2);
//	//		ret = Add(num1, num2);
//	//		printf("两个数的和为：%d\n", ret);
//	//		break;
//	//	case 2:
//	//		printf("请输入两个操作数：>");
//	//		scanf("%d%d", &num1, &num2);
//	//		ret = Sub(num1, num2);
//	//		printf("两个数的差为：%d\n", ret);
//	//		break;
//	//	case 3:
//	//		printf("请输入两个操作数：>");
//	//		scanf("%d%d", &num1, &num2);
//	//		ret = Mul(num1, num2);
//	//		printf("两个数的积为：%d\n", ret);
//	//		break;
//	//	case 4:
//	//		printf("请输入两个操作数：>");
//	//		scanf("%d%d", &num1, &num2);
//	//		ret = Div(num1, num2);
//	//		printf("两个数的除为：%d\n", ret);
//	//		break;
//	//	case 0:
//	//		printf("你已退出系统");
//	//		break;
//	//	default:
//	//		printf("你输入有误，请重新输入\n");
//	//		break;
//	//	}
//	//} while (input);
//
//	//利用函数指针数组
//
//	//int input = 0;
//	//int num1 = 0, num2 = 0;
//	//int ret = 0;
//	//int (*pfarr[])(int, int) = { 0,Add,Sub,Mul,Div };
//	//do {
//	//	menu();
//	//	printf("请输入你的选择：>");
//	//	scanf("%d", &input);
//	//	if (input >= 1 && input <= 4) {
//	//		printf("请输入两个操作数：>");
//	//		scanf("%d%d", &num1, &num2);
//	//		ret = pfarr[input](num1,num2);
//	//		printf("结果是：%d\n", ret);
//	//	}
//	//	else if (input == 0) {
//	//		printf("你已退出");
//	//		break;
//	//	}
//	//	else {
//	//		printf("你选择错误，请重新输入\n");
//	//	}
//	//} while (input);
//
//
//	//利用回调函数
//	
//	int input = 0;
//	do {
//		menu();
//		printf("请输入你的选择：>");
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
//			printf("你已退出系统");
//			break;
//		default:
//			printf("你输入有误，请重新输入\n");
//			break;
//		}
//	} while (input);
//
//
//	getchar();
//	return 0;
//}
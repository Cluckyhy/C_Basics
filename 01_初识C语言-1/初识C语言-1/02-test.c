////#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////int a = 100;    //全局变量
//
//int main() {
//
//	//int a = 10;   //局部变量
//	//局部变量和全局变量的名字建议不要相同-容易产生误会，产生BUG;
//	//当局部变量和全局变量的名字相同时，局部变量优先;
//	//printf("%d\n", a);
//
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个整数\n");
//	scanf("%d%d", &num1, &num2);
//	//在老版本的C语言编译器中，在这里定义sum会报错，因为
//	//C语言语法规定，变量要在当前代码块的最前面	
//	int sum = 0;
//	sum = num1 + num2;
//	printf("两个数的和为Sum = %d", sum);
//
//
//
//	getchar();
//	return 0;
//}
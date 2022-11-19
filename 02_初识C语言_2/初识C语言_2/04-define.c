//#include <stdio.h>
//
////#define 定义标识符常量
////#define MAX 100
////#define 定义宏--带参数
//#define MAX(x,y) (x>y?x:y)
// 
//int Max(int x, int y) {
//	if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//}
//
//int main() {
//
//	//int a = MAX;
//	//printf("%d\n", a);
//
//	int num1 = 10;
//	int num2 = 20;
//
//	//函数方式求两个数的较大值
//	int max = Max(num1,num2);
//	printf("%d\n", max);
//	//宏方式
//	max = MAX(num1, num2);
//	printf("%d\n", max);
//
//
//	getchar();
//	return 0;
//}
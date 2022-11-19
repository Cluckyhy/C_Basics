//#include <stdio.h>
//#include "add.h"
//
////写一个函数，每次调用一次这个函数，就会将num的值增加1
//
//void Add(int* p) {
//	//这样写的话是不会加1的，因为++的优先级要比*号高。
//	//*p++;
//	//这样写才正确
//	(*p)++;
//}
//
//
//int main() {
//
//	//int num = 0;
//	//Add(&num);
//	//printf("num = %d\n", num);	//1
//	//Add(&num);
//	//printf("num = %d\n", num);	//2
//	//Add(&num);
//	//printf("num = %d\n", num);	//3
//	//Add(&num);
//	//printf("num = %d\n", num);	//4
//
//
//	//printf()函数返回值是int型打印的字符个数num，先打43，再打印2，最后打印1
//	//printf("%d", printf("%d", printf("%d", 43)));  //4321
//
//	int num1 = 10;
//	int num2 = 20;
//	printf("%d\n", add(num1, num2));
//
//
//	getchar();
//	return 0;
//}
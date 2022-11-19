//#include <stdio.h>
//
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//
//
//int main() {
//	
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数地址  --  函数指针数组
//	int (*parr[])(int, int) = { Add,Sub,Mul,Div };		//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		int ret = parr[i](10, 5);
//		printf("%d\n", ret);
//	}
//
//	
//	char* my_strcpy(char* dest, const char* src);
//	//1、写一个函数指针 pf,能够指向my_strcpy
//	char* (*pf)(char*, const char*);
//	//2、写一个函数指针数组 pfArr,能够存放4个my_strcpy函数的地址
//	char* (*pfArr[4])(char*, const char*);
//
//
//	getchar();
//	return 0;
//}
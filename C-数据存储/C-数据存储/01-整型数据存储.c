//#include <stdio.h>
//
////void test(void) {
////	printf("呵呵");
////}
////
////int main() {
////
////	test(100);
////
////	getchar();
////	return 0;
////}
//
//int Check_sys(int num) {
//	char* p = (char*)&num;
//	if (*p == 1) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//
//int main() {
//
//	//什么是大端小端
//	//大端（存储）模式，是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的底地址中；
//	//小端（存储）模式，是指数据的低位保存在内存的底地址中，而数据的高位，保存在内存的高地址中；
//
//	//int a = 10;
//	//int b = -20;
//	
//
//	//写一段代码告诉我们当前机器的字节序是什么
//	//返回1，小端
//	//返回0，大端
//	//int a = 1;
//	//char* p = (char*)&a;
//	//if (*p == 1) {
//	//	printf("小端存储模式\n");
//	//}
//	//else {
//	//	printf("大端存储模式\n");
//	//}
//
//	int a = 1;
//	int ret = Check_sys(a);
//	if (ret == 1) {
//		printf("小端模式");
//	}
//	else {
//		printf("大端模式");
//	}
//
//	getchar();
//	return 0;
//}
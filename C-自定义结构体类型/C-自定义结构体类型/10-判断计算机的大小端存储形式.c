//#include <stdio.h>
//
////利用指针来方式判断计算机大小端模式
////int check_sys() {
////	int num = 1;
////	//if (*(char*)&num == 1) {
////	//	return 1;
////	//}
////	//else return 0;
////	//返回1，表示小端
////	//返回0，表示大端
////	return *(char*)&num;
////}
//
////利用联合体方式判断计算机大小端模式
//int check_sys() {
//	union Un {
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return u.c;
//}
//
//
//
//int main() {
//	
//	int a = 0x11223344;
//	//
//	//	 低地址-------------------------高地址
//	//---[][][][][][11][22][33][44][][][][][]---	大端字节序存储模式
//	//---[][][][][][44][33][22][11][][][][][]---	小端字节序存储模式
//	//讨论一个数据，放在内存中的存放的字节顺序
//	//大小端字节序的问题
//	//
//
//
//	if (check_sys()) {
//		printf("小端存储模式");
//	}
//	else {
//		printf("大端存储模式");
//	}
//
//
//	getchar();
//	return 0;
//}
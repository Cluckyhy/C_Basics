//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////此案例存在两个问题
////1、运行代码程序会出现崩溃的现象
////2、程序存在内存泄露问题
////str以值传递的形式给p
////p是GerMemory()函数的一个形参，只在函数内部有效，等GetMemory函数返回之后，动态内存尚未释放
////并且无法找到，所以会造成内存泄露
//
////错误代码
////void GetMemory(char* p) {
////	p = (char*)malloc(100);		//这里就会产生内存泄露问题，因为一旦函数访问结束，p也就没了。动态内存尚未释放
////}
//
////解决方案一
////void GetMemory(char* *p) {
////	*p = (char*)malloc(100);
////}
//
////解决方案二
//char* GetMemory(char* p) {
//	p = (char*)malloc(100);
//	return p;
//}
//
//
//void Test(void) {
//	char* str = NULL;
//	//GetMemory(str);	//错误写法
//	//GetMemory(&str);	//正确写法	方案一
//	str = GetMemory(str);	//正确写法	方案二
//	strcpy(str, "Hello World");		//程序走到这程序就会崩溃，因为str根本就还是NULL，并没有指向有效的空间
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//
//
//int main() {
//	
//	//char* str = "abcdef";	//这里是把a的地址赋值给str;
//	//printf(str);	//这种打印字符串的写法是没问题的
//	////其实是等价于
//	//printf("abcdef");	//这里的abcdef是自动把a的地址返回回来的
//
//	//程序崩溃
//	Test();
//
//	getchar();
//	return 0;
//}
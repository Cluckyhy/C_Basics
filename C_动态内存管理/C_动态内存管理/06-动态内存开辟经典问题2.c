//#include <stdio.h>
//
////返回栈空间的地址问题，一定要注意，栈空间上的地址不要随便返回
//
//
//char* GetMemory(viod) {
//	char p[] = "hello world";	//error
//	//static char p[] = "hello world";		//这样写就没问题了，不会输出随机值，p就不在栈区了，是在静态区
//	return p;
//}
//
//void Test(void) {
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//
//
//int main() {
//
//
//	Test();		//乱码，随机值
//
//	getchar();
//	return 0;
//}
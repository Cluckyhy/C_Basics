//#include <stdio.h>
//
////本题存在内存泄露问题，能正常输出hello
//
//
//
//void GetMemory(char **p,int num) {
//	*p = (char*)malloc(num);
//}
//
//void Test(void) {
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);		//忘记释放动态开辟的内存，导致内存泄露了
//
//	//改进
//	free(str);
//	str = NULL;
//}
//
//
//
//int main() {
//
//	Test();
//
//
//	getchar();
//	return 0;
//}
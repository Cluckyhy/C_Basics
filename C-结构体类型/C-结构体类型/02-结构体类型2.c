//#include <stdio.h>
//
//struct S {
//	int age;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T {
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//
//int main() {
//
//	char arr[] = "ªÿ“‰";
//	struct T t = { "Hello",{18,'S',"hello world",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//
//	getchar();
//	return 0;
//}
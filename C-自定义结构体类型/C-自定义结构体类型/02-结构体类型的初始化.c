//#include <stdio.h>
//
////声明一个结构体类型
//struct T {
//	double weight;
//	short age;
//};
//
////声明一个结构体类型
//struct S {
//	char c;
//	int num;
//	double d;
//	char arr[20];
//	struct T st;		//结构体里面可以包含结构体类型
//};
//
//
//int main() {
//
//	//结构体初始化
//	//结构体类型里面没结构体类型的初始化
//	//struct S s = { 's',100,3.14,"Hello bit" };
//	//结构体类型里有结构体类型的初始化
//	struct S s = { 's',100,3.14,"Hello bit" ,{55.6,18} };
//	printf("%c %d %lf %s %lf %d\n", s.c, s.num, s.d, s.arr ,s.st.weight,s.st.age);
//
//	getchar();
//	return 0;
//}
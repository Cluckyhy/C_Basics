//#include <stdio.h>
//
////注意，VS2019如果不设置默认对齐数的话，系统默认的对齐数是8
//
////默认对齐数是8			--输出是16
//
//
////设置默认对齐数，为4		--输出的是12
//#pragma pack(4)
//struct S {
//	char c1;	//1
//	//7
//	double d;	//8
//};
//#pragma pack()
////取消设置的默认对齐数
//
//
////设置默认对齐数，为1		--输出的是9
////#pragma pack(1)
////struct S {
////	char c1;	//1
////	//7
////	double d;	//8
////};
////#pragma pack()
////取消设置的默认对齐数
//
//
//int main() {
//
//	struct S s;
//	printf("%d\n", sizeof(s));
//
//	getchar();
//	return 0;
//}
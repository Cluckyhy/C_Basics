//#include <stdio.h>
//
//
//struct S1 {
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2 {
//	char c1;
//	char c2;
//	int a;
//};
//
////struct S3 {
////	double d;
////	char c1;
////	int a;
////};
//
//struct S3 {
//	char c1;
//	int a;
//	double d;
//};
//
//struct S4 {
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//
//
//int main() {
//
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));		//12
//
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));		//8
//
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));		//16
//
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));		//32
//
//	printf("%p\n", &s4.c1);
//	printf("%p\n", &s4.s3.c1);
//	printf("%p\n", &s4.s3.a);
//	printf("%p\n", &s4.s3.d);
//	printf("%p\n", &s4.d);
//
//	
//
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//
//
////位段	--位（二进制位）		--就是为了节省空间的
////1、位段的成员可以是 int, usigned int, signed int,或者是char（属于整型家族）类型
////2、位段的空间上是按照需要以4个字节(int)或1个字节(char)的方式来开辟空间的
////3、位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段
//
//
//
//struct S1 {
//	int a : 2;	//后面的2，表示a只需要2个bit位
//	int b : 5;	//后面的5，表示b只需要5个bit位
//	int c : 10;	//后面的10，表示c只需要10个bit位
//	int d : 30;	//后面的30，表示d只需要30个bit位
//				//后面的数字不能大于32
//};
////总共需要占47bit = 6个字节*8 = 48 就够了
////但是，因为是int型数据，所以是4个字节4个字节开辟空间的
//
//struct S2 {
//	char a : 3;	//后面的2，表示a只需要2个bit位
//	char b : 4;	//后面的4，表示b只需要4个bit位
//	char c : 5;	//后面的5，表示c只需要5个bit位
//	char d : 4;	//后面的4，表示d只需要4个bit位
//				//后面的数字不能大于8
//};
//
//int  main() {
//
//	struct S1 s1 = {0};
//	printf("%d\n", sizeof(s1));//8个字节
//
//	struct S2 s2 = {0};
//	printf("%d\n", sizeof(s2));//3个字节
//	s2.a = 10;
//	s2.b = 20;
//	s2.c = 3;
//	s2.d = 4;
//
//
//	getchar();
//	return 0;
//}
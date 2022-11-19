////包含一个叫stdio.h的文件
////std标准 --standard  input output
//
//#include <stdio.h>
//
//
//int main() {      //主函数--程序的入口-main函数有且仅有一个
//
//	//printf --print  function 的缩写，叫做打印函数
//	//库函数 - C语言本身提供给我们使用的函数
//	//使用别人的东西必须先跟别人打个招呼，就是#include <stdio.h>引进系统提供的头文件
//	//printf("Hello World\n");
//
//	//%d - 打印整型
//	//%c - 打印字符
//	//%f - 打印小数float
//	//%lf - 打印小数double
//	//%p - 打印地址
//	//%x - 打印十六进制数
//
//
//
//
//	//char基本数据类型 -字符型
//	char ch = 'S';
//	printf("%c\n",ch);
//
//
//	//int整型类型
//	int age = 25;
//	float height = 1.80;
//
//	//不能打印二进制整数，printf函数不能输出二进制格式
//	printf("%b\n", age);   //%b (binary-二进制)    --自己计算出来的  --11001
//
//	//打印八进制数 
//	printf("%o\n", age);   //%o (octonary-八进制) 打印整型八进制数据   --31
//
//	//打印十进制数
//	printf("%d\n", age);   //%d (decimalism-十进制) 打印整型十进制数据  --25
//
//	//打印十六进制数
//	printf("%x\n", age);   //%x (hexadecimal-十六进制) 打印整型十六进制数据  --19
//
//	//打印地址
//	printf("%p\n", age);
//
//	//打印小数
//	printf("%f\n", height);
//
//	double a = 5.2434;
//	printf("%lf\n", a);
//
//
//
//
//   
//
//
//
//
//
//	getchar();
//	return 0;
//}
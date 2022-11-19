//#include <stdio.h>
//
////1、static 修饰局部变量
////局部变量的生命周期变长
//
////2、static 修饰全局变量
////改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
////出了源文件就没法使用了
//
////3、static 修饰函数
////也是改变了函数的作用域--不准确
////static 修饰函数改变了函数的链接属性
////外部链接属性  -->  内部链接属性
//
//
//
//
////void test() {
//
//
//	//static 修饰局部变量
//	//局部变量的生命周期变长
//	//
//	//static int a = 1;      //a 是一个静态的局部变量
//	//a++;
//	//printf("a = %d\n", a);
////}
//
//
////声明外部函数
//extern int Sum(int, int);
//
//int main() {
//	
//	int num1 = 5, num2 = 0;
//	int ret = Sum(num1, num2);
//	printf("%d\n", ret);
//
//
//
//
//	//extern  -- 声明外部符号的
//	//static 修饰全局变量
//	//改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
//	//出了源文件就没法使用了
//	//extern int g_val;
//	//printf("g_val = %d\n", g_val);
//
//
//
//
//	/*int num1 = 0;
//	while (num1 < 5) {
//		test();
//		num1++;
//	}*/
//
//	getchar();
//	return 0;
//}
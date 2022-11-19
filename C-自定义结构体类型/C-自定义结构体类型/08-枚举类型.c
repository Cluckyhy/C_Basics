//#include <stdio.h>
//
////枚举类型
//
////枚举类型的优点
////1、增加代码的可读性和可维护性
////2、和#define定义的标识符比较枚举有类型检查，更加严谨
////3、防止了命名污染（封装）
////4、便于调试
////5、使用方便，一次可以定义多个常量
//
//
//
//enum Sex {
//	//枚举可能的取值-常量
//	//给常量赋初始值
//	MALE = 2,
//	FEMALE = 4,
//	SECRET
//};
//enum Color {
//	RED,		//0
//	GREEN,		//1
//	BLUE		//2
//};
//
//
//int main() {
//
//
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));	//4个字节，因为枚举里面实际存放的整型类型数据
//	enum Color c = RED;
//	printf("%d\n", sizeof(c));	//4个字节
//	//其实这里是不行的，在C++编译器中会报错，不能把int类型数据赋给eume Color类型的数据
//	enum Color c1 = 2;	//int
//
//	printf("%d %d %d\n", RED, GREEN, BLUE);
//	printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//
//
//
//	getchar();
//	return 0;
//}
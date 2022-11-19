//#include <stdio.h>
//
////声明一个结构体类型
////声明一个学生类型，是想通过学生类型来创建学生变量（对象）
////描述学生：属性-名字+电话+性别+年龄
//struct Stu {
//	char name[20];	//名字
//	char tele[12];	//电话
//	char sex[10];	//性别
//	int  age;		//年龄
//}s4,s5,s6;			//s4,s5,s6也是全局变量
//
//struct Stu s3;		//结构体全局变量
//
////创建一个匿名的结构体变量，创建变量只能在变量列表里创建
//struct {
//	int num;
//	char ch;
//}sa,*psa;			//结构体类型指针
//
//struct {
//	int num;
//	char ch;
//}*p;
//
//
////数据结构链表
//struct Node {
//	int data;
//	//struct Node n;	//错误写法
//	struct Node* next;	//4/8个字节
//};
//
//typedef struct Rename {
//	int num;
//	char ch;
//}Rename;
//
//
//
//int main() {
//
//	//创建的结构体局部变量
//	//struct Stu s1;
//	//struct Stu s2;
//
//	//合法
//	//psa = &sa;
//
//	//不合法
//	//这里会报出警告，因为编译器会识别出，*p的类型和sa的类型是不同的。虽然都是匿名结构体
//	//而且成员变量也都是相同的，但是他们不是同一个类型的变量
//	//p = &sa;
//
//	Rename n;
//
//	getchar();
//	return 0;
//}
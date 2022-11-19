//#include <stdio.h>

//描述一个学生，一些数据
//名字
//年龄
//电话
//性别
//struct 结构体关键字  Stu -- 结构体标签  struct Stu  -- 
//定义一个结构体类型
//struct Stu {
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;		//s1,s2,s3是三个全局结构体变量，一般很少用这种形式，尽量不用

//typedef的作用就是将一个类型重新取一个名字。
//这里就是将结构体类型重新取名为Stu，使用起来更加方便。
//一般重新取的类型名和结构体名一样
//typedef struct Stu {
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main() {
//
//	//创建结构体变量
//	//结构体变量在创建的同时，并给它赋值，就是结构体初始化操作
//	struct Stu s1 = {"张三",18,"15287878788","男"};		//局部结构体变量
//	Stu s2 = {"王妞",22,"12345678922","女"};
//
//
//	getchar();
//	return 0;
//}

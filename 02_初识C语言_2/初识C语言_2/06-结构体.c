#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//结构体  -- struct   我们自己创造出来的一种类型
//char,int,double...
//人 = 3.14？
//'w'?
//书 - 复杂对象

//名字+身高+年龄+身份证号码...
//书名+作者+出版社+定价...
//复杂对象 -- 结构体 -- 我们自己创造出来的一种类型

//定义一个书的类型
struct Book{
	char name[20];  //C语言程序设计
	short price;    //55
};


int main() {

	//利用结构体类型-创建一个该类型的结构体变量  struct可以省略
	struct Book b1 = { "C语言程序设计",55 };
	printf("书名为：%s\n价格为：%d\n",b1.name,b1.price);
	printf("这本书的价格为：%d元\n", b1.price);
	//b1.name = "C++";   //报错
	//strcpy -- string copy --字符串拷贝 --库函数 <string.h>
	strcpy(b1.name, "C++程序设计");
	b1.price = 15;
	printf("修改后的价格为：%d元\n", b1.price);

	//在.c文件中不能少写struct,而在.cpp文件中可以省略struct;
	struct Book* pd = &b1;
	printf("%p\n", pd);

	//两种方式输出
	// .  结构体变量.成员
	// -> 结构体指针->成员

	printf("%s\n", (*pd).name);
	printf("%d\n", (*pd).price);
	printf("%s\n", pd->name);
	printf("%d\n", pd->price);

	
	getchar();
	return 0;
}
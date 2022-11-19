#include <stdio.h>

typedef struct Stu {
	char name[20];
	int age;
	char tele[12];
	char sex[5];
}Stu;

void print1(Stu tmp) {
	printf("name : %s\n", tmp.name);
	printf("age  : %d\n", tmp.age);
	printf("tele : %s\n", tmp.tele);
	printf("sex  : %s\n", tmp.sex);
}

void print2(Stu *ps) {
	printf("name : %s\n", ps->name);
	printf("age  : %d\n", ps->age);
	printf("tele : %s\n", ps->tele);
	printf("sex  : %s\n", ps->sex);
}

int main() {

	Stu s = { "李四",18,"15297971678","男" };
	//打印结构体数据
	//print1和print2哪个更好
	//print2会更好，因为如果是传值(print1)的方式，就需要重新开辟内存空间
	//而print2是通过传地址方式，指针指向的是同一块内存空间，就不需要重新开辟一块新的内存
	print1(s);
	print2(&s);


	getchar();
	return 0;
}
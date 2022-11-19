#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//数组元素个数
#define MAX 1000
//名字数组元素个数
#define MAX_NAME 20
//性别数组元素个数
#define MAX_SEX 5
//电话数组元素个数
#define MAX_TELE 12
//地址数组元素个数
#define MAX_ADDR 30

enum Option {
	EXIT,	//0
	ADD,	//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};


struct PeoInfo {
	//姓名
	char name[MAX_NAME];
	//年龄
	int age;
	//性别
	char sex[MAX_SEX];
	//电话
	char tele[MAX_TELE];
	//地址
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact {
	//存放一个信息
	struct PeoInfo data[MAX];
	//记录当前已近有的元素个数
	int size;
};

//声明初始化通讯录函数
void InitContact(struct Contact* ps);

//声明增加通讯录函数
void AddContact(struct Contact* ps);

//声明显示信息函数
void ShowContact(const struct Contact* ps);

//删除指定的联系人
void DelContact(struct Contact* ps);

//查找指定人信息
void SearchContact(const struct Contact* ps);

//修改指定联系人
void ModifyContact(struct Contact* ps);

//排序通讯录内容
void SortContact(struct Contact *ps);
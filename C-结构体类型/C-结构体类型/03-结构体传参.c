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

	Stu s = { "����",18,"15297971678","��" };
	//��ӡ�ṹ������
	//print1��print2�ĸ�����
	//print2����ã���Ϊ����Ǵ�ֵ(print1)�ķ�ʽ������Ҫ���¿����ڴ�ռ�
	//��print2��ͨ������ַ��ʽ��ָ��ָ�����ͬһ���ڴ�ռ䣬�Ͳ���Ҫ���¿���һ���µ��ڴ�
	print1(s);
	print2(&s);


	getchar();
	return 0;
}
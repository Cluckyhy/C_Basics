//#include <stdio.h>
//
////����һ���ṹ������
//struct T {
//	double weight;
//	short age;
//};
//
////����һ���ṹ������
//struct S {
//	char c;
//	int num;
//	double d;
//	char arr[20];
//	struct T st;		//�ṹ��������԰����ṹ������
//};
//
//
//int main() {
//
//	//�ṹ���ʼ��
//	//�ṹ����������û�ṹ�����͵ĳ�ʼ��
//	//struct S s = { 's',100,3.14,"Hello bit" };
//	//�ṹ���������нṹ�����͵ĳ�ʼ��
//	struct S s = { 's',100,3.14,"Hello bit" ,{55.6,18} };
//	printf("%c %d %lf %s %lf %d\n", s.c, s.num, s.d, s.arr ,s.st.weight,s.st.age);
//
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//
//
//int main() {
//	
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ��4��������ַ  --  ����ָ������
//	int (*parr[])(int, int) = { Add,Sub,Mul,Div };		//����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		int ret = parr[i](10, 5);
//		printf("%d\n", ret);
//	}
//
//	
//	char* my_strcpy(char* dest, const char* src);
//	//1��дһ������ָ�� pf,�ܹ�ָ��my_strcpy
//	char* (*pf)(char*, const char*);
//	//2��дһ������ָ������ pfArr,�ܹ����4��my_strcpy�����ĵ�ַ
//	char* (*pfArr[4])(char*, const char*);
//
//
//	getchar();
//	return 0;
//}
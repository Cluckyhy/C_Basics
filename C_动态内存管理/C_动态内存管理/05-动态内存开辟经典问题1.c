//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
////�˰���������������
////1�����д���������ֱ���������
////2����������ڴ�й¶����
////str��ֵ���ݵ���ʽ��p
////p��GerMemory()������һ���βΣ�ֻ�ں����ڲ���Ч����GetMemory��������֮�󣬶�̬�ڴ���δ�ͷ�
////�����޷��ҵ������Ի�����ڴ�й¶
//
////�������
////void GetMemory(char* p) {
////	p = (char*)malloc(100);		//����ͻ�����ڴ�й¶���⣬��Ϊһ���������ʽ�����pҲ��û�ˡ���̬�ڴ���δ�ͷ�
////}
//
////�������һ
////void GetMemory(char* *p) {
////	*p = (char*)malloc(100);
////}
//
////���������
//char* GetMemory(char* p) {
//	p = (char*)malloc(100);
//	return p;
//}
//
//
//void Test(void) {
//	char* str = NULL;
//	//GetMemory(str);	//����д��
//	//GetMemory(&str);	//��ȷд��	����һ
//	str = GetMemory(str);	//��ȷд��	������
//	strcpy(str, "Hello World");		//�����ߵ������ͻ��������Ϊstr�����ͻ���NULL����û��ָ����Ч�Ŀռ�
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//
//
//int main() {
//	
//	//char* str = "abcdef";	//�����ǰ�a�ĵ�ַ��ֵ��str;
//	//printf(str);	//���ִ�ӡ�ַ�����д����û�����
//	////��ʵ�ǵȼ���
//	//printf("abcdef");	//�����abcdef���Զ���a�ĵ�ַ���ػ�����
//
//	//�������
//	Test();
//
//	getchar();
//	return 0;
//}
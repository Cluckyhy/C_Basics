//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////�ݹ��������Ҫ����
////1�����������������������������������ʱ�򣬵ݹ�㲻�ټ�����
////2��ÿ�εݹ����֮��Խ��Խ�ӽ��������������
//
//
////void Digui(int n) {
////	if (n > 9) {
////		Digui(n / 10);
////	}
////	printf("%d ", n % 10);
////}
////
////int main() {
////
////	//printf("hehe\n");
////	//����������
////	//���� Stack Overflow
////	//���ǵݹ鳣���Ĵ���ջ���
////	//main();
////
////	unsigned int num = 0;
////	printf("������һ����\n");
////	scanf("%d", &num);
////	Digui(num);
////
////	getchar();
////	getchar();
////	return 0;	
////}
//
//
////int my_strlen(char* pc) {
////	int count = 0;
////	while(*pc!='\0'){
////		count++;
////		pc++;
////	}
////	return count;
////}
//
//
////�ݹ鷽��
//int my_strlen(char* pc) {
//	if (*pc != '\0') {
//		//ע�⣺���ﲻ����д��pc++����������ݹ飬��Ϊ����++����ȡֵ�ټ�1��������ﻹ�Ǵ�ԭ����ֵ��ȥ
//		//����Զ��ԭ�����ַ�������û�������ƣ�
//		//����ֻ����++pc,����pc+1;
//		return 1+my_strlen(++pc);
//	}
//	else {
//		return 0;
//	}
//}
//
//
//
//
//int main() {
//	char ch[] = "chenhuiyi";
//	int len = my_strlen(ch);
//	printf("len = %d\n", len);
//
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//
////�������
//
////һά���鴫��
////void test1(int arr[]) {}		//����
////void test2(int arr[10]) {}	//����ֻ����[10]������д�κ����ֶ����ԣ�д��д��û������
////void test3(int* arr) {}		//����
////
////void test4(int *arr[20]) {}	//���������20��д�ɲ�д
////void test5(int **arr2) {}	//����
//
////��ά���鴫��
////void test6(int arr3[3][5]) {}	//����
////void test7(int arr3[][5]) {}	//����
////void test8(int arr3[3][]) {}		//������
////void test9(int arr3[][]) {}		//������
////void test10(int *arr3) {}			//��������Ϊ���������Ƕ�ά����ĵ�һ�еĵ�ַ������int*ֻ�ܽ���һ��int�����ݵ�ַ
////void test11(int** arr3) {}		//������
//void test12(int (*arr3)[5]) {}		//����
//
//
//
//
//int main() {
//
//	//һά���鴫��
//	//int arr[10] = { 0 };
//	//int* arr2[20] = { 0 };
//	//test(arr);
//	//test2(arr2);
//
//	//��ά���鴫��
//	int arr3[3][5] = { 0 };
//	test12(arr3);
//
//
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//
////һ��ָ�����
////void test01(int *p){}
////void test02(int *p){}
//
////����ָ�����
//void test01(int** P) {}
//void test02(int** p) {}
//void test03(int** P) {}
//
//
//int main() {
//
//	//һ��ָ�봫��
//	//int a = 10;
//	//int* pa = &a;
//	//test01(&a);
//	//test02(pa);
//
//
//	//����ָ�봫��
//	int a = 20;
//	int* pa = &a;
//	int** ppa = &pa;
//	test01(ppa);
//	test02(&pa);
//	int* arr[10];		//ָ�����飬���������ŵ���ָ��
//	test03(arr);
//
//
//
//
//	getchar();
//	return 0;
//}
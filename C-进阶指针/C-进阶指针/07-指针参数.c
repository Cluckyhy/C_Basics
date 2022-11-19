//#include <stdio.h>
//
////一级指针参数
////void test01(int *p){}
////void test02(int *p){}
//
////二级指针参数
//void test01(int** P) {}
//void test02(int** p) {}
//void test03(int** P) {}
//
//
//int main() {
//
//	//一级指针传参
//	//int a = 10;
//	//int* pa = &a;
//	//test01(&a);
//	//test02(pa);
//
//
//	//二级指针传参
//	int a = 20;
//	int* pa = &a;
//	int** ppa = &pa;
//	test01(ppa);
//	test02(&pa);
//	int* arr[10];		//指针数组，数组里面存放的是指针
//	test03(arr);
//
//
//
//
//	getchar();
//	return 0;
//}
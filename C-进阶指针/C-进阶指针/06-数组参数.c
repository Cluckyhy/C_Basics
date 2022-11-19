//#include <stdio.h>
//
////数组参数
//
////一维数组传参
////void test1(int arr[]) {}		//合理
////void test2(int arr[10]) {}	//合理，只不过[10]，里面写任何数字都可以，写不写都没有意义
////void test3(int* arr) {}		//合理
////
////void test4(int *arr[20]) {}	//合理，这里的20可写可不写
////void test5(int **arr2) {}	//合理
//
////二维数组传参
////void test6(int arr3[3][5]) {}	//合理
////void test7(int arr3[][5]) {}	//合理
////void test8(int arr3[3][]) {}		//不合理
////void test9(int arr3[][]) {}		//不合理
////void test10(int *arr3) {}			//不合理，因为传过来的是二维数组的第一行的地址，而用int*只能接收一个int型数据地址
////void test11(int** arr3) {}		//不合理
//void test12(int (*arr3)[5]) {}		//合理
//
//
//
//
//int main() {
//
//	//一维数组传参
//	//int arr[10] = { 0 };
//	//int* arr2[20] = { 0 };
//	//test(arr);
//	//test2(arr2);
//
//	//二维数组传参
//	int arr3[3][5] = { 0 };
//	test12(arr3);
//
//
//	getchar();
//	return 0;
//}
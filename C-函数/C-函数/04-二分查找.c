//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////写一个函数，实现一个整型有序数组的二分查找法
//
//
////当数组以参数的形式传到函数中，在函数里是求不出数组长度的，在函数外将数组长度算出，再把求出的长度以实参传到函数中，
////因为我们传入的数组只是数组的首地址，所以sizeof(arr)只是算出存放一个地址的大小，并不是求出整个数组的大小空间
//void Erfen(int num, int* arr,int len) {
//	//数组长度为：
//	// 注意，在函数体内以这种方式是无法求出数组长度的
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = len - 1;
//	//printf("%d\n", sz);
//	//printf("%d\n", num);
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (num == arr[mid]) {
//			printf("找到了");
//			break;
//		}
//		else if(num>arr[mid]) {
//			left = mid + 1;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//	if (left > right) {
//		printf("很遗憾，未找到你想找的数！");
//	}
//
//}
//void test01() {
//	int array[] = { 1,2,5,7,9,11,56,89,99 };
//	int len = sizeof(array) / sizeof(array[0]);
//	int num = 0;
//	printf("请输入你想查找的数:>\n");
//	scanf("%d", &num);
//	Erfen(num, array, len);
//}
//
//
//int main() {
//
//	test01();
//
//	getchar();
//	getchar();
//	return 0;
//}
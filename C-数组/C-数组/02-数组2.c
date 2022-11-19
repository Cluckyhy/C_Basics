//#include <stdio.h>
//
//
//int main() {
//
//	//char arr[] = "abcdef";
//	////strlen函数返回值是一个无符号的数，可以强制转换一下
//	////一般是这样写才合适
//	//int len = strlen(arr);
//	//for (int i = 0; i < (int)strlen(arr); i++) {
//	//	//printf("%c\n", arr[i]);
//	//	printf("&arr[%d] = %p\n", i, &arr[i]);
//	//}
//
//	//int arr[] = { 1,25,5,9,7,46 };
//	//int len = sizeof(arr) / sizeof(arr[0]);
//	//for (int i = 0; i < len; i++) {
//	//	//printf("%d\n", arr[i]);
//	//	//数组在内存中是连续存放的
//	//	printf("&arr[%d] = %p\n", i, &arr[i]);
//	//}
//
//	//int arr[][4] = { {11,23,4,5},{56,88} };
//
//	int arr[3][4] = { {1,5,9}, {2,4,7},{3,8,78} };
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%p\n", &arr[i][j]);
//		}
//	}
//	printf("\n");
//	int* p = &arr[1][1];
//	printf("%d\n", *p);
//	printf("%d\n", *(p-2));
//
//
//
//	
//	getchar();
//	return 0;
//}
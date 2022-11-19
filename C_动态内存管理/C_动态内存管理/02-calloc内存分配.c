//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//
//int main() {
//
//	//malloc不会将动态申请的空间初始化,效率会更高一点
//	//malloc(10*sizeof(int));
//
//	//calloc会将动态申请的空间默认初始化为0
//	int *p = (int*)calloc(10, sizeof(int));
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态申请的空间
//	free(p);
//	p = NULL;
//
//
//
//	getchar();
//	return 0;
//}
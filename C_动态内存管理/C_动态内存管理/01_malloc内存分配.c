//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//struct S {
//	char name[20];
//	int age;
//};
//
//int main() {
//	
//
//	//struct S arr[50];	//50个struct S 类型的数据
//	//30 - 浪费
//	//60 - 不够
//
//	//向内存申请10个整型的空间
//	int *p = (int*)malloc(10 * sizeof(int));
//	//int *p = (int*)malloc(INT_MAX);			//Not enough space  p==NULL
//	if (p == NULL) {
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++) {
//			printf("%d\n", *(p + i));
//		}
//	}
//
//	//当动态申请的空间不在使用的时候
//	//就应该还给操作系统
//	free(p);
//	//主动将p赋值为NULL
//	p = NULL;
//
//	getchar();
//	return 0;
//}
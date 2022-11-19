//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////realloc 可以用来调整动态开辟内存空间的大小
//
//
//int main() {
//
//	int* p = (int*)malloc(20);
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 5; i++) {
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节的空间
//	//假设这里的20个字节空间不能满足我们的使用了
//	//我们希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//
//	//realloc函数的第一个参数是之前已经开辟成功的内存地址，第二个参数是要开辟的新的内存大小
//	//int* newp = (int*)realloc(p, 40);
//	//p = (int*)realloc(p, 4000);
//
//	//其实realloc开辟新内存是存在两种情况的
//	//第一种就是，如果在p后面有足够大的空间去开辟新内存，直接追加。realloc函数返回的就是原来p的地址
//	//第二种就是，如果在p后面没有足够大的空间去开辟新内存时，realloc函数就会另找一块新的足够大的空间去开辟新内存，
//	//那此时realloc函数先把原来开辟内存空间上的数据先拷贝到新内存空间上，释放旧的内存空间。
//	//最后返回的值就不是原来p的地址了，而是一个新的内存地址
//
//	//得用一个新的变量来接收realloc函数的返回值
//	int* ptr = (int*)realloc(p, INT_MAX);
//
//	if (ptr != NULL) {
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++) {
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++) {
//			printf("%d\n", *(p + i));
//		}
//	}
//
//	//释放内存
//	free(p);
//	p = NULL;
//
//	//其实也可以直接用realloc开辟内存空间
//	int* p2 = (int*)realloc(NULL,40);		//等价与malloc(40);
//
//	getchar();
//	return 0;
//}
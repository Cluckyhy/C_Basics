//#include <stdio.h>
//#include <stdlib.h>
//
//
////struct S {
////	int n;
////	int arr[10];
////};
//
//struct S {
//	int n;
//	//柔性数组一定是在结构体中体现出来的
//	//柔性数组在结构体的最后一个成员可以是-->未知大小的
//	//这就是柔性数组成员，数组的大小是可以调整的
//	int arr[];		//柔性数组成员
//};
//
//
//
//int main() {
//
//	//struct S s;
//	//printf("%d\n", sizeof(s));	//4个字节
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++) {
//		ps->arr[i] = i;		// 0 1 2 3 4
//	}
//
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 10 * sizeof(int));
//	if (ptr != NULL) {
//		ps = ptr;
//	}
//
//	for (i = 5; i < 10; i++) {
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++) {
//		printf("%d\n", ps->arr[i]);
//	}
//	//释放空间
//	free(ps);
//	ps = NULL;
//
//
//	getchar();
//	return 0;
//}
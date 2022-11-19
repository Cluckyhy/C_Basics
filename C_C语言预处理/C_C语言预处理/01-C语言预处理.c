//#include <stdio.h>
//
////预处理选项 gcc -E test.c -o test.i 预处理完成之后就停下来，预处理之后产生的结果都放在test.i文件中
////编译选项 gcc -S test.c 编译完成之后就停下来，结果保存在test.s文件中
////汇编选项 gcc -c test.c 汇编完成之后就停下来，结果保存在test.o文件中
//
//
//extern Add(int x, int y);
//
//int main() {
//
//	//int a = 10;
//	//int b = 20;
//
//	//int arr[10] = { 0 };
//	//int i = 0;
//	//for (i = 0; i < 10; i++) {
//	//	arr[i] = i;
//	//}
//	////打印数组内容
//	//for (i = 0; i < 10; i++) {
//	//	printf("%d ", arr[i]);
//	//}
//	//printf("\n");
//
//	//int c = Add(a, b);
//	//printf("c = %d\n", c);
//
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//
//
//int main() {
//
//	//char a[] = "abcdef";
//	//char* pa = &a;
//	//printf("%s\n", a);
//	//printf("%s\n", pa);
//
//	////其实这里只是把abcdef字符串中的首字母a的地址传给了p
//	////所以这种写法也是正确的
//
//	//char* p = "abcdef";		//"abcdef" 是一个常量字符串
//	//printf("%c\n", *p);
//	//printf("%s\n", p);
//
//	//常量字符串是不允许被修改的
//	//char* p = "abcdef";
//	//*p = 'W';
//	//printf("%s\n", p);
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";	//常量字符串，既然不能修改。在内存中值存了一份，所以和下面的p2指针指向的是同一块内存空间
//	const char* p2 = "abcdef";
//
//	//if (arr1 == arr2) {
//	//	printf("hehe\n");
//	//}
//	//else {
//	//	printf("haha\n");
//	//}
//
//	if (p1 == p2) {
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");
//	}
//
//
//	getchar();
//	return 0;
//}
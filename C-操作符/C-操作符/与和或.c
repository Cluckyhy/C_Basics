//#include <stdio.h>
//
//int main() {
//
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//	//答案为 1 2 3 4
//	//当进行与运算时，一旦发现0，就不会继续进行后面的计算操作了
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//
//	printf("\n");
//
//	i = a++||++b||d++;
//	//答案为 2 2 3 4
//	//当进行或运算时，一旦发现1，就不会继续进行后面的计算操作了
//	printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a, b, c, d);
//
//	getchar();
//	return 0;
//}
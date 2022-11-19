//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////递归的两个必要条件
////1、存在限制条件，当满足这个限制条件的时候，递归便不再继续。
////2、每次递归调用之后越来越接近这个限制条件。
//
//
////void Digui(int n) {
////	if (n > 9) {
////		Digui(n / 10);
////	}
////	printf("%d ", n % 10);
////}
////
////int main() {
////
////	//printf("hehe\n");
////	//最后程序死亡
////	//报错 Stack Overflow
////	//这是递归常见的错误：栈溢出
////	//main();
////
////	unsigned int num = 0;
////	printf("请输入一个数\n");
////	scanf("%d", &num);
////	Digui(num);
////
////	getchar();
////	getchar();
////	return 0;	
////}
//
//
////int my_strlen(char* pc) {
////	int count = 0;
////	while(*pc!='\0'){
////		count++;
////		pc++;
////	}
////	return count;
////}
//
//
////递归方法
//int my_strlen(char* pc) {
//	if (*pc != '\0') {
//		//注意：这里不可以写成pc++，会出现死递归，因为后置++是先取值再加1，如果这里还是传原来的值进去
//		//就永远是原来的字符串，并没有往后移，
//		//所以只能用++pc,或用pc+1;
//		return 1+my_strlen(++pc);
//	}
//	else {
//		return 0;
//	}
//}
//
//
//
//
//int main() {
//	char ch[] = "chenhuiyi";
//	int len = my_strlen(ch);
//	printf("len = %d\n", len);
//
//	getchar();
//	return 0;
//}
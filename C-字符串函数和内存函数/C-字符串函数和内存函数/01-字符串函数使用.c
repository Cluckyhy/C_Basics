//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
////长度不受限制的字符串函数
////strcpy
////strcat
////strcmp
//
//
////1、计数器的方法
////2、递归方法
////3、指针减指针方法
//
//int my_strlen(const char *str) {
//	int count = 0;
//	assert(str != NULL);
//	while (*str) {
//		count++;
//		str++;
//	}
//	return count;
//}
//
//char* my_strcpy(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串的dest指向的空间，包含'\0'
//	while (*dest++ == *src++) {
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//
//char* my_strcat(char* dest,const char* src) {
//	char* ret = dest;
//	assert(dest!=NULL);
//	assert(src);
//	//1、找到目的字符串的'\0'
//	while (*dest) {
//		dest++;
//	}
//	//2、追加
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
////这是VS编译器的写法，大于返回1，小于返回-1
////int my_strcmp(const char* str1, const char* str2) {
////	assert(str1 && str2);
////	//比较
////	while (*str1 == *str2) {
////		if (*str1 == '\0') {
////			return 0;	//相等
////		}
////		str1++;
////		str2++;
////	}
////	if (*str1 > *str2) {
////		return 1;		//大于
////	}
////	else {
////		return -1;		//小于
////	}
////}
//
////而真正大于返回一个大于0的数，小于返回一个小于0的数是进行ASCALL码值进行相减的
//int my_strcmp(const char* str1, const char* str2) {
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2) {
//		if (*str1 == '\0') {
//			return 0;	//相等
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//
//
//int main() {
//
//
//	//strlen
//	//int len1 = strlen("las\0dsf");
//	//错误示范
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//int len2 = strlen(arr);
//	//printf("%d\n", len1);	//3
//	//printf("%d\n", len2);	//随机值
//
//	//注意，strlen()函数返回的是一个size_t类型的数
//	//size_t == unsigned int
//	//一个无符号数 - 一个无符号数 = 一个无符号数
//	//3 - 6 = -3，这里的-3被看成是无符号数，结果是一个大于0的数
//	//if (strlen("abc") - strlen("abcdef")>0) {
//	//	printf("hehe\n");
//	//}
//	//else {
//	//	printf("haha\n");
//	//}
//
//
//	//strcpy
//	////源字符串必须以'\0'结束
//	////会将源字符串中的'\0'拷贝到目标空间中
//	////目标空间必须足够大，以确保能存放源字符串
//	////目标空间必须可变，char *arr = "lala" err，这里的目标空间是不可变的
//	//char arr[] = { 'a','b','c','d','e' };
//	//char arr1[] = "huiyichen";
//	//char arr2[] = "haha";
//	////strcpy(arr1, arr);	//错误示范，arr没有以'\0'结束
//	////注意，strlen函数会把源字符的'\0'拷贝进去目标字符中
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//
//
//	//strcat
//	////源字符串里面必须包含'\0'
//	////目标空间必须足够大，能够容纳下源字符串的内容，而且目标字符串里面也要包含'\0'，因为要在目标字符里追加源字符的话
//	////是从目标字符的第一个'\0'开始往后追加
//	////目标空间必须可修改
//	////字符串自己给自己追加，如何   --  答案是程序会崩溃
//	//char arr1[30] = "hello";
//	//char arr2[] = "huiyi";
//	////程序会崩溃，因为arr1的数组空间是6，再追加字符串到arr1中，会产生越界访问，需要在arr1中定义足够大的空间，比如定义一个30
//	////strcat(arr1, arr2);
//	////把arr1数组的空间改为30后
//	//strcat(arr1, arr2);
//	//my_strcat(arr1,arr2);
//	//printf("%s\n", arr1);
//
//
//	//strcmp
//	//第一个字符串大于第二个字符串，则返回大于0的数字
//	//第一个字符串等于第二个字符串，则返回0
//	//第一个字符串小于第二个字符串，则返回小于0的数字
//	//char* p1 = "abcdef";
//	//char* p2 = "sqwer";
//	//int ret = strcmp(p1, p2);
//	//printf("%d\n", ret);
//	//只有在Visual Studio编译器里面是，大于是1，小于是-1，而在其他编译器产生的值有可能不是。
//	//因为C规定，p1大于p2是返回一个大于0的数，不一定就是1，p1小于p2返回一个小于0的数，不一定就是-1，而p1等于p2的话，就全是0
//	//if (strcmp(p1, p2) == 1) {
//	//	printf("p1>p2\n");
//	//}
//	//else if (strcmp(p1, p2) == 0) {
//	//	printf("p1=p2\n");
//	//}
//	//else if (strcmp(p1, p2) == -1) {
//	//	printf("p1<p2\n");
//	//}
//	//正确写法
//	//if (strcmp(p1, p2) > 0) {
//	//	printf("p1>p2\n");
//	//}
//	//else if (strcmp(p1, p2) == 0) {
//	//	printf("p1=p2\n");
//	//}
//	//else if (strcmp(p1, p2) < 0) {
//	//	printf("p1<p2\n");
//	//}
//
//	char* p1 = "abcdef";
//	char* p2 = "qbqwer";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//
//
//
//
//
//
//
//	getchar();
//	return 0;
//}
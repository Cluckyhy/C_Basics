//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <ctype.h>
//
////strerror;
//
//
//
//int main() {
//
//
//	//错误码  0 1 2...错误信息
//	//0 -- No error
//	//char* str1 = strerror(0);
//	//printf("%s\n", str1);
//	//1 -- Operation not permitted
//	//char* str2 = strerror(1);
//	//printf("%s\n", str2);
//	//No such file or directory
//	//char* str3 = strerror(2);
//	//printf("%s\n", str3);
//
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//	//char* str4 = strerror(errno);
//	
//	////打开文件
//	//FILE* pf = fopen("test.txt", "r");
//	//if (pf == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//}
//	//else {
//	//	printf("打开文件成功！\n");
//	//}
//
//
//
//	//字符分类函数
//	char ch = '@';
//	//如果ch是小写字母，就返回非零数字，不是小写字母就返回0
//	int ret = islower(ch);
//	printf("%d\n", ret);
//
//	int a = '2';
//	//a不是十进制数字0-9返回的是非0数字，不是就返回0
//	int ret2 = isdigit(a);
//	printf("%d\n", ret2);
//
//
//	//字符转换函数
//	char ch2 = 'w';
//	char up = toupper(ch2);
//	char ch3 = tolower('Q');
//	char arr[] = "I AM A STUDENT";
//	int i = 0;
//	while (arr[i]) {
//		if (isupper(arr[i])) {
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	printf("%c\n", up);
//	printf("%c\n",ch3);
//
//
//
//
//	getchar();
//	return 0;
//}
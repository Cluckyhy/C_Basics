//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
////作业二函数
////void left_move(char arr[], int k) {
////	assert(arr);
////	int i = 0;
////	int len = strlen(arr);
////	for (i = 0; i < k; i++) {
////		char temp = *arr;
////		int j = 0;
////		for (j = 0; j <len-1; j++) {
////			arr[j] = arr[j + 1];
////		}
////		arr[len - 1] = temp;
////	}
////}
//
////三步翻转法
////abcdef
////bafedc
////cdefab
////逆序字符串函数
//void reverse(char *left,char* right) {
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right) {
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//void left_move(char arr[],int k) {
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);	//逆序左边
//	reverse(arr+k,arr+len-1);	//逆序右边
//	reverse(arr,arr+len-1);	//逆序整体
//}
////abcdef
////bcdefa
////cdefab
////defabc
////efabcd
////fabcde
//int is_left_move(char* s1,char* s2) {
//	//方法一
//	//int len = strlen(s1);
//	//int i = 0;
//	//for (i = 0; i < len; i++) {
//	//	left_move(s1, 1);
//	//	if (strcmp(s1, s2)==0) {
//	//		return 1;
//	//	}
//	//}
//	
//	//方法二
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2) {
//		return 0;
//	}
//	//1、在s1字符串中追加一个s1字符串
//	//strcat(s1,s1)err，自己追加自己的话，程序会崩溃
//	strncat(s1, s1,len1);	//abcdefabcdef
//	//strstr找子串函数 返回值是字符串中首次出现子串的地址
//	char* ret = strstr(s1, s2);
//	if (ret != NULL) {
//		return 1;
//	}
//	return 0;
//}
//
//
//int main() {
//
//	//作业一
//	//int* fun(int a, int b);		//函数声明
//	////int(*)fun(int a, int b);	//err
//	//int (*fun)(int a, int b);	//函数指针
//	////(int*)fun(int a, int b);	//err
//
//
//	//作业二
//	//实现一个函数，可以左旋字符串的k个字符。
//	//例如
//	//ABCD左旋一个字符得到BCDA
//	//ABCD左旋两个字符得到CDAB
//	//旋转字符串
//
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1) {
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n");
//	}
//
//
//
//	getchar();
//	return 0;
//}
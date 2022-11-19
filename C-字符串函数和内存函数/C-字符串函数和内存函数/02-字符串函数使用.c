//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
////查看文档的时候
////NULL是指空指针
////NUL/Null是指'\0'
//
//
////长度受限制的字符串函数介绍
////strncpy
////strncat
////strncmp
//
//
////查找字符串的实现
//char* my_strstr(const char*p1,const char* p2) {
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	//利用其他指针来进行比较，从而不改变原指针位置
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//
//	if (*p2 == '\0') {
//		return (char*)p1;
//	}
//	
//	while (*cur) {
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1) && (*s2) && (*s1 == *s2)) {
//			s1++;
//			s2++;
//		}
//		if (*s1 == '\0') {
//			return NULL;
//		}
//		if (*s2 == '\0') {
//			return cur;		//找到字符串
//		}
//		cur++;
//	}
//	return NULL;	//找不到字符串
//}
//
//
//
//int main() {
//
//
//	//strncpy	--字符串拷贝
//	
//	////这里会发现问题的，因为这里的arr1数组长度是5，arr2字符串大于5，还是会直接拷贝过去。这是有问题的
//	////char arr1[5] = "hui";
//	////char arr2[] = "lalalla";
//	////strcpy(arr1, arr2);
//	////printf("%s\n", arr1);
//
//	////这里strcpy是会把'\0'拷贝到arr1中的，是会受'\0'的影响的
//	////char arr1[10] = "abcderff";
//	////char arr2[] = "jjdf";
//	////strcpy(arr1, arr2);
//	////printf("%s\n", arr1);
//
//	//char arr1[15] = "abcfdsfds";
//	//char arr2[] = "hui";
//	////这里是不把'\0'拷贝到arr1中的，是不受'\0'影响的
//	////注意，这里如果要拷贝的字符串不足我想要拷贝过去的个数时，会把多余的个数当成'\0'拷贝过去
//	////比如这里我想要拷贝arr2字符串中的5个字符过去的话，而我arr2数组中只有3个字符，不够，所以这里会把2个'\0'拷贝到arr1中，所以输出的只是hui
//	////总结：如果源字符串的长度小于num,则拷贝完源字符串之后，在目标的后面追加0，直到num个
//	//strncpy(arr1, arr2, 5);
//	//printf("%s\n", arr1);
//	
//
//	//strncat	--字符串追加
//	
//	//char arr1[30] = "hello\0xxxxxxxxxxxxx";
//	//char arr2[] = "huiyi";
//	////是会把'\0'追加到arr1数组中的，并且不管你给我限制的个数是多少，最后只追加一个'\0'，也就是说，当strncat(arr1,arr2,8)
//	////写成这个样子，也是把huiyi追加到arr1数组中后，在最后追加一个'\0'，和strncpy()函数不一样，strncpy()函数是指定了多少个数字
//	////就在arr1数组后面拷贝'\0'直到达到了要求个数
//	//strncat(arr1, arr2,8);
//	//printf("%s\n", arr1);
//
//
//	//strcmp	--字符串比较
//	//const char* p1 = "abczzef";
//	//const char* p2 = "abcqwer";
//	////返回-1
//	////int ret = strcmp(p1, p2);
//	////返回0
//	////int ret = strncmp(p1, p2,3);
//	////返回1
//	//int ret = strncmp(p1, p2, 4);
//	//printf("%d\n", ret);
//
//
//	//strstr	--查找字符串
//	//char* p1 = "abcdefxxxxdef";
//	//char* p2 = "def";
//	//返回的是在p1中第一次出现的地址，例如下面返回的是p1+3的那个d的地址而不是后面那个def的d的地址
//	//char* ret = strstr(p1, p2);
//	//printf("%p\n", ret);
//	//printf("%p\n", p1+3);
//	//if (ret == NULL) {
//	//	printf("不存在子串\n");
//	//}
//	//else {
//	//	printf("%s\n", ret);
//	//}
//	
//	//自己实现
//	char* p1 = "abbbcdef";
//	char* p2 = "bcd";
//	char* ret = my_strstr(p1, p2);
//	printf("%p\n", ret);
//	printf("%p\n", p1+3);
//	if (ret == NULL) {
//		printf("不存在子串\n");
//	}
//	else {
//		printf("%s\n", ret);
//	}
//
//
//
//
//
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//
////strtok的用法
//
////点分十进制的表示方法
////192.168.31.121
////192 168 31 121
////chy@qq.com
////chy qq com
//
//
//int main() {
//
//	char arr[] = "chy@qq.com";
//	//char arr[] = "192.168.31.@..121";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//
//	//挫代码
//	////切割buf中的字符串
//	//char* ret = strtok(buf, p);
//	//printf("%s\n", ret);
//	////第二个串开始，strtok的第一个参数是NULL
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	////第三个串开始
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//正规写法
//	for (ret = strtok(buf, p); ret != NULL;ret = strtok(NULL,p)) {
//		printf("%s\n", ret);
//	}
//	//buf已近被改变了
//	printf("%s\n", buf);
//	
//
//
//
//	getchar();
//	return 0;
//}
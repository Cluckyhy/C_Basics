//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////对比以下一组函数
////	scanf/fscanf/sscanf
////	printf/fprintf/sprintf
//
////scanf/printf		是针对标准输入流/标准输出流的 格式化输入/输出语句
////fscanf/fprintf	是针对所有输入流/所有输出流的 格式化输入/输出语句
////sscanf/sprintf	把sscanf是从字符串中读取格式化的数据，sprintf是把格式化数据输出成（存储到）字符串
//
//struct S {
//	int n;
//	float score;
//	char arr[10];
//};
//
//
//int main() {
//
//
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//
//
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//把格式化的数据转换成字符串存储到buf
//	//printf("%s\n", buf);
//
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//
//	getchar();
//	return 0;
//}
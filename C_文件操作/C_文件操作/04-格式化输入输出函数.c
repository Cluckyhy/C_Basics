//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
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
//	//格式化形式放数据
//	//	struct S s = { 100,3.14f,"hello" };
//	//	FILE* pf = fopen("test.txt", "w");
//	//	if (pf == NULL) {
//	//		printf("%s\n", strerror(errno));
//	//		return 0;
//	//	}
//	//	//格式化的形式写文件
//	//	fprintf(pf,"%d %f %s",s.n, s.score, s.arr);
//	//
//	//
//	//	//关闭文件
//	//	fclose(pf);
//	//	pf = NULL;
//
//
//	//格式化形式读取数据
//
//	//struct S s = { 0 };
//	//FILE* pf = fopen("test.txt", "r");
//	//if (pf == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//
//	////格式化形式读取数据
//	//fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	//printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	////关闭文件
//	//fclose(pf);
//	//pf = NULL;
//
//
//	//适用于标准输入输出流
//	struct S s = { 0 };
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//
//
//	getchar();
//	return 0;
//}
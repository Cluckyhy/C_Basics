//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//
//
//	//打开文件test.txt
//	//相对路径
//	//.. 表示上一级路径
//	//.  表示当前路径
//	//fopen("..\..\test.txt","r");
//	//fopen("test.txt","r");
//
//	//绝对路径
//	//fopen("D:\江西财经大学第一学期\C学习\代码\C_文件操作","r");
//
//	//FILE* pf = fopen("test.txt", "r");
//	//if (pf == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//}
//
//	////打开成功
//	////读文件
//	////关闭文件
//	//fclose(pf);
//	//pf = NULL;
//
//	//FILE* pfWrite = fopen("TEST.txt", "w");
//	//if (pfWrite == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//	////写文件
//	//fputc('h', pfWrite);
//	//fputc('u', pfWrite);
//	//fputc('i', pfWrite);
//
//	////关闭文件
//	//fclose(pfWrite);
//	//pfWrite = NULL;
//
//	//读文件
//	//FILE* pfRead = fopen("TEST.txt", "r");
//	//if (pfRead == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//	//printf("%c", fgetc(pfRead));	//h
//	//printf("%c", fgetc(pfRead));	//u
//	//printf("%c", fgetc(pfRead));	//i
//	////关闭文件
//	//fclose(pfRead);
//	//pfRead = NULL;
//
//
//	//从键盘输入
//	//输出到屏幕
//	//键盘&屏幕都是外部设备
//	//
//	//键盘-标准输入设备	-stdin
//	//键盘-标准输出设备	-stdout
//	//是一个程序默认打开的两个设备
//
//	//stdin FILE*
//	//stdout FILE*
//	//stderr FILE*
//
//	//int ch = fgetc(stdin);
//	//fputc(ch, stdout);
//
//
//	////读取一行数据
//	//char buf[1024] = { 0 };
//	//FILE* pf = fopen("TEST.txt", "r");
//	//if (pf == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//	////读取文件
//	//fgets(buf, 1024, pf);
//	////printf("%s", buf);	//这里的fgets会把文件里面的hui后面的换行符读取进去，所以这里会自己有一个换行符。
//	//puts(buf);				//puts函数不管读取出来的数据有没有换行符，在最后都会自己加上一个换行符，所以这里会有两个换行符
//
//	//fgets(buf, 1024, pf);
//	////printf("%s", buf);
//	//puts(buf);				//这里也会有一个换行符
//
//	////关闭文件
//	//fclose(pf);
//	//pf = NULL;
//
//	//写入一行数据
//	//char buf[1024] = "hello";
//	//FILE* pf = fopen("TEST.txt", "w");
//	//if (pf == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//	////写入文件
//	//fputs("hello\n", pf);	//需要自己加上换行符，不然不会有换行
//	//fputs("world\n", pf);
//
//	////关闭文件
//	//fclose(pf);
//	//pf = NULL;
//
//	
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf,1024,stdin);	//从标准输入读取
//	//fputs(buf, stdout);		//输出到标准输出流
//
//	//等价于
//	gets(buf);
//	puts(buf);
//
//
//	
//	getchar();
//	return 0;
//}
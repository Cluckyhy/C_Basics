//#include <stdio.h>
//
//
//
//int main() {
//
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	//&a写的内容的地址，4为4个字节，1为个数，pf为写到哪个地方去
//	fwrite(&a, 4, 1, pf);	//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//
//
//	getchar();
//	return 0;
//}
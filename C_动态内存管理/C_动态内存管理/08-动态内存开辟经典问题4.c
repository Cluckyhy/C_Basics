#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�Ƿ������ڲ�


void Test() {
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);				//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL

	str = NULL;				//����Ĺؼ�

	if (str != NULL) {
		strcpy(str, "world");
		printf(str);
	}
}



int main() {

	Test();


	getchar();
	return 0;
}
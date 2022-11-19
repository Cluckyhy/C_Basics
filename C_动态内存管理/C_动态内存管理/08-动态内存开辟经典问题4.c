#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//非法访问内部


void Test() {
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);				//free释放str指向的空间后，并不会把str置为NULL

	str = NULL;				//本题的关键

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
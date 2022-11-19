#include <stdio.h>
#include <string.h>

//内存设置


int main() {

	char arr[10] = "";
	memset(arr, '#', 10);

	//arr2中占40个字节
	//01 01 01 01 / 01 01 01 01 / 01 01 00 00.....
	int arr2[10] = {0};
	memset(arr2, 1, 10);


	getchar();
	return 0;
}
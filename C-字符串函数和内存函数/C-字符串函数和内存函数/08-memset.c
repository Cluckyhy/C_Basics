#include <stdio.h>
#include <string.h>

//�ڴ�����


int main() {

	char arr[10] = "";
	memset(arr, '#', 10);

	//arr2��ռ40���ֽ�
	//01 01 01 01 / 01 01 01 01 / 01 01 00 00.....
	int arr2[10] = {0};
	memset(arr2, 1, 10);


	getchar();
	return 0;
}
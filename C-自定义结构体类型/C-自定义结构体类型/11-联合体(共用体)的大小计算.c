#include <stdio.h>

//1��������Ĵ�С����������Ա�Ĵ�С
//2��������Ա��С����������������������ʱ�򣬾�Ҫ���뵽����������������


union Un {
	int a;			//4 8 4
	char arr[5];	//5 1 8 1
};


int main() {

	union Un u;
	printf("%d\n", sizeof(u));	//8���ֽ�


	getchar();
	return 0;
}
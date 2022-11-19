#include <stdio.h>

//1、联合体的大小至少是最大成员的大小
//2、当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数整数倍。


union Un {
	int a;			//4 8 4
	char arr[5];	//5 1 8 1
};


int main() {

	union Un u;
	printf("%d\n", sizeof(u));	//8个字节


	getchar();
	return 0;
}
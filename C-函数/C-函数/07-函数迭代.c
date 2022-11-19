#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//int Func1(int num) {
//	int ret = 1;
//	for (int i = 1; i <= num; i++) {
//		ret *= i;
//	}
//	return ret;
//}

int Func2(int num) {
	if (num<=1) {
		return 1;
	}
	else{
		return num * Func2(num - 1);
		
	}
}


int main() {

	//int num = 0;
	//scanf("%d", &num);
	////int ret = Func1(num);
	//int ret = Func2(num);
	//printf("%d\n", ret);


	getchar();
	return 0;
}
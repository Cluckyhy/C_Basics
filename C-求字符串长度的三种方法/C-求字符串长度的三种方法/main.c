#include <stdio.h>
#include <assert.h>

//第一种：
//直接使用库函数，strlen(传入一个字符串);
//第二种：(递归)
//Mystrlen1();
//第三种：(指针-指针)
//Mystrlen2();

int Mystrlen1(char *str) {
	if (*str != '\0') {
		return 1 + Mystrlen1(++str);
	}
	else {
		return 0;
	}
}

int Mystrlen2(char *str) {
	char* star = str;
	char* end = str;
	while (*end != '\0') {
		end++;
	}
	return end - star;  //元素个数
}

//在参数里加上const修饰，保证传进来的字符不被修改
int Mystrlen3(const char* str) {
	int count = 0;
	//断言，保证指针的有效性
	assert(&str!=NULL);
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}



int main() {

	char arr[] = "huiyi";
	int len1 = Mystrlen1(arr);
	printf("%d\n", len1);
	int len2 = Mystrlen2(arr);
	printf("%d\n", len2);
	int len3 = Mystrlen3(arr);
	printf("%d\n", len3);


	getchar();
	return 0;
}
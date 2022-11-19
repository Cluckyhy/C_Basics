#include <stdio.h>
#include <assert.h>

//void my_strcpy(char* dest, char* src) {
//	while (*src != '\0') {
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//优化方案
//这里是通过'\0'的ASCALL码值为0，可以作为循环语句的判断条件，跳出循环
//void my_strcpy(char* dest, char* src) {
//	if (dest!=NULL&&src!=NULL)
//	{
//		while (*dest++ = *src++) {
//			;
//		}
//	}
//}

//完美的代码
char* my_strcpy(char* dest, const char* src) {
	char* ret = dest;
	assert(dest!=NULL);	//断言
	assert(src!=NULL);	//断言
	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
	while (*dest++ = *src++) {
		;
	}
	return ret;
}


int main() {

	char arr1[] = "****************";
	char arr2[] = "huiyi";
	//strcpy(arr1, arr2);
	//注意strcpy，会把arr2中的'\0'也赋值到arr1中，所以其实arr1中后面还有*号，只不过
	//当识别到'\0'时，就直接不识别后面的字符了，所以只打印了huiyi。

	//实现自己的my_strcpy()函数
	//my_strcpy(arr1, arr2);
	my_strcpy(arr1,NULL);

	printf("%s\n", arr1);

	getchar();
	return 0;
}
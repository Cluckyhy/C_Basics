//#include <stdio.h>
//
////1、strlen 和 sizeof没有任何联系
////2、strlen 是求字符串长度的，只能针对字符求长度  -- 库函数--使用时需要引用头文件
////3、sizeof 计算变量、数组、类型的大小--单位是字节  --操作符
//
//
//
//
//int main() {
//
//	int arr[10] = { 1,2,3 };
//	char arr2[5] = { 'a','b','c' };   //有三个字符，其余为0
//	char arr3[5] = "abc";			  //存放了4个元素，还有一个'\0';
//	char arr4[] = "abcdef";           //其实数组里是有7个元素
//	//sizeof 计算arr4所占空间的大小
//	//7个元素 -- char 7*1 = 7
//	printf("%d\n", sizeof(arr4));     //7，一个字符占一个字节
//	//strlen -- 求字符串长度 -- '\0'之前的字符个数
//	//{a,b,c,d,e,f,'\0'}
//	//6，'\0'不算在字符长度里面，strlen只要读取到'\0'，就停止
//	printf("%d\n", strlen(arr4));     //6
//
//	char arr5[] = "abc";
//	char arr6[] = { 'a','b','c'};
//	printf("%d\n", sizeof(arr5));
//	printf("%d\n", sizeof(arr6));
//	printf("%d\n", strlen(arr5));
//	printf("%d\n", strlen(arr6));   //随机值
//
//
//
//	getchar();
//	return 0;
//}
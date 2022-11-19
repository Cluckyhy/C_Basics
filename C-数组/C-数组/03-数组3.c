#include <stdio.h>

int main() {

	int arr[] = { 99,2,3,4,5,6 };
	//两个地方的arr不是数组首地址,除了下面两种情况，其他所有情况数组名都表示数组元素的首地址
	//1、注意：sizeof(数组名)--数组名表示的是整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", len);
	//2、&数组名，数组名代表的是整个数组，&数组名，取出的是整个数组的地址
	printf("%p\n", &arr);



	//数组名就是数组的首地址
	printf("%p\n", arr);
	printf("%p\n", &arr[0]);
	//printf("%d\n", *arr);
	//注意这里的值虽然同上面两个相同，但是这里是整个数组的地址
	printf("%p\n", &arr);

	printf("\n");

	//验证
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", &arr);
	//输出发现下面的值直接跳过了24个字节，也就是整个数组的大小 6*4 = 24;
	printf("%p\n", &arr+1);

	


	getchar();
	return 0;
}
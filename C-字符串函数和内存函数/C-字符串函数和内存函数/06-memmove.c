//#include <stdio.h>
//#include <assert.h>
//
//
////自己模仿实现memmove函数
//void* my_memmove(void* dest, const void* src, size_t count) {
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src) {
//		//从前——>后
//		while (count--) {
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else {
//		//从后——>前
//		while (count--) {
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//
//	return ret;
//}
//
//
//
//int main() {
//
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//自己写的my_memcpy不能胜任重叠拷贝的
//	//my_memcpy(arr3 + 2, arr3, 20);
//	//memmove可以胜内存的重叠拷贝
//	//memmove(arr3+2,arr3,20);
//	//C语言标准说：memcpy函数可以拷贝不重叠的就可以了
//	//当下发现：Vs2019环境下的memcpy可以处理重叠拷贝
//	//memcpy(arr3 + 2, arr3, 20);
//
//	//my_memmove(arr3 + 2, arr3, 20);
//	my_memmove(arr3, arr3 + 2, 20);
//
//
//	getchar();
//	return 0;
//}
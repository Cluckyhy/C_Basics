//#include <stdio.h>
//
////数组指针	--	指向数组的指针
////函数指针	--	指向函数的指针	--	存放函数地址的一个指针
//
//int Add(int x, int y) {
//	int z = x + y;
//	return z;
//}
//
//void Print1(char* str) {
//	printf("%s\n", str);
//}
//
//
//
//int main() {
//
//	//int a = 10;
//	//int b = 20;
//	////printf("%d\n", Add(a, b));
//	//
//	////在函数里面，&函数名和函数名 是一样的
//
//	//printf("%p\n", Add);
//	//printf("%p\n", &Add);
//
//	////函数指针
//	int (*pa)(int,int) = Add;
//	//其实下面pa前的*号是摆设，有和没有都是可以的
//	printf("%d\n", pa(3, 5));
//	printf("%d\n", (*pa)(3, 5));
//	printf("%d\n", (**pa)(3, 5));
//	printf("%d\n", (***pa)(3, 5));
//
//	//void (*ptr)(char*) = Print1;
//	//(*ptr)("简直不要太秒");
//
//	//代码一
//	//下面是一次函数调用	(*(  void(*)()  )0)();
//	//把0强制转换为void(*)()的函数指针类型，0就成了一个函数的地址
//	//*解引用后，加上()，就是在调用0地址处的函数
//	//(*(void (*)())0)();
//
//	////代码二
//	////下面是一个函数的声明  放回值类型是函数指针void(*)int  函数名和参数signal(  int  ,  void (*)(int)  )
//
//	//void(*signal(int,void(*)(int)))(int);
//
//	////下面两句合起来就是上面的意思
//	//typedef void(* pfun_t )(int);
//	////所以可以简化为：
//	//pfun_t signal(int,pfun_t);
//
//
//
//
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//
//int * test() {
//	int a = 10;
//	return &a;
//}
//
//
//int main() {
//
//	//1、情况一
//	//指针未被初始化
//	//int a;  //局部变量不初始化，默认是随机值
//	//int* p;   //局部的指针变量，不初始化，就被初始化为随机值  --> 野指针
//
//	//2、情况二
//	//指针越界访问
//	//int arr[10] = { 0 };
//	//int* p = arr;
//	//for (int i = 0; i < 12; i++) {
//	//	//数组只要10个元素，而循环了12次
//	//	//当指针指向的范围超出数组arr的范围时，p就是野指针
//	//	*(p++) = i;
//	//}
//
//	//3、情况三
//	//指针指向的空间释放
//	int *p = test();
//	//以下代码很危险，是一个野指针，因为，当test()调用完成后，就会释放a的空间，但是p还是指向那块地址，而里面的内容
//	//就不知道是存放了什么东西，如果随意改动的话，就会引发不可收拾的危险
//	*p = 20; 
//
//
//	//如何避免野指针出现
//	//1、指针初始化
//	//2、小心指针越界
//	//3、指针指向空间释放即使置为NULL
//	//4、指针使用之前检查有效性
//	
//	
//
//	getchar();
//	return 0;
//}
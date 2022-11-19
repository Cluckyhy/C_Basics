//#include <stdio.h>
//#include <stdlib.h>
//#include <string>
//
//void bubble_sort(int arr[], int len) {
//	int i = 0;
//	for (i = 0; i < len - 1; i++) {
//		int j = 0;
//		for (j = 0; j < len - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//struct Stu {
//	char name[20];
//	int age;
//};
//
////整型比较
//int cmp_int(const void*e1,const void*e2) {
//	return *(int*)e1 - *(int*)e2;
//}
////浮点型比较
//int cmp_float(const void*e1, const void*e2) {
//	//return *(int*)e1 - *(int*)e2;
//	return ((int)*(float*)e1 - (int)*(float*)e2);
//}
////结构体类型中的年龄比较
//int cmp_stu_age(const void*e1,const void*e2){
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
////结构体类型中的姓名比较
//int cmp_stu_name(const void*e1, const void*e2) {
//	//比较名字就是比较字符串
//	//字符串比较不能直接用><=来比较，应该用strcmp库函数
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//
//
//int main() {
//
//	//int a = 0x11223344;
//	//void* pa = &a;
//	//char* ca = &a;
//	////int* ia = &a;
//	////*ca = 0;
//	////pa++		//void*类型的指针不能进行+-整数的操作
//	////*pa = 0;	//viod*类型的指针，不能进行解引用操作的，因为是void类型，编译器根本不知道需要访问几个字节
//	//*ca = 0;
//	//printf("%d\n", a);
//
//
//	int arr[10] = { 9,5,8,7,3,6,4,0,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	struct Stu s[3] = { {"张三",20},{"李四",30},{"王五",10}};
//	int slen = sizeof(s) / sizeof(s[0]);
//
//	float f[] = { 9.0,5.0,3.0,4.5,9.9,1.2 };
//	int flen = sizeof(f) / sizeof(f[0]);
//
//
//
//	//第一个参数：待排序数组的首元素地址
//	//第二个参数：待排序数组的元素个数
//	//第三个参数：待排序数组的每个元素的大小-单位是字节
//	//第四个参数：是函数指针，比较两个数组的所用函数的地址，这个函数使用者自己实现
//	//			 函数指针的两个参数是：待比较的两个元素的地址
//	qsort(arr,len,sizeof(arr[0]),cmp_int);
//	qsort(f, flen, sizeof(f[0]), cmp_float);
//	qsort(s, slen, sizeof(s[0]), cmp_stu_age);
//	qsort(s, slen, sizeof(s[0]), cmp_stu_name);
//
//	//bubble_sort(arr,len);
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	
//	printf("\n");
//
//	for (i = 0; i < flen; i++) {
//		printf("%f ", f[i]);
//	}
//
//	printf("\n");
//	
//	for(i = 0;i<slen;i++){
//		printf("%d ", s[i].age);
//	}
//
//	printf("\n");
//
//	for (i = 0; i < slen; i++) {
//		printf("%s ", s[i].name);
//	}
//
//	getchar();
//	return 0;
//}
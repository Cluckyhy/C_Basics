//#include <stdio.h>
//
//struct Stu {
//	char name[20];
//	int age;
//};
//
//void Swap(char* buf1,char* buf2,int width) {
//	int i = 0;
//	for (i = 0; i < width; i++) {
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//int cmp_int(const void*e1,const void*e2) {
//	return *(int*)e1 - *(int*)e2;
//}
//int cmp_stu_age(const void* e1, const void* e2) {
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_stu_name(const void* e1, const void* e2) {
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//
//
////实现bubble_sort函数的程序员，他是否知道未来排序的数据类型-不知道
////那程序员也不知道，待比较的两个元素的类型
//void bubble_sort(void *base,int len,int width,int(*cmp)(void*e1,void*e2)) {
//	int i = 0;
//	//趟数
//	for (i = 0; i < len - 1; i++) {
//		int j = 0;
//		//每一趟交换对数
//		for (j = 0; j < len - 1 - i; j++) {
//			//两元素的比较
//			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0){
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void test1() {
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
//	bubble_sort(arr,len,sizeof(arr[0]),cmp_int);
//}
//void test2() {
//	struct Stu s[3] = { {"张三",30},{"李四",20},{"王五",22}};
//	int len = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s,len,sizeof(s[0]),cmp_stu_age);
//	bubble_sort(s, len, sizeof(s[0]), cmp_stu_name);
//}
//
//
//
//int main() {
//
//	//test1();
//	test2();
//
//
//	getchar();
//	return 0;
//}
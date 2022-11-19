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
////ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
//void bubble_sort(void *base,int len,int width,int(*cmp)(void*e1,void*e2)) {
//	int i = 0;
//	//����
//	for (i = 0; i < len - 1; i++) {
//		int j = 0;
//		//ÿһ�˽�������
//		for (j = 0; j < len - 1 - i; j++) {
//			//��Ԫ�صıȽ�
//			if(cmp((char*)base+j*width,(char*)base+(j+1)*width)>0){
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void test1() {
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bubble_sort(arr,len,sizeof(arr[0]),cmp_int);
//}
//void test2() {
//	struct Stu s[3] = { {"����",30},{"����",20},{"����",22}};
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
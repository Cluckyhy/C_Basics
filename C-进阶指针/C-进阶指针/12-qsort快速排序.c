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
////���ͱȽ�
//int cmp_int(const void*e1,const void*e2) {
//	return *(int*)e1 - *(int*)e2;
//}
////�����ͱȽ�
//int cmp_float(const void*e1, const void*e2) {
//	//return *(int*)e1 - *(int*)e2;
//	return ((int)*(float*)e1 - (int)*(float*)e2);
//}
////�ṹ�������е�����Ƚ�
//int cmp_stu_age(const void*e1,const void*e2){
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
////�ṹ�������е������Ƚ�
//int cmp_stu_name(const void*e1, const void*e2) {
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp�⺯��
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
//	////pa++		//void*���͵�ָ�벻�ܽ���+-�����Ĳ���
//	////*pa = 0;	//viod*���͵�ָ�룬���ܽ��н����ò����ģ���Ϊ��void���ͣ�������������֪����Ҫ���ʼ����ֽ�
//	//*ca = 0;
//	//printf("%d\n", a);
//
//
//	int arr[10] = { 9,5,8,7,3,6,4,0,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	struct Stu s[3] = { {"����",20},{"����",30},{"����",10}};
//	int slen = sizeof(s) / sizeof(s[0]);
//
//	float f[] = { 9.0,5.0,3.0,4.5,9.9,1.2 };
//	int flen = sizeof(f) / sizeof(f[0]);
//
//
//
//	//��һ���������������������Ԫ�ص�ַ
//	//�ڶ��������������������Ԫ�ظ���
//	//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//	//���ĸ��������Ǻ���ָ�룬�Ƚ�������������ú����ĵ�ַ���������ʹ�����Լ�ʵ��
//	//			 ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
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
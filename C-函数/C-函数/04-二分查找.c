//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////дһ��������ʵ��һ��������������Ķ��ֲ��ҷ�
//
//
////�������Բ�������ʽ���������У��ں��������󲻳����鳤�ȵģ��ں����⽫���鳤��������ٰ�����ĳ�����ʵ�δ��������У�
////��Ϊ���Ǵ��������ֻ��������׵�ַ������sizeof(arr)ֻ��������һ����ַ�Ĵ�С�������������������Ĵ�С�ռ�
//void Erfen(int num, int* arr,int len) {
//	//���鳤��Ϊ��
//	// ע�⣬�ں������������ַ�ʽ���޷�������鳤�ȵ�
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = len - 1;
//	//printf("%d\n", sz);
//	//printf("%d\n", num);
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (num == arr[mid]) {
//			printf("�ҵ���");
//			break;
//		}
//		else if(num>arr[mid]) {
//			left = mid + 1;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//	if (left > right) {
//		printf("���ź���δ�ҵ������ҵ�����");
//	}
//
//}
//void test01() {
//	int array[] = { 1,2,5,7,9,11,56,89,99 };
//	int len = sizeof(array) / sizeof(array[0]);
//	int num = 0;
//	printf("������������ҵ���:>\n");
//	scanf("%d", &num);
//	Erfen(num, array, len);
//}
//
//
//int main() {
//
//	test01();
//
//	getchar();
//	getchar();
//	return 0;
//}
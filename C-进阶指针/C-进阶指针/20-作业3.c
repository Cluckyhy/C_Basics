//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
////��ҵ������
////void left_move(char arr[], int k) {
////	assert(arr);
////	int i = 0;
////	int len = strlen(arr);
////	for (i = 0; i < k; i++) {
////		char temp = *arr;
////		int j = 0;
////		for (j = 0; j <len-1; j++) {
////			arr[j] = arr[j + 1];
////		}
////		arr[len - 1] = temp;
////	}
////}
//
////������ת��
////abcdef
////bafedc
////cdefab
////�����ַ�������
//void reverse(char *left,char* right) {
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right) {
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//void left_move(char arr[],int k) {
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);	//�������
//	reverse(arr+k,arr+len-1);	//�����ұ�
//	reverse(arr,arr+len-1);	//��������
//}
////abcdef
////bcdefa
////cdefab
////defabc
////efabcd
////fabcde
//int is_left_move(char* s1,char* s2) {
//	//����һ
//	//int len = strlen(s1);
//	//int i = 0;
//	//for (i = 0; i < len; i++) {
//	//	left_move(s1, 1);
//	//	if (strcmp(s1, s2)==0) {
//	//		return 1;
//	//	}
//	//}
//	
//	//������
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2) {
//		return 0;
//	}
//	//1����s1�ַ�����׷��һ��s1�ַ���
//	//strcat(s1,s1)err���Լ�׷���Լ��Ļ�����������
//	strncat(s1, s1,len1);	//abcdefabcdef
//	//strstr���Ӵ����� ����ֵ���ַ������״γ����Ӵ��ĵ�ַ
//	char* ret = strstr(s1, s2);
//	if (ret != NULL) {
//		return 1;
//	}
//	return 0;
//}
//
//
//int main() {
//
//	//��ҵһ
//	//int* fun(int a, int b);		//��������
//	////int(*)fun(int a, int b);	//err
//	//int (*fun)(int a, int b);	//����ָ��
//	////(int*)fun(int a, int b);	//err
//
//
//	//��ҵ��
//	//ʵ��һ�����������������ַ�����k���ַ���
//	//����
//	//ABCD����һ���ַ��õ�BCDA
//	//ABCD���������ַ��õ�CDAB
//	//��ת�ַ���
//
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1) {
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n");
//	}
//
//
//
//	getchar();
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
////���Ȳ������Ƶ��ַ�������
////strcpy
////strcat
////strcmp
//
//
////1���������ķ���
////2���ݹ鷽��
////3��ָ���ָ�뷽��
//
//int my_strlen(const char *str) {
//	int count = 0;
//	assert(str != NULL);
//	while (*str) {
//		count++;
//		str++;
//	}
//	return count;
//}
//
//char* my_strcpy(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ == *src++) {
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//char* my_strcat(char* dest,const char* src) {
//	char* ret = dest;
//	assert(dest!=NULL);
//	assert(src);
//	//1���ҵ�Ŀ���ַ�����'\0'
//	while (*dest) {
//		dest++;
//	}
//	//2��׷��
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
////����VS��������д�������ڷ���1��С�ڷ���-1
////int my_strcmp(const char* str1, const char* str2) {
////	assert(str1 && str2);
////	//�Ƚ�
////	while (*str1 == *str2) {
////		if (*str1 == '\0') {
////			return 0;	//���
////		}
////		str1++;
////		str2++;
////	}
////	if (*str1 > *str2) {
////		return 1;		//����
////	}
////	else {
////		return -1;		//С��
////	}
////}
//
////���������ڷ���һ������0������С�ڷ���һ��С��0�����ǽ���ASCALL��ֵ���������
//int my_strcmp(const char* str1, const char* str2) {
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2) {
//		if (*str1 == '\0') {
//			return 0;	//���
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//
//
//int main() {
//
//
//	//strlen
//	//int len1 = strlen("las\0dsf");
//	//����ʾ��
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//int len2 = strlen(arr);
//	//printf("%d\n", len1);	//3
//	//printf("%d\n", len2);	//���ֵ
//
//	//ע�⣬strlen()�������ص���һ��size_t���͵���
//	//size_t == unsigned int
//	//һ���޷����� - һ���޷����� = һ���޷�����
//	//3 - 6 = -3�������-3���������޷������������һ������0����
//	//if (strlen("abc") - strlen("abcdef")>0) {
//	//	printf("hehe\n");
//	//}
//	//else {
//	//	printf("haha\n");
//	//}
//
//
//	//strcpy
//	////Դ�ַ���������'\0'����
//	////�ὫԴ�ַ����е�'\0'������Ŀ��ռ���
//	////Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
//	////Ŀ��ռ����ɱ䣬char *arr = "lala" err�������Ŀ��ռ��ǲ��ɱ��
//	//char arr[] = { 'a','b','c','d','e' };
//	//char arr1[] = "huiyichen";
//	//char arr2[] = "haha";
//	////strcpy(arr1, arr);	//����ʾ����arrû����'\0'����
//	////ע�⣬strlen�������Դ�ַ���'\0'������ȥĿ���ַ���
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//
//
//	//strcat
//	////Դ�ַ�������������'\0'
//	////Ŀ��ռ�����㹻���ܹ�������Դ�ַ��������ݣ�����Ŀ���ַ�������ҲҪ����'\0'����ΪҪ��Ŀ���ַ���׷��Դ�ַ��Ļ�
//	////�Ǵ�Ŀ���ַ��ĵ�һ��'\0'��ʼ����׷��
//	////Ŀ��ռ������޸�
//	////�ַ����Լ����Լ�׷�ӣ����   --  ���ǳ�������
//	//char arr1[30] = "hello";
//	//char arr2[] = "huiyi";
//	////������������Ϊarr1������ռ���6����׷���ַ�����arr1�У������Խ����ʣ���Ҫ��arr1�ж����㹻��Ŀռ䣬���綨��һ��30
//	////strcat(arr1, arr2);
//	////��arr1����Ŀռ��Ϊ30��
//	//strcat(arr1, arr2);
//	//my_strcat(arr1,arr2);
//	//printf("%s\n", arr1);
//
//
//	//strcmp
//	//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//	//��һ���ַ������ڵڶ����ַ������򷵻�0
//	//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//	//char* p1 = "abcdef";
//	//char* p2 = "sqwer";
//	//int ret = strcmp(p1, p2);
//	//printf("%d\n", ret);
//	//ֻ����Visual Studio�����������ǣ�������1��С����-1����������������������ֵ�п��ܲ��ǡ�
//	//��ΪC�涨��p1����p2�Ƿ���һ������0��������һ������1��p1С��p2����һ��С��0��������һ������-1����p1����p2�Ļ�����ȫ��0
//	//if (strcmp(p1, p2) == 1) {
//	//	printf("p1>p2\n");
//	//}
//	//else if (strcmp(p1, p2) == 0) {
//	//	printf("p1=p2\n");
//	//}
//	//else if (strcmp(p1, p2) == -1) {
//	//	printf("p1<p2\n");
//	//}
//	//��ȷд��
//	//if (strcmp(p1, p2) > 0) {
//	//	printf("p1>p2\n");
//	//}
//	//else if (strcmp(p1, p2) == 0) {
//	//	printf("p1=p2\n");
//	//}
//	//else if (strcmp(p1, p2) < 0) {
//	//	printf("p1<p2\n");
//	//}
//
//	char* p1 = "abcdef";
//	char* p2 = "qbqwer";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//
//
//
//
//
//
//
//	getchar();
//	return 0;
//}
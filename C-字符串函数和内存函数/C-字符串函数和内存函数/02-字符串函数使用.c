//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//
////�鿴�ĵ���ʱ��
////NULL��ָ��ָ��
////NUL/Null��ָ'\0'
//
//
////���������Ƶ��ַ�����������
////strncpy
////strncat
////strncmp
//
//
////�����ַ�����ʵ��
//char* my_strstr(const char*p1,const char* p2) {
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	//��������ָ�������бȽϣ��Ӷ����ı�ԭָ��λ��
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//
//	if (*p2 == '\0') {
//		return (char*)p1;
//	}
//	
//	while (*cur) {
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1) && (*s2) && (*s1 == *s2)) {
//			s1++;
//			s2++;
//		}
//		if (*s1 == '\0') {
//			return NULL;
//		}
//		if (*s2 == '\0') {
//			return cur;		//�ҵ��ַ���
//		}
//		cur++;
//	}
//	return NULL;	//�Ҳ����ַ���
//}
//
//
//
//int main() {
//
//
//	//strncpy	--�ַ�������
//	
//	////����ᷢ������ģ���Ϊ�����arr1���鳤����5��arr2�ַ�������5�����ǻ�ֱ�ӿ�����ȥ�������������
//	////char arr1[5] = "hui";
//	////char arr2[] = "lalalla";
//	////strcpy(arr1, arr2);
//	////printf("%s\n", arr1);
//
//	////����strcpy�ǻ��'\0'������arr1�еģ��ǻ���'\0'��Ӱ���
//	////char arr1[10] = "abcderff";
//	////char arr2[] = "jjdf";
//	////strcpy(arr1, arr2);
//	////printf("%s\n", arr1);
//
//	//char arr1[15] = "abcfdsfds";
//	//char arr2[] = "hui";
//	////�����ǲ���'\0'������arr1�еģ��ǲ���'\0'Ӱ���
//	////ע�⣬�������Ҫ�������ַ�����������Ҫ������ȥ�ĸ���ʱ����Ѷ���ĸ�������'\0'������ȥ
//	////������������Ҫ����arr2�ַ����е�5���ַ���ȥ�Ļ�������arr2������ֻ��3���ַ�������������������2��'\0'������arr1�У����������ֻ��hui
//	////�ܽ᣺���Դ�ַ����ĳ���С��num,�򿽱���Դ�ַ���֮����Ŀ��ĺ���׷��0��ֱ��num��
//	//strncpy(arr1, arr2, 5);
//	//printf("%s\n", arr1);
//	
//
//	//strncat	--�ַ���׷��
//	
//	//char arr1[30] = "hello\0xxxxxxxxxxxxx";
//	//char arr2[] = "huiyi";
//	////�ǻ��'\0'׷�ӵ�arr1�����еģ����Ҳ�����������Ƶĸ����Ƕ��٣����ֻ׷��һ��'\0'��Ҳ����˵����strncat(arr1,arr2,8)
//	////д��������ӣ�Ҳ�ǰ�huiyi׷�ӵ�arr1�����к������׷��һ��'\0'����strncpy()������һ����strncpy()������ָ���˶��ٸ�����
//	////����arr1������濽��'\0'ֱ���ﵽ��Ҫ�����
//	//strncat(arr1, arr2,8);
//	//printf("%s\n", arr1);
//
//
//	//strcmp	--�ַ����Ƚ�
//	//const char* p1 = "abczzef";
//	//const char* p2 = "abcqwer";
//	////����-1
//	////int ret = strcmp(p1, p2);
//	////����0
//	////int ret = strncmp(p1, p2,3);
//	////����1
//	//int ret = strncmp(p1, p2, 4);
//	//printf("%d\n", ret);
//
//
//	//strstr	--�����ַ���
//	//char* p1 = "abcdefxxxxdef";
//	//char* p2 = "def";
//	//���ص�����p1�е�һ�γ��ֵĵ�ַ���������淵�ص���p1+3���Ǹ�d�ĵ�ַ�����Ǻ����Ǹ�def��d�ĵ�ַ
//	//char* ret = strstr(p1, p2);
//	//printf("%p\n", ret);
//	//printf("%p\n", p1+3);
//	//if (ret == NULL) {
//	//	printf("�������Ӵ�\n");
//	//}
//	//else {
//	//	printf("%s\n", ret);
//	//}
//	
//	//�Լ�ʵ��
//	char* p1 = "abbbcdef";
//	char* p2 = "bcd";
//	char* ret = my_strstr(p1, p2);
//	printf("%p\n", ret);
//	printf("%p\n", p1+3);
//	if (ret == NULL) {
//		printf("�������Ӵ�\n");
//	}
//	else {
//		printf("%s\n", ret);
//	}
//
//
//
//
//
//	getchar();
//	return 0;
//}
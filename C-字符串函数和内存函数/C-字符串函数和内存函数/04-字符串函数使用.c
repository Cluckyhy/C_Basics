//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//#include <ctype.h>
//
////strerror;
//
//
//
//int main() {
//
//
//	//������  0 1 2...������Ϣ
//	//0 -- No error
//	//char* str1 = strerror(0);
//	//printf("%s\n", str1);
//	//1 -- Operation not permitted
//	//char* str2 = strerror(1);
//	//printf("%s\n", str2);
//	//No such file or directory
//	//char* str3 = strerror(2);
//	//printf("%s\n", str3);
//
//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	//char* str4 = strerror(errno);
//	
//	////���ļ�
//	//FILE* pf = fopen("test.txt", "r");
//	//if (pf == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//}
//	//else {
//	//	printf("���ļ��ɹ���\n");
//	//}
//
//
//
//	//�ַ����ຯ��
//	char ch = '@';
//	//���ch��Сд��ĸ���ͷ��ط������֣�����Сд��ĸ�ͷ���0
//	int ret = islower(ch);
//	printf("%d\n", ret);
//
//	int a = '2';
//	//a����ʮ��������0-9���ص��Ƿ�0���֣����Ǿͷ���0
//	int ret2 = isdigit(a);
//	printf("%d\n", ret2);
//
//
//	//�ַ�ת������
//	char ch2 = 'w';
//	char up = toupper(ch2);
//	char ch3 = tolower('Q');
//	char arr[] = "I AM A STUDENT";
//	int i = 0;
//	while (arr[i]) {
//		if (isupper(arr[i])) {
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	printf("%c\n", up);
//	printf("%c\n",ch3);
//
//
//
//
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//
////strtok���÷�
//
////���ʮ���Ƶı�ʾ����
////192.168.31.121
////192 168 31 121
////chy@qq.com
////chy qq com
//
//
//int main() {
//
//	char arr[] = "chy@qq.com";
//	//char arr[] = "192.168.31.@..121";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//
//	//�����
//	////�и�buf�е��ַ���
//	//char* ret = strtok(buf, p);
//	//printf("%s\n", ret);
//	////�ڶ�������ʼ��strtok�ĵ�һ��������NULL
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	////����������ʼ
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	//����д��
//	for (ret = strtok(buf, p); ret != NULL;ret = strtok(NULL,p)) {
//		printf("%s\n", ret);
//	}
//	//buf�ѽ����ı���
//	printf("%s\n", buf);
//	
//
//
//
//	getchar();
//	return 0;
//}
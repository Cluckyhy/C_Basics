//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//
//struct S {
//	int n;
//	float score;
//	char arr[10];
//};
//
//
//int main() {
//
//
//	//��ʽ����ʽ������
//	//	struct S s = { 100,3.14f,"hello" };
//	//	FILE* pf = fopen("test.txt", "w");
//	//	if (pf == NULL) {
//	//		printf("%s\n", strerror(errno));
//	//		return 0;
//	//	}
//	//	//��ʽ������ʽд�ļ�
//	//	fprintf(pf,"%d %f %s",s.n, s.score, s.arr);
//	//
//	//
//	//	//�ر��ļ�
//	//	fclose(pf);
//	//	pf = NULL;
//
//
//	//��ʽ����ʽ��ȡ����
//
//	//struct S s = { 0 };
//	//FILE* pf = fopen("test.txt", "r");
//	//if (pf == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//
//	////��ʽ����ʽ��ȡ����
//	//fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	//printf("%d %f %s\n", s.n, s.score, s.arr);
//
//	////�ر��ļ�
//	//fclose(pf);
//	//pf = NULL;
//
//
//	//�����ڱ�׼���������
//	struct S s = { 0 };
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//
//
//	getchar();
//	return 0;
//}
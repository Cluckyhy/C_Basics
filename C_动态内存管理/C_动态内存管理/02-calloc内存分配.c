//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//
//
//int main() {
//
//	//malloc���Ὣ��̬����Ŀռ��ʼ��,Ч�ʻ����һ��
//	//malloc(10*sizeof(int));
//
//	//calloc�Ὣ��̬����Ŀռ�Ĭ�ϳ�ʼ��Ϊ0
//	int *p = (int*)calloc(10, sizeof(int));
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷſռ�
//	//free�����������ͷŶ�̬����Ŀռ�
//	free(p);
//	p = NULL;
//
//
//
//	getchar();
//	return 0;
//}
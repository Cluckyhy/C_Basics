//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//
//struct S {
//	char name[20];
//	int age;
//};
//
//int main() {
//	
//
//	//struct S arr[50];	//50��struct S ���͵�����
//	//30 - �˷�
//	//60 - ����
//
//	//���ڴ�����10�����͵Ŀռ�
//	int *p = (int*)malloc(10 * sizeof(int));
//	//int *p = (int*)malloc(INT_MAX);			//Not enough space  p==NULL
//	if (p == NULL) {
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++) {
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++) {
//			printf("%d\n", *(p + i));
//		}
//	}
//
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	//������p��ֵΪNULL
//	p = NULL;
//
//	getchar();
//	return 0;
//}
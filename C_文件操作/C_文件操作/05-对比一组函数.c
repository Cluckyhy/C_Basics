//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
////�Ա�����һ�麯��
////	scanf/fscanf/sscanf
////	printf/fprintf/sprintf
//
////scanf/printf		����Ա�׼������/��׼������� ��ʽ������/������
////fscanf/fprintf	���������������/����������� ��ʽ������/������
////sscanf/sprintf	��sscanf�Ǵ��ַ����ж�ȡ��ʽ�������ݣ�sprintf�ǰѸ�ʽ����������ɣ��洢�����ַ���
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
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//
//
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	//printf("%s\n", buf);
//
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//
//	getchar();
//	return 0;
//}
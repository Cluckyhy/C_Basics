//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//
//
//	//���ļ�test.txt
//	//���·��
//	//.. ��ʾ��һ��·��
//	//.  ��ʾ��ǰ·��
//	//fopen("..\..\test.txt","r");
//	//fopen("test.txt","r");
//
//	//����·��
//	//fopen("D:\�����ƾ���ѧ��һѧ��\Cѧϰ\����\C_�ļ�����","r");
//
//	//FILE* pf = fopen("test.txt", "r");
//	//if (pf == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//}
//
//	////�򿪳ɹ�
//	////���ļ�
//	////�ر��ļ�
//	//fclose(pf);
//	//pf = NULL;
//
//	//FILE* pfWrite = fopen("TEST.txt", "w");
//	//if (pfWrite == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//	////д�ļ�
//	//fputc('h', pfWrite);
//	//fputc('u', pfWrite);
//	//fputc('i', pfWrite);
//
//	////�ر��ļ�
//	//fclose(pfWrite);
//	//pfWrite = NULL;
//
//	//���ļ�
//	//FILE* pfRead = fopen("TEST.txt", "r");
//	//if (pfRead == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//	//printf("%c", fgetc(pfRead));	//h
//	//printf("%c", fgetc(pfRead));	//u
//	//printf("%c", fgetc(pfRead));	//i
//	////�ر��ļ�
//	//fclose(pfRead);
//	//pfRead = NULL;
//
//
//	//�Ӽ�������
//	//�������Ļ
//	//����&��Ļ�����ⲿ�豸
//	//
//	//����-��׼�����豸	-stdin
//	//����-��׼����豸	-stdout
//	//��һ������Ĭ�ϴ򿪵������豸
//
//	//stdin FILE*
//	//stdout FILE*
//	//stderr FILE*
//
//	//int ch = fgetc(stdin);
//	//fputc(ch, stdout);
//
//
//	////��ȡһ������
//	//char buf[1024] = { 0 };
//	//FILE* pf = fopen("TEST.txt", "r");
//	//if (pf == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//	////��ȡ�ļ�
//	//fgets(buf, 1024, pf);
//	////printf("%s", buf);	//�����fgets����ļ������hui����Ļ��з���ȡ��ȥ������������Լ���һ�����з���
//	//puts(buf);				//puts�������ܶ�ȡ������������û�л��з�������󶼻��Լ�����һ�����з���������������������з�
//
//	//fgets(buf, 1024, pf);
//	////printf("%s", buf);
//	//puts(buf);				//����Ҳ����һ�����з�
//
//	////�ر��ļ�
//	//fclose(pf);
//	//pf = NULL;
//
//	//д��һ������
//	//char buf[1024] = "hello";
//	//FILE* pf = fopen("TEST.txt", "w");
//	//if (pf == NULL) {
//	//	printf("%s\n", strerror(errno));
//	//	return 0;
//	//}
//	////д���ļ�
//	//fputs("hello\n", pf);	//��Ҫ�Լ����ϻ��з�����Ȼ�����л���
//	//fputs("world\n", pf);
//
//	////�ر��ļ�
//	//fclose(pf);
//	//pf = NULL;
//
//	
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	//fgets(buf,1024,stdin);	//�ӱ�׼�����ȡ
//	//fputs(buf, stdout);		//�������׼�����
//
//	//�ȼ���
//	gets(buf);
//	puts(buf);
//
//
//	
//	getchar();
//	return 0;
//}
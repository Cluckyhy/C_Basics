//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main() {
//
//	//int ch = 0;
//
//	//ctrl + z
//	//EOF -- end of file  �ļ�������־ --> -1;
//	//while ((ch = getchar()) != EOF) {
//	//	putchar(ch);
//	//}
//	//printf("����ѭ����");
//	//char password[20] = { 0 };
//	//int ch = 0;
//	//int ret = 0;
//	//printf("���������룺>\n");
//	//scanf("%s", password);
//	////printf("%s\n", password);
//	////���뻺������ʣһ��'\n'
//	////��ȡһ��'\n'
//	////getchar();
//	//while ((ret = getchar()) != '\n') {
//	//	;
//	//}
//	//printf("��ȷ�����루Y/N��");
//	//ch = getchar();
//	//if (ch == 'Y') {
//	//	printf("ȷ�ϳɹ���");
//	//}
//	//else {
//	//	printf("����ȷ�ϣ�");
//	//}
//
//
//	//����n�Ľ׳�
//	//int n = 0;
//	//int sum = 1;
//	//printf("������һ������\n");
//	//scanf("%d", &n);
//	//for (int i = 1; i <= n; i++) {
//	//	sum *= i;
//	//}
//	//printf("sum = %d", sum);
//	
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++) {
//		printf("���������룺");
//		scanf("%s", password);   
//		// == ���������Ƚ������ַ����Ƿ���ȣ�Ӧ����һ���⺯��-strcmp
//		//if (password == "123465") {
//		//	printf("��¼�ɹ���");
//		//	break;
//		//}
//
//		//strcmp �������һ���ڲ�����������һ������0������
//		//����һС�ڲ�����������һ��С��0������
//		//����һ���ڲ�����������0
//		if (strcmp(password,"123456")==0) {
//			printf("��¼�ɹ���");
//			break;
//		}
//	}
//	if (i == 3) {
//		printf("���������������󣬵�¼ʧ�ܣ�");
//	}
//
//
//
//
//	getchar();
//	return 0;
//}
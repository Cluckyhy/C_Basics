//#include <stdio.h>
//
////#define  ����ı�ʶ������
//#define MAX 10 
//
////ö�ٳ���  ö��---��һһ�о٣�
////�Ա��У�Ů������
////��ԭɫ���죬�̣���
//
////ö������ - enum 
////�Ա�ö��
//enum Sex {
//	Male,
//	Femal,
//	Secret
//};
////��ɫö��
//enum Color {
//	RED,
//	GREEN,
//	BLUE
//};
//
//
//
//
//int main() {
//
//	//Male,Femal,Secret ����ö�ٳ���
//	//enum Sex s = Femal;
//	//printf("%d\n", Male);   // 0
//	//printf("%d\n", Femal);  // 1
//	//printf("%d\n", Secret); // 2
//	//printf("%d\n", s);      // 1
//
//	//enum Color color = RED;
//	//color = BLUE;
//	//printf("%d\n", color);
//
//	//ע�⣬һ��������ռ�����ַ������Ͻ�β����0�����������С����С��7�������СС��7�Ļ��ͻ��ӡ������Ķ���
//	//��������һ�㲻�����鳤�ȣ����ַ�������Ӧ
//	char ch[12] = "�»��ڼ���!";  //����  
//	printf("%s\n", ch);
//	//�ڶ��������������û��0��Ҳ���ܴ�ӡ��������ֵ
//	char ch2[] = { 'a','b','c','\0'};
//	printf("%s\n", ch2);
//	//"abc" --- 'a','b','c','\0'--'\0'���ַ����Ľ�����־  '\0'��ֵΪ0
//	char ch3[] = "abc";
//	printf("%s\n", ch3);
//
//
//	//strlen -- string length -�����ַ������ȵ�
//	//ע�⣬�ַ����Ľ�����־�ǲ������ַ������ݵ�
//	printf("%d\n", strlen(ch));  //11
//	printf("%d\n", strlen(ch2)); //3
//	printf("%d\n", strlen(ch3)); //3
//
//
//
//	//int arr[MAX] = { 0 };
//	//printf("%d\n", MAX);
//
//	//const������
//	//const int n = 10;  //n�Ǳ������������г����ԣ���������˵n�ǳ�����
//	//int arr[10] = { 0 };
//	//int arr[n] = { 0 };
//	//n = 2;
//
//	//const���εĳ���
//	//const int num1 = 10;
//	//printf("%d\n", num1); 
//	//num1 = 20;
//
//	//���泣��
//	//3��
//	//5;
//	//10;
//
//
//	getchar();
//	return 0;
//}
//#include <stdio.h>
//
////1��strlen �� sizeofû���κ���ϵ
////2��strlen �����ַ������ȵģ�ֻ������ַ��󳤶�  -- �⺯��--ʹ��ʱ��Ҫ����ͷ�ļ�
////3��sizeof ������������顢���͵Ĵ�С--��λ���ֽ�  --������
//
//
//
//
//int main() {
//
//	int arr[10] = { 1,2,3 };
//	char arr2[5] = { 'a','b','c' };   //�������ַ�������Ϊ0
//	char arr3[5] = "abc";			  //�����4��Ԫ�أ�����һ��'\0';
//	char arr4[] = "abcdef";           //��ʵ����������7��Ԫ��
//	//sizeof ����arr4��ռ�ռ�Ĵ�С
//	//7��Ԫ�� -- char 7*1 = 7
//	printf("%d\n", sizeof(arr4));     //7��һ���ַ�ռһ���ֽ�
//	//strlen -- ���ַ������� -- '\0'֮ǰ���ַ�����
//	//{a,b,c,d,e,f,'\0'}
//	//6��'\0'�������ַ��������棬strlenֻҪ��ȡ��'\0'����ֹͣ
//	printf("%d\n", strlen(arr4));     //6
//
//	char arr5[] = "abc";
//	char arr6[] = { 'a','b','c'};
//	printf("%d\n", sizeof(arr5));
//	printf("%d\n", sizeof(arr6));
//	printf("%d\n", strlen(arr5));
//	printf("%d\n", strlen(arr6));   //���ֵ
//
//
//
//	getchar();
//	return 0;
//}
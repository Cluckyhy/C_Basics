//#include <stdio.h>
//
////��������ڴ�й¶���⣬���������hello
//
//
//
//void GetMemory(char **p,int num) {
//	*p = (char*)malloc(num);
//}
//
//void Test(void) {
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);		//�����ͷŶ�̬���ٵ��ڴ棬�����ڴ�й¶��
//
//	//�Ľ�
//	free(str);
//	str = NULL;
//}
//
//
//
//int main() {
//
//	Test();
//
//
//	getchar();
//	return 0;
//}
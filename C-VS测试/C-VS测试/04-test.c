#include <stdio.h>
#include <assert.h>

//void my_strcpy(char* dest, char* src) {
//	while (*src != '\0') {
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//�Ż�����
//������ͨ��'\0'��ASCALL��ֵΪ0��������Ϊѭ�������ж�����������ѭ��
//void my_strcpy(char* dest, char* src) {
//	if (dest!=NULL&&src!=NULL)
//	{
//		while (*dest++ = *src++) {
//			;
//		}
//	}
//}

//�����Ĵ���
char* my_strcpy(char* dest, const char* src) {
	char* ret = dest;
	assert(dest!=NULL);	//����
	assert(src!=NULL);	//����
	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
	while (*dest++ = *src++) {
		;
	}
	return ret;
}


int main() {

	char arr1[] = "****************";
	char arr2[] = "huiyi";
	//strcpy(arr1, arr2);
	//ע��strcpy�����arr2�е�'\0'Ҳ��ֵ��arr1�У�������ʵarr1�к��滹��*�ţ�ֻ����
	//��ʶ��'\0'ʱ����ֱ�Ӳ�ʶ�������ַ��ˣ�����ֻ��ӡ��huiyi��

	//ʵ���Լ���my_strcpy()����
	//my_strcpy(arr1, arr2);
	my_strcpy(arr1,NULL);

	printf("%s\n", arr1);

	getchar();
	return 0;
}
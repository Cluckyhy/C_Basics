#include <stdio.h>
#include <assert.h>

//��һ�֣�
//ֱ��ʹ�ÿ⺯����strlen(����һ���ַ���);
//�ڶ��֣�(�ݹ�)
//Mystrlen1();
//�����֣�(ָ��-ָ��)
//Mystrlen2();

int Mystrlen1(char *str) {
	if (*str != '\0') {
		return 1 + Mystrlen1(++str);
	}
	else {
		return 0;
	}
}

int Mystrlen2(char *str) {
	char* star = str;
	char* end = str;
	while (*end != '\0') {
		end++;
	}
	return end - star;  //Ԫ�ظ���
}

//�ڲ��������const���Σ���֤���������ַ������޸�
int Mystrlen3(const char* str) {
	int count = 0;
	//���ԣ���ָ֤�����Ч��
	assert(&str!=NULL);
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}



int main() {

	char arr[] = "huiyi";
	int len1 = Mystrlen1(arr);
	printf("%d\n", len1);
	int len2 = Mystrlen2(arr);
	printf("%d\n", len2);
	int len3 = Mystrlen3(arr);
	printf("%d\n", len3);


	getchar();
	return 0;
}
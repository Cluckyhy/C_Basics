#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


struct S {
	char name[20];
	int age;
	double score;
};


int main() {

	//���ļ�

	//struct S s = { "����",20,55.6 };
	//FILE* pf = fopen("test.txt", "wb");
	//if (pf == NULL) {
	//	return 0;
	//}
	////�����Ƶ���ʽд�ļ�
	//fwrite(&s, sizeof(struct S), 1, pf);

	////�ر��ļ�
	//fclose(pf);
	//pf == NULL;


	//д�ļ�
	struct S tmp = { 0 };

	FILE* pf = fopen("test.txt", "rb");
	if (pf == NULL) {
		return 0;
	}
	//�����Ƶ���ʽ���ļ�
	fread(&tmp, sizeof(struct S), 1, pf);
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);

	//�ر��ļ�
	fclose(pf);
	pf == NULL;


	getchar();
	return 0;
}
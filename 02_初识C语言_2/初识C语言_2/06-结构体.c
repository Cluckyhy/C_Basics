#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//�ṹ��  -- struct   �����Լ����������һ������
//char,int,double...
//�� = 3.14��
//'w'?
//�� - ���Ӷ���

//����+���+����+���֤����...
//����+����+������+����...
//���Ӷ��� -- �ṹ�� -- �����Լ����������һ������

//����һ���������
struct Book{
	char name[20];  //C���Գ������
	short price;    //55
};


int main() {

	//���ýṹ������-����һ�������͵Ľṹ�����  struct����ʡ��
	struct Book b1 = { "C���Գ������",55 };
	printf("����Ϊ��%s\n�۸�Ϊ��%d\n",b1.name,b1.price);
	printf("�Ȿ��ļ۸�Ϊ��%dԪ\n", b1.price);
	//b1.name = "C++";   //����
	//strcpy -- string copy --�ַ������� --�⺯�� <string.h>
	strcpy(b1.name, "C++�������");
	b1.price = 15;
	printf("�޸ĺ�ļ۸�Ϊ��%dԪ\n", b1.price);

	//��.c�ļ��в�����дstruct,����.cpp�ļ��п���ʡ��struct;
	struct Book* pd = &b1;
	printf("%p\n", pd);

	//���ַ�ʽ���
	// .  �ṹ�����.��Ա
	// -> �ṹ��ָ��->��Ա

	printf("%s\n", (*pd).name);
	printf("%d\n", (*pd).price);
	printf("%s\n", pd->name);
	printf("%d\n", pd->price);

	
	getchar();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//����Ԫ�ظ���
#define MAX 1000
//��������Ԫ�ظ���
#define MAX_NAME 20
//�Ա�����Ԫ�ظ���
#define MAX_SEX 5
//�绰����Ԫ�ظ���
#define MAX_TELE 12
//��ַ����Ԫ�ظ���
#define MAX_ADDR 30

enum Option {
	EXIT,	//0
	ADD,	//1
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};


struct PeoInfo {
	//����
	char name[MAX_NAME];
	//����
	int age;
	//�Ա�
	char sex[MAX_SEX];
	//�绰
	char tele[MAX_TELE];
	//��ַ
	char addr[MAX_ADDR];
};

//ͨѶ¼����
struct Contact {
	//���һ����Ϣ
	struct PeoInfo data[MAX];
	//��¼��ǰ�ѽ��е�Ԫ�ظ���
	int size;
};

//������ʼ��ͨѶ¼����
void InitContact(struct Contact* ps);

//��������ͨѶ¼����
void AddContact(struct Contact* ps);

//������ʾ��Ϣ����
void ShowContact(const struct Contact* ps);

//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);

//����ָ������Ϣ
void SearchContact(const struct Contact* ps);

//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps);

//����ͨѶ¼����
void SortContact(struct Contact *ps);
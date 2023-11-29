#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == MAX)
	{
		printf("ͨѶ¼���� �޷��浵\n");
		return;
	}
	printf("����������:>");
	scanf(" %s ", pc->data[pc->count].name);
	printf("����������:>");
	scanf(" %s ", pc->data[pc->count].age);
	printf("�������Ա�:>");
	scanf(" %s ", pc->data[pc->count].sex);
	printf("������绰:>");
	scanf(" %s ", pc->data[pc->count].tele);
	printf("�������ַ:>");
	scanf(" %s ", pc->data[pc->count].addr);

	pc->count++;
	printf("��ӳɹ�\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0; \
		printf("%20s\t%5s\t%5s\t%12s\t%30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->count; i++)
	{
		printf("%20s\t%5d\t%5s\t%12s\t%30s\n" ,
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

void DelContact(Contact* pc)
{
	char name[MAX_name] = { 0 };
	assert(pc);
	printf("������ɾ�����������\n");
	scanf("%s", name);
}
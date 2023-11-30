#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#define MAX 100
#define MAX_name 20
#define MAX_sex 10
#define MAX_tele 12
#define MAX_addr 30

//��������
typedef struct People
{
	char name[MAX_name];
	int age;
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
}People;
//ͨѶ¼
typedef struct Contact
{
	People data[MAX];
	int count;
}Contact;

void InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	memset(pc->data, 0, sizeof(pc->data));
}
//������ϵ����Ϣ
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == MAX)
	{
		printf("ͨѶ¼���� �޷��浵\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pc->data[pc->count].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("��ӳɹ�\n");
}
//��ʾ��ϵ����Ϣ
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0; \
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int Findname(Contact* pc, char* name)
{
	assert(pc);
	int i = 0;
	for (i; i < pc->count; i++)
	{
		if (strcmp(pc->data->name, name))
		{
			return 1;
		}
	}
	return -1;
}
//ɾ����ϵ����Ϣ
void DelContact(Contact* pc)
{
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("ͨѶ¼Ϊ��");
		return;
	}
	char name[MAX_name] = { 0 };
	printf("������ɾ����������֣�");
	scanf("%s", name);
	int  Fn = Findname(pc, name);
	if (Fn == -1)
	{
		printf("ɾ�����󲻴���");
		return;
	} 
	for (i = Fn; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("ɾ���ɹ�\n");
}
//������ϵ����Ϣ
void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX_name] = { 0 };
	printf("��������Ҷ�������֣�");
	scanf("%s", name);
	int  Fn = Findname(pc, name);
	if (Fn == -1)
	{
		printf("���Ҷ��󲻴���");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
			pc->data[Fn].name,
			pc->data[Fn].age,
			pc->data[Fn].sex,
			pc->data[Fn].tele,
			pc->data[Fn].addr);
	
}

void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_name] = { 0 };
	printf("������Ҫ�޸Ķ�������֣�");
	scanf("%s", name);
	int  Fn = Findname(pc, name);
	if (Fn == -1)
	{
		printf("�޸Ķ��󲻴���");
		return;
	}
	printf("�޸Ķ������ ��ʼ����¼����ϵ����Ϣ\n");
	printf("����������:>");
	scanf("%s", pc->data[Fn].name);
	printf("����������:>");
	scanf("%d", &(pc->data[Fn].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[Fn].sex);
	printf("������绰:>");
	scanf("%s", pc->data[Fn].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[Fn].addr);
	printf("�޸ĳɹ�\n");
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
		pc->data[Fn].name,
		pc->data[Fn].age,
		pc->data[Fn].sex,
		pc->data[Fn].tele,
		pc->data[Fn].addr);
}
//������ϵ����Ϣ(������������
int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((People*)e1)->name, ((People*)e2)->name);
}
void SortContact(const Contact* pc)
{
	qsort(pc->data, pc->count, sizeof(People), cmp_peo_by_name);
	printf("����ɹ�\n");
	
}

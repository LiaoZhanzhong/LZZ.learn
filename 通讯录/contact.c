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
		printf("通讯录已满 无法存档\n");
		return;
	}
	printf("请输入名字:>");
	scanf(" %s ", pc->data[pc->count].name);
	printf("请输入年龄:>");
	scanf(" %s ", pc->data[pc->count].age);
	printf("请输入性别:>");
	scanf(" %s ", pc->data[pc->count].sex);
	printf("请输入电话:>");
	scanf(" %s ", pc->data[pc->count].tele);
	printf("请输入地址:>");
	scanf(" %s ", pc->data[pc->count].addr);

	pc->count++;
	printf("添加成功\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0; \
		printf("%20s\t%5s\t%5s\t%12s\t%30s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入删除对象的名字\n");
	scanf("%s", name);
}
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

//类型声明
typedef struct People
{
	char name[MAX_name];
	int age;
	char sex[MAX_sex];
	char tele[MAX_tele];
	char addr[MAX_addr];
}People;
//通讯录
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
//增加联系人信息
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->count == MAX)
	{
		printf("通讯录已满 无法存档\n");
		return;
	}
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->count].addr);

	pc->count++;
	printf("添加成功\n");
}
//显示联系人信息
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0; \
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
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
//删除联系人信息
void DelContact(Contact* pc)
{
	assert(pc);
	int i = 0;
	if (pc->count == 0)
	{
		printf("通讯录为空");
		return;
	}
	char name[MAX_name] = { 0 };
	printf("请输入删除对象的名字：");
	scanf("%s", name);
	int  Fn = Findname(pc, name);
	if (Fn == -1)
	{
		printf("删除对象不存在");
		return;
	} 
	for (i = Fn; i < pc->count - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("删除成功\n");
}
//查找联系人信息
void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX_name] = { 0 };
	printf("请输入查找对象的名字：");
	scanf("%s", name);
	int  Fn = Findname(pc, name);
	if (Fn == -1)
	{
		printf("查找对象不存在");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
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
	printf("请输入要修改对象的名字：");
	scanf("%s", name);
	int  Fn = Findname(pc, name);
	if (Fn == -1)
	{
		printf("修改对象不存在");
		return;
	}
	printf("修改对象存在 开始重新录入联系人信息\n");
	printf("请输入名字:>");
	scanf("%s", pc->data[Fn].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[Fn].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[Fn].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[Fn].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[Fn].addr);
	printf("修改成功\n");
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
		pc->data[Fn].name,
		pc->data[Fn].age,
		pc->data[Fn].sex,
		pc->data[Fn].tele,
		pc->data[Fn].addr);
}
//排序联系人信息(按照名字排序）
int cmp_peo_by_name(const void* e1, const void* e2)
{
	return strcmp(((People*)e1)->name, ((People*)e2)->name);
}
void SortContact(const Contact* pc)
{
	qsort(pc->data, pc->count, sizeof(People), cmp_peo_by_name);
	printf("排序成功\n");
	
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<assert.h>
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

void InitContact(Contact* pc);

void AddContact(Contact* pc);

void ShowContact(const Contact* pc);
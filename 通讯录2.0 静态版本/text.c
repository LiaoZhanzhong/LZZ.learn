#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"

//联系人的信息：
//名字 年龄 性别 电话 地址
//1 存放100个人的信息
//2 增加或删除联系人
//3 查找或修改联系人
//4 排序
//5 显示联系人

void menu()
{
	printf("##########################################\n");
	printf("########    1.add        2.del    ########\n");
	printf("########    3.search     4.modify ########\n");
	printf("########    5.show       6.sort   ########\n");
	printf("########    0.exit                ########\n");
	printf("##########################################\n");
}

int main()
{
	int input = 0;
	Contact con;//通讯录
	InitContact(&con);//初始化通讯录
	do
	{
		menu();
		printf("选择数字操作：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			AddContact(&con);
			break;
		case 2:
			DelContact(&con);
			break;
		case 3:
			SearchContact(&con);
			break;
		case 4:
			ModifyContact(&con);
			break;
		case 5:
			ShowContact(&con);
			break;
		case 6:
			SortContact(&con);
			break;
		case 0:
			printf("退出通讯录\n");
			break;
		default:
			printf("请选择图示范围的数字\n");
			break;
		}
	} while (input);
	return 0;
}
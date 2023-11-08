#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//一个关机程序   goto语句 
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	//shutdow -s -t 60  - 关机命令   shutdow -a    - 取消关机命令
	//system（） - 执行系统命令
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在1分钟后关机,输入“我是傻杯”，取消关机\n请输入：");
	scanf("%s", input);
	if (strcmp(input, "我是傻杯") == 0)   //strcmp（） - 比较两个字符串
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
//猜数字游戏
//#include<time.h>
//#include<stdlib.h>
//void game()
//{
//	int ret = 0;
//	int guess = 0; //接收猜的数据
//	ret = rand() % 100 + 1;//生成1-100的随机数   rand-生成一个随机数
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//			if (guess > ret)
//			{
//				printf("猜大了\n");
//			}
//			else if (guess < ret)
//			{
//				printf("猜小了\n");
//			}
//			else 
//			{
//				printf("恭喜你，猜对了！\n");
//			}			
//	}
//}
//
//void menu()
//{
//	printf("#######################################\n");
//	printf("#####  1.play  ######  0.exit  ########\n");
//	printf("#######################################\n");
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//srand-设置随机数起点
//	    //(unsigned int)time(NULL)-时间戳-{当前计算机时间-计算机起始时间（1970年1月1日0:0:0)}
//	do {
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请选0或1\n");
//			break;
//		}	
//	}
//	while (input);
//	return 0;
//}

//#include<string.h>
//int main()
//{
//    char arr1[] = "bird brother";
//	char arr2[] = "############";
//	int left = 0;
//	//int rigth = sizeof(arr1) / sizeof(arr1[0]) - 2; //较为繁琐不采用
//	int right = strlen(arr1)-1; //strlen 计算字符长度
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息一秒 1000毫秒
//		system("cls"); //执行系统命令的一个函数  cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

 

//二分查找
//int main()
//{
//	int k = 5;
//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//int sz = sizeof(arr) / sizeof(arr[0]);//计算数组个数
//int left = 0; //左下标
//int right = sz - 1; //右下标
//while (left<=right)
//{
//	int mid = (left + right) / 2;
//	if (arr[mid] > k)
//	{
//		right = mid - 1;
//	}
//	else if (right < k)
//	{
//		left = mid + 1;
//	}
//	else
//	{
//		printf("找到了，下标是: %d\n", mid);
//		break;
//	}
//}if (left > right)
//printf("没找到\n");
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 7;
//	//写一个代码，在arr数组(有序）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (n == arr[i])
//		{
//			printf("找到了，下标是: %d\n", i);
//			break;
//		}
//
//	}
//	if (i == sz)
//		printf("没找到\n");
//	return 0;
//}



//计算n的阶乘的和
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int num = 0;
//	scanf("%d", &n);
//	for (n = 1; n <= 5; n++)
//	{
//		ret = ret * n;
//		num = num + ret;
//	}
//	printf("%d\n", num);
//	/*printf("ret = %d\n ", ret );*/
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//	printf("ret = %d\n ", ret );
//	return 0;
//}





//do while 循环
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	}
//	while (i < 10);
//	return 0;
//}






//for变种
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++ , y++)
//	{
//		printf("哈哈哈\n");
//	}
//	return 0;
//}


//for循环 for(表达式1；表达式2；表达式3）语句
//int main()
//{
//    //   初始化     判断     调整
//    for (int i = 0; i <= 100; i++)
//    {
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//
//    }
//    return 0;
//}

 // while循环语句
//  int main()
//{
//    int i = 0;// 初始化
//    while (i <= 10)//判断
//    {
//        if (i == 5)
//            continue;
//
//        printf("%d ", i);
//        i++;//调整
//
//    }
//    return 0;
//}








//int main()
//{
//	//getchar 遇到 ctrl+z 会获取 EOF  EOF-end of file的本质的值是-1
//	int ch = 0;
//	while ((ch = getchar()) != EOF) //getchar 获取一个字符是否为EOF 若不是则打印此字符
//	{
//		putchar(ch);
//	}
//	return 0;
//}





// if swith 

//switch (表达式) //表达式 可以是数值型或字符型类型数据
//{
//	case 常量表达式1：语句1
//	case 常量表达式2：语句2
//	case 常量表达式3：语句3
//		.....
//	case 常量表达式n：语句n
//	default:printf("error\n");
//}

// &&-并且  {}-代码块   //break 跳出循环
//分支语句-if语句 
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 0)
//			printf("偶数 = % d \n", i);
//		if (i % 2 == 1)
//			printf("奇数 = %d ", i);
//		i++;
//
//	}
//	return 0;

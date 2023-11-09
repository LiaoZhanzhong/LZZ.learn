#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp_int(const void* e1,const void* e2)//void* 无具体类型的指针
{                                           //不能被解引用，也不能加减整数
	return (*(int*)e1 - *(int*)e2);
	//return (*(int*)e2 - *(int*)e1);
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//将数组排为升序
	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//将数组排为倒序
	int sz = sizeof(arr) / sizeof(arr[0]);

	           //sz数据元素个数      //函数指针-比较函数
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	      //arr排序数据起始位置   //sizeof数据元素大小（单位字节）

	int  i= 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp_int(const void* e1,const void* e2)//void* �޾������͵�ָ��
{                                           //���ܱ������ã�Ҳ���ܼӼ�����
	return (*(int*)e1 - *(int*)e2);
	//return (*(int*)e2 - *(int*)e1);
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//��������Ϊ����
	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };//��������Ϊ����
	int sz = sizeof(arr) / sizeof(arr[0]);

	           //sz����Ԫ�ظ���      //����ָ��-�ȽϺ���
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	      //arr����������ʼλ��   //sizeof����Ԫ�ش�С����λ�ֽڣ�

	int  i= 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
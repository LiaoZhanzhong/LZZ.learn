#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a[] = { 1,2,3,4 };

	printf("%d\n", sizeof(a));      // 16 
	printf("%d\n", sizeof(a+0));    // 4/8  a���ǵ�������sizeof�� ����a������Ԫ�ص�ַ
	printf("%d\n", sizeof(*a));     // 4    *a�е�a����Ԫ�ص�ַ *a���Ƕ���Ԫ�ص�ַ�Ľ�����
	printf("%d\n", sizeof(a+1));    // 4    aΪ��Ԫ�ص�ַ ��a+1Ϊ�ڶ���Ԫ�صĵ�ַ 
	printf("%d\n", sizeof(a[1]));   // 4    �ڶ���Ԫ�صĵ�ַ 
	printf("%d\n", sizeof(&a));     // 4/8  &a������ĵ�ַ ��ַ���ִ�С�ߵ� 
	printf("%d\n", sizeof(*&a));    // 16   *��&����� ��aΪ�����ַ  ����int��*��[4]��һ������ָ��
	printf("%d\n", sizeof(&a+1));   // 4/8  &a+1 ������a�ĵ�ַ���������һ��4������Ԫ������Ĵ�С  
	printf("%d\n", sizeof(&a[0]));  // 4    ��һ��Ԫ�صĵ�ַ
	printf("%d\n", sizeof(&a[0]+1));// 4    �ڶ���Ԫ�صĵ�ַ

	return 0;
}

int main()
{
	char ch[] = { 'a','b','c','d','e','f' };

	printf("%d\n", sizeof(ch));       // 6 
	printf("%d\n", sizeof(ch + 0));   // 4/8  a���ǵ�������sizeof�� ����a������Ԫ�ص�ַ
	printf("%d\n", sizeof(*ch));      // 1    *ch�е�a����Ԫ�ص�ַ *ch���Ƕ���Ԫ�ص�ַ�Ľ�����
	printf("%d\n", sizeof(ch[1]));    // 1
	printf("%d\n", sizeof(&ch));      // 4/8 &ch������ĵ�ַ ��ַ���ִ�С�ߵ�
	printf("%d\n", sizeof(&ch + 1));  // 4/8 &a+1������a�ĵ�ַ���������һ��4������Ԫ������Ĵ�С
	printf("%d\n", sizeof(&ch[0]+1)); // 4/8 �ڶ���Ԫ�صĵ�ַ

	return 0;
}

#include<string.h>
int main()
{
	char ch[] = { 'a','b','c','d','e','f' };

	printf("%d\n", strlen(ch));          //����6�����ֵ 
	printf("%d\n", strlen(ch + 0));      //
	//printf("%d\n", strlen(*ch));     //�൱��strlen��'a'�� -->strlen��97�� Ұָ��
	//printf("%d\n", strlen(ch[1]));   //
	printf("%d\n", strlen(&ch));  //����6�����ֵ
	printf("%d\n", strlen(&ch + 1)); // ���ֵ-6
	printf("%d\n", strlen(&ch[0] + 1));// ���ֵ-1

	return 0;
}

int main()
{
	char ch[] = {"abcdef"};

	printf("%d\n", strlen(ch));   //6       
	printf("%d\n", strlen(ch + 0));  //6   
	printf("%d\n", strlen(*ch));    //err
	printf("%d\n", strlen(ch[1]));   //err
	printf("%d\n", strlen(&ch));   //6
	printf("%d\n", strlen(&ch + 1));  //���ֵ
	printf("%d\n", strlen(&ch[0] + 1)); //5

    printf("%d\n", sizeof(ch));   // 7    
	printf("%d\n", sizeof(ch + 0)); // 4/8  
	printf("%d\n", sizeof(*ch));    //1
	printf("%d\n", sizeof(ch[1]));  //1
	printf("%d\n", sizeof(&ch));    //4/8  
	printf("%d\n", sizeof(&ch + 1));  //4/8  
	printf("%d\n", sizeof(&ch[0] + 1)); //4/8


	return 0;
}


int main()
{
	char* p = "abcdef";

	printf("%d\n", strlen(p));//6
	printf("%d\n", strlen(p + 1));//5
	printf("%d\n", strlen(*p));//err
	printf("%d\n", strlen(p[0]));//err
	printf("%d\n", strlen(&p));//���ֵ
	printf("%d\n", strlen(&p + 1));//���ֵ
	printf("%d\n", strlen(&p[0] + 1));//5

	printf("%d\n", sizeof(p));   // 4/8
	printf("%d\n", sizeof(p + 1));// 4/8
	printf("%d\n", sizeof(*p));//1
	printf("%d\n", sizeof(p[0]));//1
	printf("%d\n", sizeof(&p));// 4/8
	printf("%d\n", sizeof(&p + 1));// 4/8
	printf("%d\n", sizeof(&p[0] + 1));// 4/8

	return 0;
}
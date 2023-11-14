#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a[] = { 1,2,3,4 };

	printf("%d\n", sizeof(a));      // 16 
	printf("%d\n", sizeof(a+0));    // 4/8  a不是单独放在sizeof内 所以a就是首元素地址
	printf("%d\n", sizeof(*a));     // 4    *a中的a是首元素地址 *a则是对首元素地址的解引用
	printf("%d\n", sizeof(a+1));    // 4    a为首元素地址 则a+1为第二个元素的地址 
	printf("%d\n", sizeof(a[1]));   // 4    第二个元素的地址 
	printf("%d\n", sizeof(&a));     // 4/8  &a是数组的地址 地址不分大小高低 
	printf("%d\n", sizeof(*&a));    // 16   *与&相抵消 则a为数组地址  类型int（*）[4]是一种数组指针
	printf("%d\n", sizeof(&a+1));   // 4/8  &a+1 是数组a的地址向后跳过了一个4个整型元素数组的大小  
	printf("%d\n", sizeof(&a[0]));  // 4    第一个元素的地址
	printf("%d\n", sizeof(&a[0]+1));// 4    第二个元素的地址

	return 0;
}

int main()
{
	char ch[] = { 'a','b','c','d','e','f' };

	printf("%d\n", sizeof(ch));       // 6 
	printf("%d\n", sizeof(ch + 0));   // 4/8  a不是单独放在sizeof内 所以a就是首元素地址
	printf("%d\n", sizeof(*ch));      // 1    *ch中的a是首元素地址 *ch则是对首元素地址的解引用
	printf("%d\n", sizeof(ch[1]));    // 1
	printf("%d\n", sizeof(&ch));      // 4/8 &ch是数组的地址 地址不分大小高低
	printf("%d\n", sizeof(&ch + 1));  // 4/8 &a+1是数组a的地址向后跳过了一个4个整型元素数组的大小
	printf("%d\n", sizeof(&ch[0]+1)); // 4/8 第二个元素的地址

	return 0;
}

#include<string.h>
int main()
{
	char ch[] = { 'a','b','c','d','e','f' };

	printf("%d\n", strlen(ch));          //大于6的随机值 
	printf("%d\n", strlen(ch + 0));      //
	//printf("%d\n", strlen(*ch));     //相当于strlen（'a'） -->strlen（97） 野指针
	//printf("%d\n", strlen(ch[1]));   //
	printf("%d\n", strlen(&ch));  //大于6的随机值
	printf("%d\n", strlen(&ch + 1)); // 随机值-6
	printf("%d\n", strlen(&ch[0] + 1));// 随机值-1

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
	printf("%d\n", strlen(&ch + 1));  //随机值
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
	printf("%d\n", strlen(&p));//随机值
	printf("%d\n", strlen(&p + 1));//随机值
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
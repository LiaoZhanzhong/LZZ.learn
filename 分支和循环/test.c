#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//һ���ػ�����   goto��� 
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };
	//shutdow -s -t 60  - �ػ�����   shutdow -a    - ȡ���ػ�����
	//system���� - ִ��ϵͳ����
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ��Խ���1���Ӻ�ػ�,���롰����ɵ������ȡ���ػ�\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "����ɵ��") == 0)   //strcmp���� - �Ƚ������ַ���
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
//��������Ϸ
//#include<time.h>
//#include<stdlib.h>
//void game()
//{
//	int ret = 0;
//	int guess = 0; //���ղµ�����
//	ret = rand() % 100 + 1;//����1-100�������   rand-����һ�������
//	while (1)
//	{
//		printf("������֣�");
//		scanf("%d", &guess);
//			if (guess > ret)
//			{
//				printf("�´���\n");
//			}
//			else if (guess < ret)
//			{
//				printf("��С��\n");
//			}
//			else 
//			{
//				printf("��ϲ�㣬�¶��ˣ�\n");
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
//	srand((unsigned int)time(NULL));//srand-������������
//	    //(unsigned int)time(NULL)-ʱ���-{��ǰ�����ʱ��-�������ʼʱ�䣨1970��1��1��0:0:0)}
//	do {
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("��ѡ0��1\n");
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
//	//int rigth = sizeof(arr1) / sizeof(arr1[0]) - 2; //��Ϊ����������
//	int right = strlen(arr1)-1; //strlen �����ַ�����
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��Ϣһ�� 1000����
//		system("cls"); //ִ��ϵͳ�����һ������  cls-�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

 

//���ֲ���
//int main()
//{
//	int k = 5;
//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//int sz = sizeof(arr) / sizeof(arr[0]);//�����������
//int left = 0; //���±�
//int right = sz - 1; //���±�
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
//		printf("�ҵ��ˣ��±���: %d\n", mid);
//		break;
//	}
//}if (left > right)
//printf("û�ҵ�\n");
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 7;
//	//дһ�����룬��arr����(�������ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (n == arr[i])
//		{
//			printf("�ҵ��ˣ��±���: %d\n", i);
//			break;
//		}
//
//	}
//	if (i == sz)
//		printf("û�ҵ�\n");
//	return 0;
//}



//����n�Ľ׳˵ĺ�
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

//����n�Ľ׳�
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





//do while ѭ��
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






//for����
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++ , y++)
//	{
//		printf("������\n");
//	}
//	return 0;
//}


//forѭ�� for(���ʽ1�����ʽ2�����ʽ3�����
//int main()
//{
//    //   ��ʼ��     �ж�     ����
//    for (int i = 0; i <= 100; i++)
//    {
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//
//    }
//    return 0;
//}

 // whileѭ�����
//  int main()
//{
//    int i = 0;// ��ʼ��
//    while (i <= 10)//�ж�
//    {
//        if (i == 5)
//            continue;
//
//        printf("%d ", i);
//        i++;//����
//
//    }
//    return 0;
//}








//int main()
//{
//	//getchar ���� ctrl+z ���ȡ EOF  EOF-end of file�ı��ʵ�ֵ��-1
//	int ch = 0;
//	while ((ch = getchar()) != EOF) //getchar ��ȡһ���ַ��Ƿ�ΪEOF ���������ӡ���ַ�
//	{
//		putchar(ch);
//	}
//	return 0;
//}





// if swith 

//switch (���ʽ) //���ʽ ��������ֵ�ͻ��ַ�����������
//{
//	case �������ʽ1�����1
//	case �������ʽ2�����2
//	case �������ʽ3�����3
//		.....
//	case �������ʽn�����n
//	default:printf("error\n");
//}

// &&-����  {}-�����   //break ����ѭ��
//��֧���-if��� 
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 0)
//			printf("ż�� = % d \n", i);
//		if (i % 2 == 1)
//			printf("���� = %d ", i);
//		i++;
//
//	}
//	return 0;

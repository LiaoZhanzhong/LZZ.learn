#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));   // 3*4*4/8    
	printf("%d\n", sizeof(a[0][0]));   //4
	printf("%d\n", sizeof(a[0]));    //a[0]��ʾ��һ�е������� 4*4
	printf("%d\n", sizeof(a[0] + 1));  //a[0]+1�е�a[0]���������Ԫ�ص�ַ �ȼ���a[0][0]+1Ҳ���ǵ�һ�еڶ���Ԫ�ص�ַ
	printf("%d\n", sizeof(*(a[0] + 1)));  //   
	printf("%d\n", sizeof(a + 1));  // 4/8 a�Ƕ�ά������Ԫ�ص�ַ û�е�����sizeof�ڲ� Ҳûȡ��ַ
	//a��ʾ��Ԫ�ص�ַ ��λ�������Ԫ�������ĵ�һ�� aҲ���ǵ�һ�еĵ�ַ
	//��a+1Ϊ������һ�� ��ʾ�ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(a + 1)));   //16 
	printf("%d\n", sizeof(&a[0] + 1));  //&a[0]�ó����ǵ�һ�еĵ�ַ+1 �õ��ڶ��еĵ�ַ  
	printf("%d\n", sizeof(*(&a[0] + 1)));//16   
	printf("%d\n", sizeof(*a));  // 16 a��ʾ��һ�еĵ�ַ *a��a��ַ�Ľ����� �õ����ǵ�һ������
	printf("%d\n", sizeof(*a[3]));// 16 �����ڵ���������Ҳ���ĸ����� û��Խ�� sizof�Ǹ������ͷ����ֽ�
	return 0;
}
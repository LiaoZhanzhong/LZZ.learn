#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));   // 3*4*4/8    
	printf("%d\n", sizeof(a[0][0]));   //4
	printf("%d\n", sizeof(a[0]));    //a[0]表示第一行的数组名 4*4
	printf("%d\n", sizeof(a[0] + 1));  //a[0]+1中的a[0]代表的是首元素地址 等价于a[0][0]+1也就是第一行第二个元素地址
	printf("%d\n", sizeof(*(a[0] + 1)));  //   
	printf("%d\n", sizeof(a + 1));  // 4/8 a是二维数组首元素地址 没有单独在sizeof内部 也没取地址
	//a表示首元素地址 二位数组的首元素是它的第一行 a也就是第一行的地址
	//则a+1为跳过第一行 表示第二行的地址
	printf("%d\n", sizeof(*(a + 1)));   //16 
	printf("%d\n", sizeof(&a[0] + 1));  //&a[0]拿出的是第一行的地址+1 得到第二行的地址  
	printf("%d\n", sizeof(*(&a[0] + 1)));//16   
	printf("%d\n", sizeof(*a));  // 16 a表示第一行的地址 *a对a地址的解引用 拿到的是第一行数据
	printf("%d\n", sizeof(*a[3]));// 16 若存在第四行数组也有四个整型 没有越界 sizof是根据类型访问字节
	return 0;
}
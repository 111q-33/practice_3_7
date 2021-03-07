#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//结构体类型的声明
//struct tag
//{
//      member-list;
//}variable-list;

//例如：

//struct book
//{
//	short price;
//	char name[10];
//	short page;
//};

//匿名结构体

//struct       //省略了标签tag
//{
//	short age;
//	short high;
//	char name[10];
//};//只能在这里创立变量

//结构体的自引用

//struct node
//{
//	int data;
//	struct node next;
//};  //错误用法，类似死递归。

//正确用法

//struct node
//{
//	int data;
//	struct node * next;
//};

//错误
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
//
////正确
//typedef struct Node
//{
//	int data;
//	Node* next;
//}Node;

//结构体内存对齐

//首先得掌握结构体的对齐规则：
//1. 第一个成员在与结构体变量偏移量为0的地址处。
//2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
//4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所
//有最大对齐数（含嵌套结构体的对齐数）的整数倍。

//struct s1     //大小12字节
//{
//	char a;
//	int b;
//	char c;
//};
//
//int main()
//{
//	struct s1 s;
//	printf("%d\n", sizeof(s));  
//	return 0;
//}

//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//struct S4   //大小32字节
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

//内存对齐是拿空间换时间

//结构体传参最优传指针

struct S3
{
	double d;
	char c;
	int i;
};

void test(struct S3* p)
{
	;
}

int main()
{
	struct S3 s;
	test(&s);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//�ṹ�����͵�����
//struct tag
//{
//      member-list;
//}variable-list;

//���磺

//struct book
//{
//	short price;
//	char name[10];
//	short page;
//};

//�����ṹ��

//struct       //ʡ���˱�ǩtag
//{
//	short age;
//	short high;
//	char name[10];
//};//ֻ�������ﴴ������

//�ṹ���������

//struct node
//{
//	int data;
//	struct node next;
//};  //�����÷����������ݹ顣

//��ȷ�÷�

//struct node
//{
//	int data;
//	struct node * next;
//};

//����
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;
//
////��ȷ
//typedef struct Node
//{
//	int data;
//	Node* next;
//}Node;

//�ṹ���ڴ����

//���ȵ����սṹ��Ķ������
//1. ��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ����
//2. ������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
//������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
//3. �ṹ���ܴ�СΪ����������ÿ����Ա��������һ��������������������
//4. ���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С������
//��������������Ƕ�׽ṹ��Ķ�����������������

//struct s1     //��С12�ֽ�
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
//struct S4   //��С32�ֽ�
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

//�ڴ�������ÿռ任ʱ��

//�ṹ�崫�����Ŵ�ָ��

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
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//char arr[7] = "abcdef";
//	////char arr1[10];
//	//////arr1是首元素地址不可修改
//	////arr1 = "abcdef";
//	//printf("%s\n", arr);
//	const char * p = "Hello!";
//	int a = 10;
//	//操作符的优先级
//	a += a *= a -= a / 3;
//	printf("%c\n",*p);
//	return 0;
//}

//void main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("hh\n");
//		if (i < 1)
//			continue;
//		if (i == 5)
//			break;
//		i++;
//	}
//}
//void exchange(char *s1,char * s2)
//{
//	while (*s1 != '\0')
//	{
//		if (*s1 != ' ')
//		{
//			*s2 = *s1;
//			s1++;
//			s2++;
//		}
//		else
//		{
//			strcpy(s2, "%20");
//			s2 += 3;
//			s1++;
//		}
//	}
//}
//int main()
//{
//	char arr[20] = "abc defgx yz";
//	char arr1[100] = { 0 };
//	exchange(arr,arr1);
//	printf("%s", arr1);
//	return 0;
//}
int main()
{
	int a = 5;
	if (a = 0)
	{
		printf("%d", a - 10);
	} 
		else
	{
		printf("%d", a++);
	} 
		return 0;
}
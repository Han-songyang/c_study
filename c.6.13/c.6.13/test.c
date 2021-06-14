#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;

	scanf("%d", &money);
	total = money;
	empty = money;

	while (empty > 1)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d", total);
	return 0;
}

//int main()
//{
//	int space = 6;
//	int n = 1;
//	for (int i = 0; i <= 6; i++)
//	{
//		for (int j = 0; j < space; j++)
//		{
//			printf(" ");
//			
//		}
//		space--;
//		for (int k = 0; k < n; k++)
//		{
//			printf("*");
//			
//		}
//		n += 2;
//		printf("\n");
//	}
//	n = 11;
//	space = 1;
//	for (int i = 0; i < 6; i++)
//	{
//		for (int j = 0; j < space; j++)
//		{
//			printf(" ");
//
//		}
//		space++;
//		for (int k = 0; k < n; k++)
//		{
//			printf("*");
//
//		}
//		n -= 2;
//		printf("\n");
//	}
//
//
//	return 0;
//}

//int Num(int n)
//{
//	int num = 0;
//	int tem = n;
//	while (tem > 9)
//	{
//		num++;
//		tem = tem / 10;
//	}
//	return num + 1;
//}
//
//int isNarcissisticNumber(int n,int ret)
//{
//	int sum = 0;
//	int tem = n;
//	while (tem)
//	{
//		sum += pow(tem % 10, ret);
//		tem = tem / 10;
//	}
//	if (sum == n)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	for (int i = 1; i <= 100000; i++)
//	{
//		int ret = Num(i);
//		if (isNarcissisticNumber(i,ret))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", & n);
//	int sum = 0;
//	int tem = 0;
//
//	for (int i = 0; i<5;i++)
//	{
//		tem = tem * 10 + n;
//		sum += tem;
//	}
//	printf("%d", sum);
//	return 0;
//}

//void Reverse(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while (left < right)
//    {
//        int ch = *left;
//        *left = *right;
//        *right = ch;
//        left++;
//        right--;
//    }
//
//}
//
//int main()
//{
//    char str[101] = { 0 };
//    while (gets(str))
//    {
//        Reverse(str);
//        printf("%s", str);
//        memset(str, 0, strlen(str));
//    }
//    return 0;
//}


//#include<stdio.h>
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", *p + i);
//	}
//	return 0;
//}
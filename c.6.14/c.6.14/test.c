#include<stdio.h>

void bubbleSort(int* arr,int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-1-i; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				int tem = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tem;
			}
		}
	}
}

int main()
{
	int arr[] = { 3,14,10,16,7,8,25,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);

	}
	return 0;
}

//int main()
//{
//	int a = 1999;
//	int b = 2299;
//
//	int n = a ^ b;
//
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int n = 3;
//
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d", ((n >> i) & 1));
//	}
//
//	printf("\n");
//
//	for (int i = 30; i >=0; i -= 2)
//	{
//		printf("%d", ((n >> i) & 1));
//	}
//	
//	return 0;
//}

//int numberOfOne(int n) 
//{
//	int count = 0;
//	while (n)
//	{
//		count++;
//		n = n & (n - 1);
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 15;
//	int a = numberOfOne(n);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d,%d", a, b);
//	return 0;
//}
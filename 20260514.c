#include<stdio.h>
//插入排序
void insertsort(int *data,int len)
{
	int key;
	for (int i = 1; i < len; i++)
	{
		key = data[i];
		int j = i - 1;
		while (j >= 0 && data[j] > key)
		{
			data[j + 1] = data[j];
			j--;
		}
		data[j + 1] = key;
	}
	//时间复杂度O(n2)
}
//折半插入排序
int binarySearch(int arr[], int key, int low, int high) 
{
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (arr[mid] <= key)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return low;
}
void binaryInsertionSort(int arr[], int n) 
{
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int pos = binarySearch(arr, key, 0, i - 1);
		// 移动元素
		for (int j = i - 1; j >= pos; j--)
			arr[j + 1] = arr[j];

		arr[pos] = key;
	}
}
int main()
{
	int arr[] = { 5, 2, 4, 6, 1, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	binaryInsertionSort(arr, n);

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

	return 0;
}
//int main()
//{
//	int data[6] = { 12,35,20,19,42,8 };
//	int len = sizeof(data) / sizeof(data[0]);
//	insertsort(data, len);
//	for (int n = 0; n < len; n++)
//	{
//		printf("%d\n", data[n]);
//	}
//	return 0;
//}
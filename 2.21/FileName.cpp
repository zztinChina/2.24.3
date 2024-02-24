#include<stdio.h>
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int count = 0;
	int h = n;
	while (h)
	{
		count++;
		h = h / 10;
	}
	printf("%d", count);
	int i = 0;
	int arr[100];
	for (i = 0; i < count; i++)
	{
		arr[i] = n % 10;
		n = n / 10;
	}
	int left = 0;
	int right = count - 1;
	int a = 0;
	while (left < right)
	{
		if (arr[left] != arr[right])
		{
			printf("此数字不是回文数字");
			a = 1;
			break;
		}
		else
			left++;
		right--;
	}
	if (a == 0)
	{
		printf("此数字是回文数字\n");
		for (i = 0; i < count; i++)
		{
			printf("%d", arr[i]);
		}
	}
}
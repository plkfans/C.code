#include<stdio.h>

int main() {//用折半查找在数组中查找值为x的元素。
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组长度。
	int i, x;
	int left = 0, right = sz - 1;//确定左右下标；
	
	scanf("%d", &x);
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (x == arr[mid])//如果找到元素，就直接跳出循环。
		{
			printf("该元素在数组中的位置为：arr[%d]\n", mid);
			break;
		}
		else
		{
			if (x > arr[mid])//查找元素比中间元素大，左下标=mid+1；
			{
				left = mid + 1;
			}
			else //查找元素比中间元素小，右下标=mid-1；
			{
				right = mid - 1;
			}
		}
	}
	if (left > right)
	{
		printf("未找到该元素。\n");
	}

}
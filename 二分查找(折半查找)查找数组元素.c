#include<stdio.h>

int main() {//���۰�����������в���ֵΪx��Ԫ�ء�
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);//�������鳤�ȡ�
	int i, x;
	int left = 0, right = sz - 1;//ȷ�������±ꣻ
	
	scanf("%d", &x);
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (x == arr[mid])//����ҵ�Ԫ�أ���ֱ������ѭ����
		{
			printf("��Ԫ���������е�λ��Ϊ��arr[%d]\n", mid);
			break;
		}
		else
		{
			if (x > arr[mid])//����Ԫ�ر��м�Ԫ�ش����±�=mid+1��
			{
				left = mid + 1;
			}
			else //����Ԫ�ر��м�Ԫ��С�����±�=mid-1��
			{
				right = mid - 1;
			}
		}
	}
	if (left > right)
	{
		printf("δ�ҵ���Ԫ�ء�\n");
	}

}
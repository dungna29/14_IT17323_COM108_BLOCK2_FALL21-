#include <stdio.h>
int arrNumberFpoly[] = { 1,88,7,9,6,5,8 };
int getMax(int arr[],int soPhanTu)
{
	int max = arr[0];
	for (int i = 1; i < soPhanTu; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}
void getMaxArr(int arr[],int soPhanTu)
{
	int max = arr[0];
	for (int i = 1; i < soPhanTu; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf_s(" Max = %d", max);
}
void sort(int arr[], int soPhanTu)
{
	for (int i = 0; i < soPhanTu; ++i)
	{
		for (int j = 0; j < soPhanTu; ++j)
		{
			if (arr[i]> arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;

			}
		}
	}
}

int main()
{
	int arrNumberFpoly[] = { 1,88,7,9,6,5,8 };

	getMaxArr(arrNumberFpoly, 7);
	printf_s(" Max = %d", getMax(arrNumberFpoly,7));
	// ================
	int arrNumberFpoly1[] = { 1,88,7,9,6,5,8 };
	
	printf_s(" Max = %d", getMax(arrNumberFpoly1,7));
}
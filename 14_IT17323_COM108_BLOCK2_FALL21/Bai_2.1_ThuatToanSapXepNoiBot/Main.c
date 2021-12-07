#include <stdio.h>
//Thuật toán nổi bọt - Bubble Sort
int main()
{
	int arrNumbers[] = { 9,5,4,6 };
	printf_s("Mang chua sap xep: \n");
	for (int i = 0; i < 4; ++i)
	{
		printf_s("%d ", arrNumbers[i]);
	}
	printf("\n");

	//Thuật toán nổi bán
	/*
	 *	arr: 9 5 4 6
	 *	Vòng i = 0,j = 1: 9 > 5 True
	 *	Hoán vị: 5 9 4 6
	 *	Vòng i = 0,j = 2: 5 > 4 True
	 *	Hoán vị: 4 9 5 6
	 *	Vòng i = 0,j = 3: 4 > 6 False
	 *	Hoán vị: 4 9 5 6 - Không thay đổi
	 *
	 *	Vòng i = 1,j = 2: 9 > 5 True
	 *	Hoán vị: 4 5 9 6
	 *	Vòng i = 1,j = 3: 5 > 6 False
	 *	Hoán vị: 4 5 9 6 - Không thay đổi
	 *
	 *
	 *	Vòng i = 2,j = 3: 9 > 6 True
	 *	Hoán vị: 4 5 6 9
	 *
	 *	Vòng i = 3 ngắt hết điều kiện để chạy
	 */

	// for (int i = 0; i < 4 -1; ++i)
	// {
	// 	for (int j = i+1; j < 4; ++j)
	// 	{
	// 		if (arrNumbers[i] > arrNumbers[j])//Nếu muốn sắp xếp giảm dần chỉ cần đảo dấu > thành <
	// 		{
	// 			int temp = arrNumbers[i];
	// 			arrNumbers[i] = arrNumbers[j];
	// 			arrNumbers[j] = temp;
	// 		}
	// 	}
	// }
	for (int i = 0; i < 4 - 1; i++)
	{
		printf("Lan chay thu: %d \n", i);
		printf("Gia Tri Tai Vi Tri %d \n", arrNumbers[i]);
		for (int j = i + 1; j < 4; j++)
		{
			int temp = arrNumbers[i];
			printf("Gia Tri cua %d > %d \n", arrNumbers[i], arrNumbers[j]);
			if (arrNumbers[i] > arrNumbers[j])
			{
				arrNumbers[i] = arrNumbers[j];
				arrNumbers[j] = temp;
			}
			for (int i = 0; i < 4; i++)
			{
				printf("%d ", arrNumbers[i]);
			}
			printf("\n");
		}
		printf("Sau khi sap xep lan thu %d \n", i);
		for (int i = 0; i < 4; i++)
		{
			printf("%d \n", arrNumbers[i]);
		}
	}
	//Cách in ra màn hình

	printf_s("Mang sau khi sap xep: \n");
	for (int i = 0; i < 4; ++i)
	{
		printf_s("%d ", arrNumbers[i]);
	}
	printf("\n");
}
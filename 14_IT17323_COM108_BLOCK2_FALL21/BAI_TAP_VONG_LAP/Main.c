#include <stdio.h>

int main()
{
	//Bài tập 1: Bảng cửu chương
	/*
	 *		5 x 1 = 5
	 *		5 x 2 = 10
	 *		5 x 3 = 15
	 *		.........
	 *		5 x 10 = 50
	 */
	int a = 5;
	for (int i = 1; i <= 10; ++i)
	{
		printf_s("%d x %d = %d \n", a, i, a * i);
	}
	//In Full bảng cửu chương cần sử dụng 2 vòng for
	// i x j = i*j
	for (int i = 1; i <=10 ; ++i)
	{
		for (int j = 1; j <= 10; ++j)
		{
			printf_s("%d x %d = %d \n", i, j, i * j);
		}
	}
}
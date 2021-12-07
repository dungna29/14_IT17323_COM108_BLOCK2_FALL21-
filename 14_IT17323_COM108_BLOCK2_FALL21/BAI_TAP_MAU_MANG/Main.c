#include <stdio.h>
int arrNumberFpoly[] = { 88,7,9,6,5,8 };//Khai báo biến toàn cục
void Bai1a();
void Bai1b();
void Bai1c();
int main()
{
	Bai1b();
}
void Bai1a()
{
	printf_s("Index 4 = %d \n", arrNumberFpoly[4]);
}
void Bai1b()
{
	for (int i = 0; i < 6; ++i)
	{
		printf_s("Index %d = %d \n", i, arrNumberFpoly[i]);
	}
}
void Bai1c()
{
	for (int i = 0; i < 6; ++i)
	{
		if (arrNumberFpoly[i] % 2 == 0)
		{
			printf_s("Index %d = %d \n", i, arrNumberFpoly[i]);
		}
	}
}
/*
 * Bài 1: Khai báo 1 mảng số nguyên gồm các phần tử sau
 * int arrNumberFpoly[] = {88,7,9,6,5,8};	 *
 *  - In số 5 ra màn hình bằng câu printf.
 *  - In tất cả các phần tử có ở trong mảng ra màn hình
 *  - In tất cả các giá trị chẵn ra màn hình.
 *
 *	Bài 2: Cho người dùng nhập vào 1 mảng số nguyên và in tổng dãy số người dùng đã nhập ra màn hình.
 *
 *
 *
 */
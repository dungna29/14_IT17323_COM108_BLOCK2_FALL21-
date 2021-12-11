#include <stdio.h>
int arrNumberFpoly[] = { 88,7,9,6,5,8 };//Khai báo biến toàn cục
void Bai1a();
void Bai1b();
void Bai1c();
void Bai2a();
void Bai8();
int main()
{
	Bai8();
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
void Bai2a()
{
	int arrNumbers[100], soLuong;
	printf_s("Moi ban nhạp SL: ");
	scanf_s("%d", &soLuong);
	for (int i = 0; i < soLuong; ++i)
	{
		printf_s("Index [%d] = ", i);
		scanf_s("%d", &arrNumbers[i]);
	}
	for (int i = 0; i < soLuong; ++i)
	{
		printf_s("Index [%d] = %d \n", i, arrNumbers[i]);
	}
}
void Bai8()
{
	// Bài 8: Nhập nhiệt độ các người đi xét nghiệm liệt kê vị trí thứ tự và những người có nhiệt độ sốt từ 38.1 độ trở lên.
	double arrNhietDo[100];
	int soLuong;
	printf_s("So luong?: ");
	scanf_s("%d", &soLuong);
	for (int i = 0; i < soLuong; ++i)
	{
		printf_s("Nhap nhiet do nguoi thu %d: ", i);
		scanf_s("%lf", &arrNhietDo[i]);
	}
	for (int i = 0; i < soLuong; ++i)
	{
		if (arrNhietDo[i] >= 38.1)
		{
			printf_s("Canh bao nguoi o vi tri thu %d co dau hieu sot = %.1lf \n", i, arrNhietDo[i]);
		}
		
	}
	double nhietDoCaoNhat = arrNhietDo[0];
	for (int i = 1; i < soLuong; ++i)
	{
		if (nhietDoCaoNhat < arrNhietDo[i])
		{
			nhietDoCaoNhat = arrNhietDo[i];
		}
	}
	printf_s("Nhiet do nguoi cao nhat = %1.lf", nhietDoCaoNhat);
	
}
/*
 * Bài 1: Khai báo 1 mảng số nguyên gồm các phần tử sau
 * int arrNumberFpoly[] = {88,7,9,6,5,8};
 *  - In số 5 ra màn hình bằng câu printf.
 *  - In tất cả các phần tử có ở trong mảng ra màn hình
 *  - In tất cả các giá trị chẵn ra màn hình.
 *
 *	Bài 2: Cho người dùng nhập vào 1 mảng số nguyên và in tổng dãy số người dùng đã nhập ra màn hình.
 *
 *	Bài 3: Cho người dùng nhập vào 1 mảng số nguyên rồi in ra số lớn nhất trong mảng
 *
 *	Bài 4: Cho người dùng nhập vào 1 mảng số nguyên cho in ra các số chẵn lẻ trên 2 dòng riêng biệt.
 *
 *	Bài 5: Cho người dùng nhập vào 1 mảng chẵn nếu là số lẻ nhập vào bắt nhập lại.
 *
 *  Bài 6: Nhập vào cân nặng các người yêu cũ tìm ra vị trí người có số cân nặng bé nhất.
 *
 *	Bài 7: Nhập vào năm sinh các người yêu cũ in ra người yêu cũ có tuổi lớn nhất và thứ tự nhập vào.
 *	Ví dụ: Năm 2000 Tuổi 21 Người yêu thứ 3.
 *
 *	Bài 8: Nhập nhiệt độ các người đi xét nghiệm liệt kê vị trí thứ tự và những người có nhiệt độ sốt từ 38.1 độ trở lên.
 *
 */
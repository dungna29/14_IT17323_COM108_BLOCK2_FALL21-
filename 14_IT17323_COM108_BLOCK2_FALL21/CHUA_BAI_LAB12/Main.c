#include <stdio.h>

void bai5()
{
	//In khoảng bảng cửu chương
	int khoang1, khoang2;
	printf_s("Moi nhap KHOANG1: ");
	scanf_s("%d", &khoang1);//8
	printf_s("Moi nhap KHOANG2: ");
	scanf_s("%d", &khoang2);//5
	//Sử dụng thuật toán hoán vị
	if (khoang1> khoang2)
	{
		int temp = khoang1;
		khoang1 = khoang2;
		khoang2 = temp;
	}
	for (int i = khoang1; i <= khoang2; ++i)
	{
		for (int j = 1; j <= 10; ++j)
		{
			printf_s("%d x %d = %d \n", i, j, i * j);
		}
	}
}
void Bai7()
{
	//Nhập một dãy số do người dùng rồi cộng tổng
	int so, soLuong, TongCacSo = 0;
	printf_s("Ban muon nhap bao nhieu: ");
	scanf_s("%d", &soLuong);
	for (int i = 0; i < soLuong; ++i)
	{
		printf_s("Moi ban nhap so thu %d: ", i);
		scanf_s("%d", &so);
		//TongCacSo = TongCacSo + so;
		TongCacSo += so;
	}
	printf_s("Tong cac so: %d\n", TongCacSo);
}

int main()
{
	Bai7();
}
#include <stdio.h>
/*
	 * Bài tập: Tạo cho thầy 1 Project mới để làm bài tập sau.
	 * Viết 1 chương trình có menu và vòng lặp. Bao gồm các bài sau:
	 * 1. Phép cộng 4 số (Sử dụng hàm không tham số)
	 * 2. Phép Nhân 5 số (Sử dụng hàm có 5 tham số truyền vào)
	 * 3. Tính hiệu các số nhập vào do người dùng chỉ định(Sử dụng hàm không tham số)
	 * 4. Kiểm tra số nhập vào có phải số chia hết cho 3(Sử dụng hàm có tham số.)
	 */
void menu();
void bai1PhepCong4So();
void bai2Nhan5So(int a, int b, int c, int e, int f);
void bai3TinhHieuCacSoNhapVao();
void bai4KiemTraSoChia3(int a);
int main()
{
	while (1)
	{
		menu();
	}
}
void menu()
{	
	int choice;
	printf_s("1. Cong 4 so \n");
	printf_s("2. Nhan 5 so \n");
	printf_s("3. Tinh Hieu \n");
	printf_s("4. Kiem Tra Chia 3 \n");
	printf_s("Moi ban chon chuc nang: ");
	scanf_s("%d", &choice);
	switch (choice)
	{
	case 1:
		bai1PhepCong4So();
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		printf_s("Chuc nang khong ton tai");
		break;
	}
}
void bai1PhepCong4So()
{
	int a, b, c, d;
	printf_s("Moi ban nhap a: ");
	scanf_s("%d", &a);
	printf_s("Moi ban nhap b: ");
	scanf_s("%d", &b);
	printf_s("Moi ban nhap c: ");
	scanf_s("%d", &c);
	printf_s("Moi ban nhap d: ");
	scanf_s("%d", &d);
	printf_s("%d + %d + %d + %d = %d \n", a, b, c, d, a + b + c + d);
}
#include <stdio.h>
/*
 *  Bài tập máy tính bỏ túi FPOLY
 *	1. Phep cong 2 so
 *	2. Phep tru 2 so
 *	3. Phep nhan 2 so
 *	4. Phep chia 2 so
 */
int main()
{
	double so1, so2, kq;
	char choice;
	while (1)//Sử dụng vòng lặp vô hạn
	{
		printf_s("Nhap so a: ");
		scanf_s("%lf", &so1);
		printf_s("Nhap so b: ");
		scanf_s("%lf", &so2);
		//Sau khi nhập số mà tiếp đó nhập ký tự hoặc chuỗi sẽ bị trôi lệnh.
		getchar();
		printf_s("May Tinh Fpoly Cong 2 So \n");
		printf_s("+. Cong 2 so \n");
		printf_s("-. Tru 2 so \n");
		printf_s("x. Nhan 2 so \n");
		printf_s(":. Chia 2 so \n");
		printf_s("Moi ban chon chuc nang: ");		
		scanf_s("%c", &choice);
		switch (choice)
		{
		case '+':
			printf_s("%.0lf + %.0lf = %.0lf \n", so1, so2, so1 + so2);
			break;
		case '-':
			printf_s("%.0lf - %.0lf = %.0lf \n", so1, so2, so1 - so2);
			break;
		case 'x':
			printf_s("%.0lf x %.0lf = %.0lf \n", so1, so2, so1 * so2);
			break;
		case ':':
			printf_s("%.0lf : %.0lf = %.0lf \n", so1, so2, so1 / so2);
			break;
		default:
			printf_s("Chuc nang ban chon khong ton tai \n");
			break;
		}
	}
}
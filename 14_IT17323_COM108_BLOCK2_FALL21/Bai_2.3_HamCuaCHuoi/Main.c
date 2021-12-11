#include <stdio.h>
#include <string.h>//Thêm thư viện
int main()
{
	while (1)
	{
		char ten1[50];
		char ten2[50];
		char ten3[50];
		printf("Moi ban nhap ten 1 vao day: ");
		gets_s(ten1, 50);
		//gets_s(<String>, 100);//Dùng để lấy các ký tự từ bàn phím và cả khoảng trắng

		//strlen(inputNguoiDung) tìm ra độ dài của chuỗi - Độ dài của chuỗi có kiểu dữ liệu là int
		printf("Do dai cua chuoi [%s] la : %d \n", ten1, strlen(ten1));

		//strcpy_s dùng để copy từ chuỗi này sang chuỗi khác
		strcpy_s(ten2, 50, ten1);
		printf("In ten2 ra [%s]\n", ten2);
		//strcat_s dùng để nối 2 chuỗi lại với nhau
		printf("Moi ban nhap ten 3 vao day: ");
		gets_s(ten3, 50);
		strcat_s(ten3, 50, ten2);
		printf("Copy In ten2 ra [%s]\n", ten3);
		//strcmp dùng để so sánh chuỗi 
		char pass1[50];
		char pass2[50];
		printf("Pass: ");
		gets_s(pass1, 50);
		printf("Pass: ");
		gets_s(pass2, 50);
		if (strcmp(pass1, pass2) == 0)//Đúng thi bằng 0
		{
			printf("Dang Nhap Thanh Cong \n");
		}
		else //Sai thì là -1
		{
			printf("That Bai");
		}
		//_strrev dùng để đảo ngược ký tự trong chuỗi
		_strrev(ten1);
		printf("Sau khi dao nguoc: %s \n", ten1);
		//_strlwr_s dùng để viết thường toàn bộ ký tự FPT fpt

		//_strlwr_s dùng để viết hoa toàn bộ ký tự fpt FPT

		//strstr dùng để tìm ký tự trong chuỗi chỉ định
		//Về xem 3 hàm còn lại
	}
}
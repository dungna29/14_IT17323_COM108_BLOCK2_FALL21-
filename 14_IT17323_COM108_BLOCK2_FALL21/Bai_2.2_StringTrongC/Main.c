#include <stdio.h>
/*
 * Chuỗi trong C nó là 1 mảng ký tự
 * Java -String, C# - string (chuỗi)
 */

int main()
{
	//Chu Van Duy = Chuỗi = Tập hợp của nhiều ký tự = Mảng ký tự

	char arr[] = { 'D','U','Y' };
	//Khái báo 1 mảng kiểu char
	char arrName[100];
	printf_s("Moi ban nhap ten: ");
	//scanf_s("%s", arrName, 100); Nó ko đọc được khoảng trắng tiếp theo
	//scanf_s("%[^\n]", arrName, 100);//Regex
	//fgets(arrName, 100, stdin);
	gets_s(arrName, 100);//Cách này thường dùng khi đi thi
	printf_s("Chao ban %s", arrName);
	/*
	 * Nhập các thông tin SV FPOLY sau:
	 *	1. Tên đầy đủ
	 *	2. Năm sinh
	 *	3. Sdt
	 *	4. Điểm Thi C
	 *	Sau đó in ra màn hình như sau:
	 *	Tên + Năm sinh + Tuổi + SDT + Diểm C - (Qua môn hoặc học lại)
	 */

	char ten[100],sdt[100];
	int ns;
	double diemThiC;
	printf_s("Moi ban nhap Ten: ");
	gets_s(ten, 100);
	printf_s("Moi ban nhap sdt: ");
	gets_s(sdt, 100);
	printf_s("Moi ban nhap ns: ");
	scanf_s("%d", &ns);
	printf_s("Moi ban nhap diemC: ");
	scanf_s("%lf", &diemThiC);
	printf_s("Ten: %s ", ten);
	printf_s("Sdt: %s ", sdt);
	printf_s("Ns: %d ", ns);
	printf_s("Tuoi: %d ", 2021-ns);
	printf_s("DiemC: %.1lf ", diemThiC);
	if (diemThiC>= 5)
	{
		printf_s("Qua Mon");
		return;
	}
	printf_s("Hoc Lai");
	
}
#include <stdio.h>

/// NHẬP DỮ LIỆU TỪ BÀN PHÍM
/// scanf_s("%d",&<biến để hứng giá trị>);- Xác định muốn hứng giá trị có kiểu dữ liệu gì?
/// Vẫn có tương tự như printf: %d, %s, %f, %c, %lf

int main()
{
	//Ví dụ 1: Viết 1 chương trình nhập năm sinh vào và in ra

	//Bước 1: Xác định bài toán cần bao nhiêu biến và có kiểu dữ liệu là gì
	int ns;//Khai báo 1 biến để hứng giác

	//Bước 2: Chỉ dẫn cho người dùng nhập vào
	printf_s("Moi ban nhap vao nam sinh: ");
	scanf_s("%d", &ns);//ns sẽ hứng giá trị sau khi người dùng nhập vào.

	//Bước 3: Thực thi
	printf_s("Nam sinh ban vua nhap vao la: %d \n", ns);

	//In ra tuổi của người nhập vào
	printf_s("Tuoi cua ban la: %d \n", 2021 - ns);

	/*
	 * Bài 1: Viết 1 chương trình cho phep nhap vao 3 nam sinh:
	 * Nam Sinh 1: 1999
	 * Nam Sinh 2: 2000
	 * Nam Sinh 3: 2001
	 *
	 * Bài 2: Viết 1 chương trình in điểm môn C ra màn hình theo công thức sau
	 * Diem C cua ban la: 8.6
	 *
	 * Bài 3: Viết 1 chương trình in 1 ký tự bất kì ra màn hình
	 *
	 */
	 //Bài 1:
	int ns1, ns2, ns3;
	printf_s("Moi ban nhap vao ns1: ");
	scanf_s("%d", &ns1);
	printf_s("Moi ban nhap vao ns2: ");
	scanf_s("%d", &ns2);
	printf_s("Moi ban nhap vao ns3: ");
	scanf_s("%d", &ns3);

	//In ra
	printf_s("Nam sinh 1: %d - Tuoi: %d \n", ns1, 2021 - ns1);
	printf_s("Nam sinh 2: %d \n", ns2);
	printf_s("Nam sinh 3: %d \n", ns3);


	//Hiện tượng trôi lệnh khi đằng trước nó nhập các số để xử lý tình huống này các bạn đặt câu lệnh getchar();
	getchar();
	//Bai 3:
	char c;
	printf_s("Moi ban nhap ky tu ban thich: ");
	scanf_s("%c", &c);
	printf_s("Ky tu ban vua nhap: %c \n", c);
}
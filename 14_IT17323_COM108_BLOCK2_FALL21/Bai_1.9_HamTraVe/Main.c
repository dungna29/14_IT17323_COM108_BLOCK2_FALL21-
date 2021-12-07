#include <stdio.h>
/*
* Hàm trả về
*	1. Không tham số
*	2. Có tham số
* Cách sử dụng:
*	1. Tên hàm phải có nghĩa
*	2. Tên hàm luôn có động từ đứng trước:
*		Ví dụ: tinhTong(),layDsSinhVien, getLstSinhVien.....
  Công thức:
  <Kiểu dữ liệu> <Tên hàm> (<Các tham số truyền vào>)
  {
	return <Giá trị phải đúng với kiểu dữ liệu của hàm>;
  }
*/
void tinhTong2A(int a, int b)
{
	printf_s("%d + %d = %d \n", a, b, a + b);
}
int tinhTong2B(int a, int b)
{
	printf_s("%d + %d = %d \n", a, b, a + b);
	return a + b;//Không được code sau return
}
char ham1()
{
	char c = '/';
	return c;
}
double ham2()
{
	return 8.6;
}
//Buổi sau giải thử bài 7 bằng hàm trả về.
int main()
{

	tinhTong2A(10, 10);
	tinhTong2B(5,7);//Không thể tự in giá trị ra màn hình
	printf_s("Tong = %d\n", tinhTong2B(5, 7)+2000);
	int a = tinhTong2B(5, 7);

	//Lưu ý: Khi mới học thì hãy coi cả hàm trả về là 1 giá trị.
	
}
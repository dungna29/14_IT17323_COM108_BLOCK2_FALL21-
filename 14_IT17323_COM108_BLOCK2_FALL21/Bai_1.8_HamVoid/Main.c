#include <stdio.h>
/*
* Hàm không trả về - void
*	1. Không tham số
*	2. Có tham số
* Cách sử dụng:
*	1. Tên hàm phải có nghĩa
*	2. Tên hàm luôn có động từ đứng trước:
*		Ví dụ: tinhTong(),layDsSinhVien, getLstSinhVien.....
  Công thức:
  <Kiểu hàm> <Tên hàm> (<Các tham số truyền vào>)
  {
		//Body code
  }
*/
void tinhTong()//Hàm không tham số và không trả về
{
	int a = 5, b = 7;
	printf_s("%d + %d = %d \n", a, b, a + b);
}
/*
 * Đối với hàm có tham số:
 *	- Có thể truyền nhiều kiểu dữ liệu
 *	- Khi sử dụng phải truyền đủ tham số
 */
void tinhTong2(int a, int b)
{
	printf_s("%d + %d = %d \n", a, b, a + b);
}
/*
 * Tham số có thể là nhiều kiểu dữ liệu khác nhau để phục vụ bài toán
 */
void chucNang1(char c,double d, int a, float f)
{
	
}
/*
 * Thông thường chúng ta phải khai báo hàm ở phía trên. Nhưng nếu như nhiều hàm sẽ gây khó quản lý code.
 */
void hamChucNang1();
void hamChucNang2(int a,int b, int c);//Khai báo hàm chưa hề code, việc khai báo này sẽ giúp đẩy main lên gần đầu hơn.
int main()
{
	printf_s("Chao cac ban den voi bai HAM\n");
	//Phần 1: Cách gọi hàm không tham số: Phải biết tên hàm, kết thúc phải có dấu ();
	//tinhTong;//Gọi sai cách
	tinhTong();//Đang gọi hàm đúng cách

	//Phần 2: Khi sử dụng hàm có tham số phải truyền tham số đúng vị trí và đúng kiểu dữ liệu
	//tinhTong2(); Sai vì không truyền đủ tham số
	tinhTong2(55,45);//Truyền tham số

	printf_s("Ket thu chuong trinh!");	
}
void hamChucNang1()
{
	//Body code
	//Triển khai code sau khi đã khai báo ở trên
}
void hamChucNang2(int a, int b, int c)
{
	//Body code
}

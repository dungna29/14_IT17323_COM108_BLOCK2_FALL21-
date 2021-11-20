#include <stdio.h>
/*
 * Bài 1.2 Câu lệnh printf(); giúp in ra màn hình
 */
int main()
{
	/*
	 * Phần 1: Cách sử dụng
	 * printf("Chuỗi giá trị");// Dùng để in 1 chuỗi giá trị ra màn hình
	 * printf("%d",<giá trị>);// In giá trị của biến ra màn hình
	 * %d- Số nguyên %f- số thực %s- String %c- ký tự %lf - double
	 */

	printf_s("Nam nay toi se hoc lap trinh C \n");
	int namHienTai = 2021, namSau = 2022;
	printf_s("Nam %d toi se hoc xong ngon ngu C \n", namHienTai);

	printf_s("Sau nam %d sang nam %d toi se hoc lap trinh JAVA hoac C# \n", namHienTai, namSau);

	//Ctrl  + F5 = chạy
	/*
	 * Bài 1: Viết 1 chương trình khai báo 3 năm sinh
	 * sau đó in 3 năm sinh ra màn hình theo công thức sau:
	 * Nam Sinh 1: 1999
	 * Nam Sinh 2: 2000
	 * Nam Sinh 3: 2001
	 *
	 * Bài 2: Viết 1 chương trình in điểm môn C ra màn hình
	 * theo công thức sau
	 * Diem C cua ban la: 8.6
	 *
	 * Bài 3: Viết 1 chương trình in 1 ký tự bất kì ra màn hình
	 *
	 */
	//Bài 1:
	printf_s("==============Bai 1====================\n");
	int y1 = 1999, y2=2000, y3=2001;
	printf_s("Nam Sinh 1: %d \n", y1);
	printf_s("Nam Sinh 2: %d \n", y2);
	printf_s("Nam Sinh 3: %d \n", y3);
	printf_s("==============Bai 2====================\n");
	double diemC = 8.6;
	printf_s("Diem C cua ban la: %.1lf \n", diemC);
	printf_s("==============Bai 3====================\n");
	char c = '%';
	printf_s("Ky tu %c la cai toi muon \n", c);	
}